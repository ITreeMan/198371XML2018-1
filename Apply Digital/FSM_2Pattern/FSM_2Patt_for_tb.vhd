library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity FSM_2Patt_for_tb is
    Port ( clk : in  STD_LOGIC;
           seg7_disp : out  STD_LOGIC_VECTOR(7 downto 0) := "10000000";
           PB5 : in  STD_LOGIC);
end FSM_2Patt_for_tb;

architecture Behavioral of FSM_2Patt_for_tb is
	type stateTYPE is (s1, s2, s3, s4, s5, s6);
	signal cur_state :stateTYPE ;
	signal delay :integer := 0 ;
	signal sw1 : std_logic ;
	signal pb_push : std_logic := '1';  
begin
	sw1 <= PB5 ;
	
	pressPB:process(sw1)
	begin
		if sw1' event and sw1 = '1' then
			pb_push <= not pb_push ;		-- toggle switch		
		end if;
	end process;

	FSM_ex :process (clk)
	begin
		if clk'event and clk ='1' then 
			if pb_push = '1' then			-- starting 
				case cur_state is 
				when S1 => seg7_disp <= "10000000";
					cur_state <= S2 ;
				when S2 => seg7_disp <= "01000000";
					cur_state <= S3 ;
				when S3 => seg7_disp <= "00100000";
					cur_state <= S4 ;
				when S4 => seg7_disp <= "00010000";
					cur_state <= S5 ;
				when S5 => seg7_disp <= "00001000";
					cur_state <= S6 ;
				when S6 => seg7_disp <= "00000100";
					cur_state <= S1 ;
				end case; 
			else
				case cur_state is 
				when S1 => seg7_disp <= "10000000";
					cur_state <= S6 ;
				when S2 => seg7_disp <= "01000000";
					cur_state <= S1 ;
				when S3 => seg7_disp <= "00100000";
					cur_state <= S2 ;
				when S4 => seg7_disp <= "00010000";
					cur_state <= S3 ;	
				when S5 => seg7_disp <= "00001000";
					cur_state <= S4 ;
				when S6 => seg7_disp <= "00000100";
					cur_state <= S5 ;
				end case;
			end if ; 
		end if;
	end process;
end Behavioral;

