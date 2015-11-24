library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


entity tb_divider is
generic(n: integer := 6);
end tb_divider;

architecture beh of tb_divider is
component divider
  port (clk   : in  std_logic;
        rst_n : in  std_logic;
        ini   : in  std_logic;
        dsor  : in  std_logic_vector(n-1 downto 0);  -- dividendo
        dndo  : in  std_logic_vector(n-1 downto 0);  -- divisor
        coc   : out std_logic_vector(n-1 downto 0);  -- cociente
        res   : out std_logic_vector(n-1 downto 0);  -- resto
        ready : out std_logic );
  end component;

  signal clk, rst_n, inicio, ready    : std_logic;
  signal divisor                   : std_logic_vector(n-1 downto 0);
  signal cociente, dividendo       : std_logic_vector(n-1 downto 0);
  signal resto                     : std_logic_vector(n-1 downto 0);
begin


  -------------------------------------------------------------------------------
  -- Component instantiation
  -------------------------------------------------------------------------------

  i_dut : divider
    port map (
      clk       => clk,
      rst_n     => rst_n,
      ini       => inicio,
      dsor      => divisor,
      dndo      => dividendo,
      coc       => cociente,
      res       => resto,
      ready     => ready );

  -----------------------------------------------------------------------------
  -- Process declaration
  -----------------------------------------------------------------------------
  -- Input clock
  p_clk : process
  begin
    clk <= '0', '1' after 5 ns;
    wait for 10 ns;
  end process p_clk;

  -- External reset
  p_rst : process
  begin
    rst_n <= '0';
    wait for 250 ns;
    rst_n <= '1';
    wait;
  end process p_rst;

  p_driver : process
    variable v_i, v_j    : natural := 0;
    variable v_calculo   : std_logic_vector(n-1 downto 0);
    variable v_correctas : natural := 0;

  begin
    inicio <= '0';
    wait for 250 ns;
    dndo_loop : for v_i in 1 to (2**n)-1 loop
      dividendo <= std_logic_vector(to_unsigned(v_i, n));
      dsor_loop : for v_j in 1 to v_i loop
        divisor <= std_logic_vector(to_unsigned(v_j, n));
        wait until rising_edge(clk);
        inicio    <= '1';
        wait until rising_edge(clk);
        inicio    <= '0';
        wait until ready = '1';
        wait until rising_edge(clk);
        v_calculo := std_logic_vector(unsigned(dividendo)/unsigned(divisor));
        assert v_calculo = cociente
          report "Error en la division"
          severity error;
        wait until rising_edge(clk);
      end loop dsor_loop;
    end loop dndo_loop;
    wait;
  end process p_driver;

end beh;