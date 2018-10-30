library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.lab03_pack.all;

entity seg7_decoder is
    Port ( 
           Bin_in : in  STD_LOGIC_VECTOR (3 downto 0) := "0000";
			  Seg7 : out  STD_LOGIC_VECTOR (7 downto 0);
           clk : in  STD_LOGIC;
			  digit1 : out STD_LOGIC_VECTOR (3 downto 0) := "0000";
			  digit2 : out STD_LOGIC_VECTOR (3 downto 0) := "0000";
			  digit3 : out STD_LOGIC_VECTOR (3 downto 0) := "0000";
			  digit4 : out STD_LOGIC_VECTOR (3 downto 0) := "0000";
			  pb1 : in STD_LOGIC:='0';
			  pb2 : in STD_LOGIC:='0';			  			  
			  pb3 : in STD_LOGIC:='0';
			  pb4 : in STD_LOGIC:='0';
			  pb5 : in STD_LOGIC
			
--				pb : in STD_LOGIC_VECTOR(4 downto 0)
			  );
end seg7_decoder;

architecture Behavioral of seg7_decoder is
	signal Reg_D : STD_LOGIC_VECTOR (3 downto 0) := "0000"; 
	signal seg7_temp : STD_LOGIC_VECTOR (7 downto 0) ;
--	signal Delay : integer:=0 ;
--	signal start_stop : STD_LOGIC ; 
	signal state : STD_LOGIC := '1';
--	type array_type is array (0 to 3) of std_logic_vector(3 downto 0);
--	signal Reg : array_type;
	signal second1 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	signal second2 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	signal minute1 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	signal minute2 : STD_LOGIC_VECTOR (3 downto 0) := "0000";
	
	
	begin
	counter : process(clk,state,pb1)
	begin 
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
		if pb5' event and pb5 = '1' then
			state <= not state;
		end if;
		
		if state = '1' then 
			if clk' event and clk = '1' then
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
										minute1 <= "0000";
										second2 <= "0000";
										second1 <= "0000";
									end if ;
							end if ;
						end if ;
					else
						second1 <= second1 + 1 ;
						Reg_D <= second1;
					end if ;
			end if;
		elsif state = '0' then 
			if pb1 = '1' then
				second1 <= Bin_in;
			elsif pb2 = '1' then 
				second2 <= Bin_in;
			elsif pb3 = '1' then 
				minute1 <= Bin_in;
			elsif pb4 = '1' then 
				minute2 <= Bin_in;
			end if;
		end if;

	end process counter ;

	seg7_decoder : PROCESS(Reg_D,seg7_temp)
	BEGIN
	
	END PROCESS seg7_decoder;
	Seg7 <= seg7_temp ;
	digit1 <= second1 ;
	digit2 <= second2 ;
	digit3 <= minute1 ;
	digit4 <= minute2 ;
end Behavioral;

