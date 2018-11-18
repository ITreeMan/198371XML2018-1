----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:06:18 11/05/2018 
-- Design Name: 
-- Module Name:    pattle3 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


entity patternlight is
    Port ( sw : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           seg7 : out  STD_LOGIC_VECTOR (7 downto 0);
           common : out  STD_LOGIC);
end patternlight;

architecture Behavioral of patternlight is

type state is (S1, S2, S3);
type pattern1 is array(0 to 5) of STD_LOGIC_VECTOR(7 downto 0);
type pattern2 is array(0 to 5) of STD_LOGIC_VECTOR(7 downto 0);
type pattern3 is array(0 to 7) of STD_LOGIC_VECTOR(7 downto 0);

signal p1 : pattern1:= ("10000000","01000000","00100000","00010000","00001000","00000100");
signal p2 : pattern2:= ("10000000","00000100","00001000","00010000","00100000","01000000");
signal p3 : pattern3:= ("10000000","01000000","00000010","00001000","00010000","00100000","00000010","00000100");

signal count	: INTEGER range 0 to 10000000:=0;
signal disp_en	: STD_LOGIC;
signal temp		: STD_LOGIC:='0';
signal current	: state := S1;

signal cs1 : INTEGER range 0 to 5 :=0;
signal cs2 : INTEGER range 0 to 5 :=0;
signal cs3 : INTEGER range 0 to 7 :=0;

signal seg7_temp : STD_LOGIC_VECTOR (7 downto 0);

signal push : STD_LOGIC :='0';

begin
	common <= '0';
	ispush : process(rst,sw)
	begin
		if rst = '0' then
			current <= S1;
		elsif clk'event and clk = '1' then
			if sw = '0' and push ='0' then
				push <= '1';
				case current is 
					when S1 => current <= S2;
					when S2 => current <= S3;
					when S3 => current <= S1;
					when others =>
				end case;
			elsif sw = '1' and push ='1' then
				push <= '0';
			end if;
		end if;
	end process;
	
	show : process(disp_en,current)
	begin
		if disp_en'event and disp_en = '1' then
			cs1 <= 0;
			cs2 <= 0;
			cs3 <= 0;
			case current is
				when S1 => 
					seg7_temp <= p1(cs1);
					if cs1 = 5 then
						cs1 <= 0;
					else
						cs1 <= cs1 + 1;
					end if;
				when S2 => 
					seg7_temp <= p2(cs2);
					if cs2 = 5 then
						cs2 <= 0;
					else
						cs2 <= cs2 + 1;
					end if;
				when S3 => 
					seg7_temp <= p3(cs3);
					if cs3 = 7 then
						cs3 <= 0;
					else
						cs3 <= cs3 + 1;
					end if;					
				when others =>
			end case;
		end if;	
	end process;
	seg7 <= seg7_temp;
	delay : process(clk,count)
	begin
		if clk'event and clk ='1' then
			if count = 10000000 then
				count <= 0;
				temp <= temp xor '1';
			else
				count <= count + 1;
			end if;
		end if;
	end process;
	disp_en <= temp;
end Behavioral;

