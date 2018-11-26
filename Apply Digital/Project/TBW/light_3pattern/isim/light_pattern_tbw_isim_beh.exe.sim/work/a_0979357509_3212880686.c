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
static const char *ng0 = "C:/Users/ITreeMan/Documents/198371XML2018-1/Apply Digital/Project/TBW/light_3pattern/light_pattern.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_0979357509_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(40, ng0);

LAB3:    t1 = (t0 + 4808);
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

LAB0:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4696);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 4872);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 10);
    if (t1 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4936);
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

LAB8:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 4872);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4936);
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

LAB0:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1312U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    t2 = (t0 + 4712);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 2472U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 5000);
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

LAB8:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1832U);
    t5 = *((char **)t2);
    t15 = *((int *)t5);
    t16 = (t15 + 1);
    t2 = (t0 + 5064);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t16;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t15 = *((int *)t4);
    t1 = (t15 >= 8);
    if (t1 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5064);
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
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    static char *nl0[] = {&&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19};
    static char *nl1[] = {&&LAB76, &&LAB77, &&LAB78, &&LAB79, &&LAB80, &&LAB81, &&LAB82, &&LAB83};

LAB0:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB72;

LAB73:    t3 = (unsigned char)0;

LAB74:    if (t3 != 0)
        goto LAB69;

LAB71:
LAB70:
LAB3:    t1 = (t0 + 4728);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 992U);
    t6 = xsi_signal_has_event(t1);
    if (t6 == 1)
        goto LAB8;

LAB9:    t5 = (unsigned char)0;

LAB10:    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(74, ng0);
    t7 = (t0 + 1992U);
    t11 = *((char **)t7);
    t12 = *((unsigned char *)t11);
    t7 = (char *)((nl0) + t12);
    goto **((char **)t7);

LAB8:    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t5 = t10;
    goto LAB10;

LAB11:    goto LAB6;

LAB12:    xsi_set_current_line(76, ng0);
    t13 = (t0 + 8706);
    t15 = (t0 + 5128);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 8U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB11;

LAB13:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 8714);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB11;

LAB14:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 8722);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB11;

LAB15:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 8730);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB11;

LAB16:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 8738);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB11;

LAB17:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 8746);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB51;

LAB53:
LAB52:    goto LAB11;

LAB18:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 8754);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB57;

LAB59:
LAB58:    goto LAB11;

LAB19:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 8762);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB63;

LAB65:
LAB64:    goto LAB11;

LAB20:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 5192);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB21:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 1);
    if (t5 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB22;

LAB24:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB27:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 2);
    if (t5 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB28;

LAB30:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 3);
    if (t5 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB37;

LAB39:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 4);
    if (t5 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB40;

LAB42:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 5);
    if (t5 != 0)
        goto LAB48;

LAB50:
LAB49:    goto LAB46;

LAB48:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB49;

LAB51:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 6);
    if (t5 != 0)
        goto LAB54;

LAB56:
LAB55:    goto LAB52;

LAB54:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB55;

LAB57:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 7);
    if (t5 != 0)
        goto LAB60;

LAB62:
LAB61:    goto LAB58;

LAB60:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB61;

LAB63:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 8);
    if (t5 != 0)
        goto LAB66;

LAB68:
LAB67:    goto LAB64;

LAB66:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB67;

LAB69:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 1992U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (char *)((nl1) + t9);
    goto **((char **)t2);

LAB72:    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t5 = *((unsigned char *)t7);
    t6 = (t5 == (unsigned char)3);
    t3 = t6;
    goto LAB74;

LAB75:    goto LAB70;

LAB76:    xsi_set_current_line(140, ng0);
    t11 = (t0 + 8770);
    t14 = (t0 + 5128);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t11, 8U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB85;

LAB87:
LAB86:    goto LAB75;

LAB77:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 8778);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB91;

LAB93:
LAB92:    goto LAB75;

LAB78:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 8786);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB97;

LAB99:
LAB98:    goto LAB75;

LAB79:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 8794);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB103;

LAB105:
LAB104:    goto LAB75;

LAB80:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 8802);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(169, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB109;

LAB111:
LAB110:    goto LAB75;

LAB81:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 8810);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB115;

LAB117:
LAB116:    goto LAB75;

LAB82:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 8818);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(183, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB121;

LAB123:
LAB122:    goto LAB75;

LAB83:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 8826);
    t7 = (t0 + 5128);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(190, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB127;

LAB129:
LAB128:    goto LAB75;

LAB84:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 5192);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t8 = (t7 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB75;

LAB85:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 1);
    if (t5 != 0)
        goto LAB88;

LAB90:
LAB89:    goto LAB86;

LAB88:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB89;

LAB91:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 2);
    if (t5 != 0)
        goto LAB94;

LAB96:
LAB95:    goto LAB92;

LAB94:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB95;

LAB97:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 3);
    if (t5 != 0)
        goto LAB100;

LAB102:
LAB101:    goto LAB98;

LAB100:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB101;

LAB103:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 4);
    if (t5 != 0)
        goto LAB106;

LAB108:
LAB107:    goto LAB104;

LAB106:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB107;

LAB109:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 5);
    if (t5 != 0)
        goto LAB112;

LAB114:
LAB113:    goto LAB110;

LAB112:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB113;

LAB115:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 6);
    if (t5 != 0)
        goto LAB118;

LAB120:
LAB119:    goto LAB116;

LAB118:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB119;

LAB121:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 7);
    if (t5 != 0)
        goto LAB124;

LAB126:
LAB125:    goto LAB122;

LAB124:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    goto LAB125;

LAB127:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t20 = *((int *)t7);
    t5 = (t20 == 8);
    if (t5 != 0)
        goto LAB130;

LAB132:
LAB131:    goto LAB128;

LAB130:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 5192);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    goto LAB131;

}


extern void work_a_0979357509_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0979357509_3212880686_p_0,(void *)work_a_0979357509_3212880686_p_1,(void *)work_a_0979357509_3212880686_p_2,(void *)work_a_0979357509_3212880686_p_3};
	xsi_register_didat("work_a_0979357509_3212880686", "isim/light_pattern_tbw_isim_beh.exe.sim/work/a_0979357509_3212880686.didat");
	xsi_register_executes(pe);
}
