LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY counte_tb IS
END counte_tb;
 
ARCHITECTURE behavior OF counte_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT).
 
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
   constant clk_period : time := 20 ns;
 
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
		
		Bin_in <= "1000" ;
		wait for 25 ns ;
		pb1 <= '1' ;
		wait for 20 ns ; 
		pb1 <= '0' ;
		wait for 25 ns ;
		
		Bin_in <= "0101" ;
		wait for 25 ns ;
		pb2 <= '1' ;
		wait for 20 ns ; 
		pb2 <= '0' ;
		wait for 25 ns ;
		
		Bin_in <= "1001" ;
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
		wait for 25 ns ; 
		
		pb5 <= '1' ;
		wait for 20 ns ;
		pb5 <= '0' ;
		wait for 800 ns ;
	
   end process;

END;
