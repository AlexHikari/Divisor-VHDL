----------------------------------------------------------------------------------
-- Company:        Universidad Complutense de Madrid
-- Engineer:       TOC&TC
-- 
-- Create Date:    
-- Design Name:    Divisor secuencial
-- Module Name:    camino de datos - rtl
-- Project Name:   Practica 5
-- Target Devices: Spartan-3 
-- Tool versions:  ISE 14.1
-- Description:    Camino de datos del divisor secuencial de 8 bits con restauracion
-- Dependencies: 
-- Revision: 
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity cd is
  generic(n: integer := 6; m: integer := 3);
  port (
    clk    : in  std_logic;                      -- clock
    rst_n  : in  std_logic;                      -- reset
    dsor   : in  std_logic_vector(m-1 downto 0);   -- Divisor
    dndo   : in  std_logic_vector(n-1 downto 0);   -- Dividendo
    coc    : out std_logic_vector(n-1 downto 0);   -- Cociente
    res    : out std_logic_vector(n-1 downto 0);   -- Resto
    ctrl   : in  std_logic_vector(10 downto 0);   -- Control
    status : out std_logic_vector(1 downto 0));  -- Status
end entity cd;

 architecture rtl of cd is

  signal dsor_aligned   : std_logic_vector(n-1 downto 0);
  signal dsor_r, dndo_r : std_logic_vector(n downto 0);
  signal coc_r          : std_logic_vector(n-1 downto 0);
  signal shift          : unsigned(n-1 downto 0);
  signal cntr           : unsigned(n-1 downto 0);
  signal cntr_d1        : unsigned(n-1 downto 0);
  signal add            : std_logic_vector(n downto 0);
  signal mux_output     : std_logic_vector(n downto 0);
  -- Control signals
  signal add_sub        : std_logic;
  signal cntr_d1_ld     : std_logic;
  signal cntr_ld        : std_logic;
  signal cntr_cu        : std_logic;
  signal dsor_ld        : std_logic;
  signal dsor_sh        : std_logic;
  signal dndo_ld        : std_logic;
  signal coc_ld         : std_logic;
  signal coc_sh         : std_logic;
  signal alig_ld        : std_logic;
  signal mux            : std_logic;

  -- Status signals
  signal zero     : std_logic;
  signal dndo_msb : std_logic;
begin
 -----------------------------------------------------------------------------
  -- Internamente no trabajo con las componentes del vector ctrl y status sino que
  -- damos nombre a cada una de las componentes y trabajamos con ellas por
  -- separado. De esta forma es mucho más legible el codigo obtenido. Luego
  -- la componente status(0) la asigno a la senal zero y la componente
  -- status(1) la asigna la senal dndo_msb.
  -- Y lo mismo para el vector ctrl. La componente ctrl(0) se la asigno a mux,
  -- ctrl(1) a coc_sh, ctrl(2) a coc_ld y asi sucesivamente.
  -----------------------------------------------------------------------------
  
  (add_sub,
   cntr_d1_ld,
   cntr_ld,
   cntr_cu,
   dsor_ld,
   dsor_sh,
   dndo_ld,
   coc_ld,
   coc_sh,
   mux,
	alig_ld) <= ctrl;

  status <= (dndo_msb &
             zero);

  -----------------------------------------------------------------------------
  -- Alineador
  -----------------------------------------------------------------------------
  p_aligner : process (dsor) is
  begin
