--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:59:43 11/11/2018
-- Design Name:   
-- Module Name:   C:/Users/ITreeMan/Desktop/Lab7/light_pattern/light_pattern_tbw.vhd
-- Project Name:  light_pattern
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: light_pattern
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY light_pattern_tbw IS
END light_pattern_tbw;
 
ARCHITECTURE behavior OF light_pattern_tbw IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT light_pattern
    PORT(
         clk : IN  std_logic;
         seg7_disp : OUT  std_logic_vector(7 downto 0);
         PB5 : IN  std_logic;
			toggle1 : in STD_LOGIC;
         led_disp : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal PB5 : std_logic := '0';
	signal toggle1 : std_logic := '0';

 	--Outputs
   signal seg7_disp : std_logic_vector(7 downto 0);
   signal led_disp : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: light_pattern PORT MAP (
          clk => clk,
          seg7_disp => seg7_disp,
          PB5 => PB5,
			 toggle1 => toggle1,
          led_disp => led_disp
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
      wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;

		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		toggle1 <= '1';


      wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;

		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
		
		wait for 800 ns;	
		PB5 <= '1' ;
		wait for 10 ns ;
		PB5 <= '0' ;
		wait for 20 ns ;
   end process;

END;
