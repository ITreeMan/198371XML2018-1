LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY FSM_2patt_tb IS
END FSM_2patt_tb;
 
ARCHITECTURE behavior OF FSM_2patt_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FSM_2Patt_for_tb
    PORT(
         clk : IN  std_logic;
         seg7_disp : OUT  std_logic_vector(7 downto 0);
         PB5 : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal PB5 : std_logic := '0';

 	--Outputs
   signal seg7_disp : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FSM_2Patt_for_tb PORT MAP (
          clk => clk,
          seg7_disp => seg7_disp,
          PB5 => PB5
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;

   -- Stimulus process
   stim_proc: process
   begin		
      
		PB5 <= '0';
		wait for 60 ns;
		PB5 <= '1';
		wait for 10 ns;
	
		
   end process;


END;
