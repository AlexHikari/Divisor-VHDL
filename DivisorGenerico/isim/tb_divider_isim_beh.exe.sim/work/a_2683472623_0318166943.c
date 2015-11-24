/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Divisor-VHDL-master/DivisorGenerico/test_div.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
char *ieee_p_1242562249_sub_1922276087_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2683472623_0318166943_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4872);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_delta(t2, 0U, 1, 0LL);
    t7 = (5 * 1000LL);
    t8 = (t0 + 4872);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_subsequent_trans_delta(t8, 0U, 1, t7);
    xsi_set_current_line(51, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3720);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

}

static void work_a_2683472623_0318166943_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;

LAB0:    t1 = (t0 + 4160U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t7 = (250 * 1000LL);
    t2 = (t0 + 3968);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2683472623_0318166943_p_2(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t8;
    int t9;
    int t10;
    int t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    unsigned char t19;
    unsigned int t20;
    unsigned int t21;
    int t22;

LAB0:    t1 = (t0 + 4408U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t7 = (250 * 1000LL);
    t2 = (t0 + 4216);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);
    t8 = xsi_vhdl_pow(2, 6);
    t9 = (t8 - 1);
    t2 = (t0 + 7788);
    *((int *)t2) = 1;
    t3 = (t0 + 7792);
    *((int *)t3) = t9;
    t10 = 1;
    t11 = t9;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(88, ng0);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 7788);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t12, *((int *)t4), 6);
    t6 = (t0 + 5064);
    t13 = (t6 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t5, 6U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 7788);
    t3 = (t0 + 7796);
    *((int *)t3) = 1;
    t4 = (t0 + 7800);
    *((int *)t4) = *((int *)t2);
    t8 = 1;
    t9 = *((int *)t2);

LAB12:    if (t8 <= t9)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 7788);
    t10 = *((int *)t2);
    t3 = (t0 + 7792);
    t11 = *((int *)t3);
    if (t10 == t11)
        goto LAB11;

LAB45:    t8 = (t10 + 1);
    t10 = t8;
    t4 = (t0 + 7788);
    *((int *)t4) = t10;
    goto LAB8;

LAB13:    xsi_set_current_line(74, ng0);
    t5 = (t0 + 7796);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t12, *((int *)t5), 6);
    t13 = (t0 + 5128);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 6U);
    xsi_driver_first_trans_fast(t13);
    xsi_set_current_line(75, ng0);

LAB18:    t2 = (t0 + 4728);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB14:    t2 = (t0 + 7796);
    t8 = *((int *)t2);
    t3 = (t0 + 7800);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB15;

LAB44:    t22 = (t8 + 1);
    t8 = t22;
    t4 = (t0 + 7796);
    *((int *)t4) = t8;
    goto LAB12;

LAB16:    t4 = (t0 + 4728);
    *((int *)t4) = 0;
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);

LAB22:    t2 = (t0 + 4744);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 992U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t4 = (t0 + 4744);
    *((int *)t4) = 0;
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 5000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(79, ng0);

LAB26:    t2 = (t0 + 4760);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 992U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    t3 = (t0 + 4760);
    *((int *)t3) = 0;
    xsi_set_current_line(80, ng0);

LAB30:    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t3 = (t0 + 1512U);
    t4 = *((char **)t3);
    t18 = *((unsigned char *)t4);
    t19 = (t18 == (unsigned char)3);
    if (t19 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t4 = (t0 + 4776);
    *((int *)t4) = 0;
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 7680U);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t4 = (t0 + 7664U);
    t6 = ieee_p_1242562249_sub_1922276087_1035706684(IEEE_P_1242562249, t12, t3, t2, t5, t4);
    t13 = (t0 + 2808U);
    t14 = *((char **)t13);
    t13 = (t14 + 0);
    t15 = (t12 + 12U);
    t20 = *((unsigned int *)t15);
    t21 = (1U * t20);
    memcpy(t13, t6, t21);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t18 = 1;
    if (6U == 6U)
        goto LAB34;

LAB35:    t18 = 0;

LAB36:    if (t18 == 0)
        goto LAB32;

LAB33:    xsi_set_current_line(85, ng0);

LAB42:    t2 = (t0 + 4792);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB29:    t3 = (t0 + 992U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    t6 = (t0 + 7804);
    xsi_report(t6, 20U, (unsigned char)2);
    goto LAB33;

LAB34:    t20 = 0;

LAB37:    if (t20 < 6U)
        goto LAB38;
    else
        goto LAB36;

LAB38:    t2 = (t3 + t20);
    t5 = (t4 + t20);
    if (*((unsigned char *)t2) != *((unsigned char *)t5))
        goto LAB35;

LAB39:    t20 = (t20 + 1);
    goto LAB37;

LAB40:    t4 = (t0 + 4792);
    *((int *)t4) = 0;
    goto LAB14;

LAB41:    t3 = (t0 + 992U);
    t18 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t18 == 1)
        goto LAB40;
    else
        goto LAB42;

LAB43:    goto LAB41;

LAB46:    goto LAB2;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

}


extern void work_a_2683472623_0318166943_init()
{
	static char *pe[] = {(void *)work_a_2683472623_0318166943_p_0,(void *)work_a_2683472623_0318166943_p_1,(void *)work_a_2683472623_0318166943_p_2};
	xsi_register_didat("work_a_2683472623_0318166943", "isim/tb_divider_isim_beh.exe.sim/work/a_2683472623_0318166943.didat");
	xsi_register_executes(pe);
}
