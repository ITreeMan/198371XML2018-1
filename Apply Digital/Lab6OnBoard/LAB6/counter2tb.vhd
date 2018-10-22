--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:38:38 10/11/2017
-- Design Name:   
-- Module Name:   C:/Users/Labcom9/Desktop/LAB7 - Sec3 - Group6/LAB7/counter2tb.vhd
-- Project Name:  LAB7
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: seg7_decoder
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
 
ENTITY counter2tb IS
END counter2tb;
 
ARCHITECTURE behavior OF counter2tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT seg7_decoder
    PORT(
         Bin_in : IN  std_logic_vector(3 downto 0);
         Seg7 : OUT  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         digit1 : OUT  std_logic_vector(3 downto 0);
         digit2 : OUT  std_logic_vector(3 downto 0);
         digit3 : OUT  std_logic_vector(3 downto 0);
         digit4 : OUT  std_logic_vector(3 downto 0);
         pb1 : IN  std_logic;
         pb2 : IN  std_logic;
         pb3 : IN  std_logic;
         pb4 : IN  std_logic;
         pb5 : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Bin_in : std_logic_vector(3 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal pb1 : std_logic := '0';
   signal pb2 : std_logic := '0';
   signal pb3 : std_logic := '0';
   signal pb4 : std_logic := '0';
   signal pb5 : std_logic := '0';

 	--Outputs
   signal Seg7 : std_logic_vector(7 downto 0);
   signal digit1 : std_logic_vector(3 downto 0);
   signal digit2 : std_logic_vector(3 downto 0);
   signal digit3 : std_logic_vector(3 downto 0);
   signal digit4 : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: seg7_decoder PORT MAP (
          Bin_in => Bin_in,
          Seg7 => Seg7,
          clk => clk,
          digit1 => digit1,
          digit2 => digit2,
          digit3 => digit3,
          digit4 => digit4,
          pb1 => pb1,
          pb2 => pb2,
          pb3 => pb3,
          pb4 => pb4,
          pb5 => pb5
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
      wait for 100 ns;	
		pb5 <= '1' ;
		wait for 10 ns ;
		pb5 <= '0' ;
		wait for 20 ns ;
		
		Bin_in <= "0101" ;
		pb1 <= '1' ;
		wait for 20 ns ; 
		pb1 <= '0' ;
		wait for 25 ns ;
		
		Bin_in <= "1000" ;
		pb2 <= '1' ;
		wait for 20 ns ; 
		pb2 <= '0' ;
		wait for 25 ns ;
		
		Bin_in <= "0101" ;
		wait for 25 ns ;
		pb3 <= '1' ;
		wait for 20 ns ; 
		pb3 <= '0' ;
		wait for 25 ns ;
		
		Bin_in <= "0101" ;
		wait for 25 ns ;
		pb4 <= '1' ;
		wait for 20 ns ; 
		pb4 <= '0' ;
		wait for 20 ns ; 
		
		pb5 <= '1' ;
		wait for 20 ns ;
		pb5 <= '0' ;
		wait for 80 ns ;
	
   end process;


END;
