
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.lab03_pack.all;

entity seg7_decoder is
    Port ( 
           Bin_in : in  STD_LOGIC_VECTOR (3 downto 0) := "0000";
			  Seg7 : out  STD_LOGIC_VECTOR (7 downto 0);
           clk : in  STD_LOGIC;
			  digit : out STD_LOGIC_VECTOR (3 downto 0) := "0000";
			  pb1 : in STD_LOGIC:='0';
			  pb2 : in STD_LOGIC:='0';			  			  
			  pb3 : in STD_LOGIC:='0';
			  pb4 : in STD_LOGIC:='0';
			  pb5 : in STD_LOGIC:='0'
			
--				pb : in STD_LOGIC_VECTOR(4 downto 0)
			  );
end seg7_decoder;

architecture Behavioral of seg7_decoder is
	signal Reg_D : STD_LOGIC_VECTOR (3 downto 0) := "0000"; 
	signal seg7_temp : STD_LOGIC_VECTOR (7 downto 0) ;
	signal Delay : integer:=0 ;
	signal start_stop : STD_LOGIC ; 
	signal second1 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	signal second2 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	signal minute1 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	signal minute2 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	signal set_in1 : STD_LOGIC;
	signal set_in2 : STD_LOGIC;
	signal set_in3 : STD_LOGIC;
	signal set_in4 : STD_LOGIC;
	signal Bin_in_rev : STD_LOGIC_VECTOR (3 downto 0 ) := "0000";
	signal d_count : integer := 0;
	signal d_state : integer range 0 to 3 := 0;
	signal state : STD_LOGIC := '0';
	
begin
	
	start_stop <= not pb5;
	set_in1 <= not pb1;
	set_in2 <= not pb2;
	set_in3 <= not pb3;
	set_in4 <= not pb4;
	Bin_in_rev <= not Bin_in;

	counter : process(clk,Delay,state,start_stop,set_in1,set_in2,set_in3,set_in4,Bin_in_rev,Reg_D)
	begin 
		
		if start_stop' event and start_stop = '1' then
			for i in 0 to 750 loop
			end loop;
			state <= not state;
		end if;
		
		if state = '0' then 
			if clk' event and clk = '1' then
				Delay <= Delay + 1;
				if Delay >= 25000000 then
					Delay <= 0;
					if second1 >= "1001" then
						second2 <= second2 + 1;
						second1 <= "0000";
						if second2 >= "0101" then -- check 60 seconds
							minute1 <= minute1 + 1;
							second2 <= "0000";
							if minute1 >= "1001" then
								minute2 <= minute2 + 1;
								minute1 <= "0000";
								if minute2 >= "0101" then -- check 60 minutes
									minute2 <= "0000";
								end if ;
							end if ;
						end if ;
					else
						second1 <= second1 + 1 ;
					end if ;
				else Delay <= Delay + 1;
				end if;
			end if;
		elsif state = '1' then 
			if set_in1 = '1' then
				if Bin_in_rev >= "0101" then
					minute2 <= "0101";
				else
					minute2 <= Bin_in_rev;
				end if;
			elsif set_in2 = '1' then 
				if Bin_in_rev >= "1001" then
					minute1 <= "1001";
				else
					minute1 <= Bin_in_rev;
				end if;
			elsif set_in3 = '1' then 
				if Bin_in_rev >= "0101" then
					second2 <= "0101";
				else
					second2 <= Bin_in_rev;
				end if;
			elsif set_in4 = '1' then 
				if Bin_in_rev >= "1001" then
					second1 <= "1001";
				else
					second1 <= Bin_in_rev;
				end if;
			end if;
		end if;

	end process counter ;
	
	select_digit : process(clk,d_count)
	begin
	
		if clk' event and clk = '1' then
			if d_count >= 6250 then
				d_count <= 0;
				if d_state = 0 then
					digit <= "1110";
					Reg_D <= second1;
					d_state <= d_state + 1;
				elsif d_state = 1 then
					digit <= "1101";
					Reg_D <= second2;
					d_state <= d_state + 1;
				elsif d_state = 2 then
					digit <= "1011";
					Reg_D <= minute1;
					d_state <= d_state + 1;
				else
					digit <= "0111";
					Reg_D <= minute2;
					d_state <= 0;
				end if;
			else	
				d_count <= d_count + 1;	
			end if;
		end if;
		
	end process;

	seg7_decoder : PROCESS(Reg_D,seg7_temp)
	BEGIN
		case Reg_D is
			when "0000" => seg7_temp <= zero_seg;
			when "0001" => seg7_temp <= one_seg;
			when "0010" => seg7_temp <= two_seg;
			when "0011" => seg7_temp <= three_seg;
			when "0100" => seg7_temp <= four_seg;
			when "0101" => seg7_temp <= five_seg;
			when "0110" => seg7_temp <= six_seg;
			when "0111" => seg7_temp <= seven_seg;
			when "1000" => seg7_temp <= eight_seg;
			when "1001" => seg7_temp <= nine_seg;
			when others => seg7_temp <= "11111111";
			
		END case;
	END PROCESS seg7_decoder;
	Seg7 <= seg7_temp ;
--	digit1 <= second1 ;
--	digit2 <= second2 ;
--	digit3 <= minute1 ;
--	digit4 <= minute2 ;
end Behavioral;

