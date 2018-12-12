----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:59:06 11/11/2018 
-- Design Name: 
-- Module Name:    light_pattern - Behavioral 
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

entity light_pattern is
	Port ( clk : in  STD_LOGIC;
          seg7_disp : out  STD_LOGIC_vector(7 downto 0);
			 PB1 : in STD_LOGIC;
			 led_disp : out STD_LOGIC);
end light_pattern;

architecture Behavioral of light_pattern is
		type stateTYPE is (S0,S1,S2,S3,S4,S5,S6,S7,S8,S9,S10);
		signal cur_patternPB1 : integer := 0;
		signal cur_state : stateTYPE;
		signal count_d : integer := 0;
		signal disp_en : STD_LOGIC := '0';
		signal b_state : std_logic := '0'; 

begin
		led_disp <= '0';
		
		counter: process(clk, count_d)
		begin
			if clk'event and clk = '1' then
				count_d <= count_d + 1;

				if (count_d = 10) then
					count_d <= 0;
					disp_en <= '1';
				else
					disp_en <= '0';
				end if;
			end if;
		end process counter;
		
		PB: process(PB1)
		begin

			if PB1'event and PB1 = '1' then
				b_state <= not b_state;
			end if;
			if (b_state = '1') then
				cur_patternPB1 <= cur_patternPB1 + 1;
				if (cur_patternPB1 >= 10) then
						cur_patternPB1 <= 0;
				end if;
			end if;
		end process PB;
				
		FSM: process(clk, disp_en, cur_patternPB1)
		begin
			if clk'event and clk = '1' then
				case cur_state is
				
						WHEN S0 => seg7_disp <= "11111100" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 0) then
									cur_state <= S1;
								end if;
							end if;
							
						WHEN S1 => seg7_disp <= "01100000" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 1) then
									cur_state <= S2;
								end if;
							end if;
							
						WHEN S2 => seg7_disp <= "11011010" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 2) then
									cur_state <= S3;
								end if;
							end if;
							
						WHEN S3 => seg7_disp <= "11110010" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 3) then
									cur_state <= S4;
								end if;
							end if;
							
						WHEN S4 => seg7_disp <= "01100110" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 4) then
									cur_state <= S5;
								end if;
							end if;
							
						WHEN S5 => seg7_disp <= "10110110" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 5) then
									cur_state <= S6;
								end if;
							end if;
							
						WHEN S6 => seg7_disp <= "10111110" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 6) then
									cur_state <= S7;
								end if;
							end if;
							
						WHEN S7 => seg7_disp <= "10011110" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 7) then
									cur_state <= S8;
								end if;
							end if;

						WHEN S8 => seg7_disp <= "10011110" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 8) then
									cur_state <= S9;
								end if;
							end if;
							
						WHEN S9 => seg7_disp <= "10011110" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 9) then
									cur_state <= S10;
								end if;
							end if;
							
						WHEN S10 => seg7_disp <= "10011110" ; 
							if (disp_en = '1') then
								if (cur_patternPB1 = 10) then
									cur_state <= S1;
								end if;
							end if;
						
						WHEN OTHERS => cur_state <= S1;
				end case; 
			end if;
		end process FSM;

end Behavioral;