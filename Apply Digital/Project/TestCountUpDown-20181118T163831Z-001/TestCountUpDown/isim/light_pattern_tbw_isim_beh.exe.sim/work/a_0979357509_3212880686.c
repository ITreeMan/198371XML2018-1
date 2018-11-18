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
static const char *ng0 = "C:/Users/ITreeMan/Desktop/Lab7/light_3pattern/light_pattern.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_0979357509_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 4648);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0979357509_3212880686_p_1(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4536);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 4712);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 10);
    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4776);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 4712);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4776);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_0979357509_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;

LAB0:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1312U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    t2 = (t0 + 4552);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 2312U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 4840);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t16 = (t15 + 1);
    t2 = (t0 + 4904);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t16;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t1 = (t15 >= 3);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4904);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB12;

}

static void work_a_0979357509_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16};

LAB0:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4568);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (char *)((nl0) + t9);
    goto **((char **)t4);

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(74, ng0);
    t10 = (t0 + 7746);
    t12 = (t0 + 4968);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 8U);
    xsi_driver_first_trans_fast_port(t12);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    goto LAB8;

LAB10:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 7754);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB8;

LAB11:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 7762);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB41;

LAB42:    t1 = (unsigned char)0;

LAB43:    if (t1 != 0)
        goto LAB38;

LAB40:
LAB39:    goto LAB8;

LAB12:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7770);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB44;

LAB46:
LAB45:    goto LAB8;

LAB13:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 7778);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB54;

LAB56:
LAB55:    goto LAB8;

LAB14:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 7786);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB64;

LAB66:
LAB65:    goto LAB8;

LAB15:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 7794);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t3 = *((unsigned char *)t4);
    t6 = (t3 == (unsigned char)3);
    if (t6 == 1)
        goto LAB77;

LAB78:    t1 = (unsigned char)0;

LAB79:    if (t1 != 0)
        goto LAB74;

LAB76:
LAB75:    goto LAB8;

LAB16:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 7802);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB80;

LAB82:
LAB81:    goto LAB8;

LAB17:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5032);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB18:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 1);
    if (t6 != 0)
        goto LAB21;

LAB23:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 2);
    if (t1 != 0)
        goto LAB24;

LAB25:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 3);
    if (t1 != 0)
        goto LAB26;

LAB27:
LAB22:    goto LAB19;

LAB21:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB22;

LAB24:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)7;
    xsi_driver_first_trans_fast(t2);
    goto LAB22;

LAB26:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB22;

LAB28:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 1);
    if (t6 != 0)
        goto LAB31;

LAB33:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 2);
    if (t1 != 0)
        goto LAB34;

LAB35:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 3);
    if (t1 != 0)
        goto LAB36;

LAB37:
LAB32:    goto LAB29;

LAB31:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB32;

LAB34:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB32;

LAB36:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB32;

LAB38:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB39;

LAB41:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t7 = (t17 == 3);
    t1 = t7;
    goto LAB43;

LAB44:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 1);
    if (t6 != 0)
        goto LAB47;

LAB49:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 2);
    if (t1 != 0)
        goto LAB50;

LAB51:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 3);
    if (t1 != 0)
        goto LAB52;

LAB53:
LAB48:    goto LAB45;

LAB47:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)7;
    xsi_driver_first_trans_fast(t2);
    goto LAB48;

LAB50:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    goto LAB48;

LAB52:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    goto LAB48;

LAB54:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 1);
    if (t6 != 0)
        goto LAB57;

LAB59:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 2);
    if (t1 != 0)
        goto LAB60;

LAB61:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 3);
    if (t1 != 0)
        goto LAB62;

LAB63:
LAB58:    goto LAB55;

LAB57:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB58;

LAB60:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB58;

LAB62:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB58;

LAB64:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 1);
    if (t6 != 0)
        goto LAB67;

LAB69:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 2);
    if (t1 != 0)
        goto LAB70;

LAB71:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 3);
    if (t1 != 0)
        goto LAB72;

LAB73:
LAB68:    goto LAB65;

LAB67:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    goto LAB68;

LAB70:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB68;

LAB72:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)6;
    xsi_driver_first_trans_fast(t2);
    goto LAB68;

LAB74:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)7;
    xsi_driver_first_trans_fast(t2);
    goto LAB75;

LAB77:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t7 = (t17 == 3);
    t1 = t7;
    goto LAB79;

LAB80:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 1);
    if (t6 != 0)
        goto LAB83;

LAB85:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 2);
    if (t1 != 0)
        goto LAB86;

LAB87:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t17 = *((int *)t4);
    t1 = (t17 == 3);
    if (t1 != 0)
        goto LAB88;

LAB89:
LAB84:    goto LAB81;

LAB83:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB84;

LAB86:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB84;

LAB88:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 5032);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t2);
    goto LAB84;

}


extern void work_a_0979357509_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0979357509_3212880686_p_0,(void *)work_a_0979357509_3212880686_p_1,(void *)work_a_0979357509_3212880686_p_2,(void *)work_a_0979357509_3212880686_p_3};
	xsi_register_didat("work_a_0979357509_3212880686", "isim/light_pattern_tbw_isim_beh.exe.sim/work/a_0979357509_3212880686.didat");
	xsi_register_executes(pe);
}