--  if rst_n = '0' then
--		  dsor_aligned <= (others => '0');
--	     elsif rising_edge(clk) then
--	        if alig_ld = '1' then
--  	  end if;
--  end if;
   if dsor (2 downto 1) = "00" then
     dsor_aligned <= dsor(0) & "00000";
	  shift <= "000010";
	elsif dsor (2 downto 2) = "0" then
     dsor_aligned <= dsor(1 downto 0) & "0000";
	  shift <= "000001";
	else
	  dsor_aligned <= dsor & "000";
	  shift <= "000000";
	end if;

  end process p_aligner;

  -----------------------------------------------------------------------------
  -- Registro desplazamiento a derecha
  -----------------------------------------------------------------------------
  p_dsor_r : process (clk, rst_n) is
  begin
    if rst_n = '0' then
      dsor_r <= (others => '0');
    elsif rising_edge(clk) then
      if dsor_ld = '1' then
        dsor_r <= '0' & dsor_aligned;
      elsif dsor_sh = '1' then
        dsor_r <= '0' & dsor_r(n downto 1);
      end if;
    end if;
  end process p_dsor_r;

  -----------------------------------------------------------------------------
  -- Registro con carga paralelo
  -----------------------------------------------------------------------------
  p_dndo_r : process (clk, rst_n) is
  begin
    if rst_n = '0' then
      dndo_r <= (others => '0');
    elsif rising_edge(clk) then
      if dndo_ld = '1' then
        dndo_r <= mux_output;
      end if;
    end if;
  end process p_dndo_r;

  p_dndo_msb : dndo_msb <= dndo_r(n);

  -----------------------------------------------------------------------------
  -- Registro de desplazamiento a izquierda
  -----------------------------------------------------------------------------
  p_coc_r : process (clk, rst_n) is
  begin
    if rst_n = '0' then
      coc_r <= (others => '0');
    elsif rising_edge(clk) then
      -- Completar
		if coc_ld = '1' then
			coc_r <= (others => '0');
		elsif coc_sh = '0' and dndo_msb = '1' then
			coc_r <= coc_r(n-2 downto 0) & '0';
		elsif coc_sh = '1' and dndo_msb = '0' then
			coc_r <= coc_r(n-2 downto 0) & '1';
		end if;
    end if;
  end process p_coc_r;

  -----------------------------------------------------------------------------
  -- Contador. Observad que la senal cntr esta definida como unsigned luego no
  -- es necesario hacer casting pues el operador "-" entiende la resta de un
  -- unsigned menos 1.
  -----------------------------------------------------------------------------
  p_cntr : process (clk, rst_n) is
  begin
    if rst_n = '0' then 
      cntr <= (others => '0');
    elsif rising_edge(clk) then
      -- Completar
		if cntr_ld = '1' then
			cntr <= shift;
		elsif cntr_cu = '1' then
				cntr <= cntr - 1;
		end if;
    end if;
  end process p_cntr;

  -----------------------------------------------------------------------------
  -- Registro carga paralelo
  -----------------------------------------------------------------------------
  p_cntr_d1 : process (clk, rst_n) is
  begin
    if rst_n = '0' then
      cntr_d1 <= (others => '1');
    elsif rising_edge(clk) then
		if cntr_d1_ld = '1' then
			cntr_d1 <= cntr;
		end if;
    end if;
  end process p_cntr_d1;

  -----------------------------------------------------------------------------
  -- Comparador con cero
  -----------------------------------------------------------------------------
  p_cmp : process (cntr_d1) is
  begin
    if cntr_d1 = "000" then
      zero <= '1';
    else
      zero <= '0';
    end if;
  end process p_cmp;

  -----------------------------------------------------------------------------
  -- Sumador/restador
  -----------------------------------------------------------------------------
  p_add : process (dndo_r, dsor_r, add_sub) is
  begin  -- process p_add
    if add_sub = '1' then
      add <= std_logic_vector(unsigned(dndo_r) + unsigned(dsor_r));
    elsif add_sub = '0' then
      -- Completar
		add <= std_logic_vector(unsigned(dndo_r) - unsigned(dsor_r));
    end if;
  end process p_add;

  -----------------------------------------------------------------------------
  -- Multiplexor
  -----------------------------------------------------------------------------
  p_mux : process (dndo, add, mux) is
  begin  -- process p_mux
    if mux = '0' then
      mux_output <= '0' & dndo;
    elsif mux = '1' then
      mux_output <= add;
    end if;
  end process p_mux;

  p_res : res <= dndo_r(n-1 downto 0);
  p_coc : coc <= coc_r;
end architecture rtl;
