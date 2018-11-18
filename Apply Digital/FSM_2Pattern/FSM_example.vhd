library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity FSM_example is
    Port ( seg7_disp : out  STD_LOGIC_VECTOR (7 downto 0);
			  seg_led :out STD_LOGIC_VECTOR (3 downto 0);
           clk : in  STD_LOGIC;
			  PB5 : in  STD_LOGIC);
end FSM_example;

architecture Behavioral of FSM_example is
	type stateTYPE is (S1,S2,S3,S4,S5,S6);
	signal cur_state :stateTYPE ;
	signal delay :integer := 0 ;
	signal sw1 : std_logic := '1' ;
	signal pb_push : std_logic := '0'; 
	signal state :STD_LOGIC :='0' ; 
	
	
begin
	sw1 <= not PB5 ;
	
	processOfDelay : process (clk)
	begin 
		if clk'event and clk = '1' then 
			seg_led <= "1110";
			if delay = 10000000 then 
				delay <= 0 ;
			else
				delay <= delay + 1 ;
			end if;
		end if ;
	end process ;

	pressPB:process(PB5)
	begin
	
		if sw1'event and sw1 = '1' then
		
			for i in 0 to 750 loop
			end loop;
			
			pb_push <= not pb_push ;
			
		end if;
		
	end process;

	FSM_ex :process (clk,state)
	begin

		if clk'event and clk ='1' then 
			if pb_push = '0' then
				if delay = 0 then	
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
				end if ; 
			else
				if delay = 0 then	
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
		end if; 
	end process;

end Behavioral;

