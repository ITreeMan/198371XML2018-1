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
static const char *ng0 = "C:/Users/ITreeMan/Documents/198371XML2018-1/Apply Digital/Lab7/light_3pattern/light_pattern.vhd";
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
    t1 = (t15 >= 10);
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
    *((int *)t12) = 0;
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
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19};

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
    t10 = (t0 + 8246);
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
        goto LAB21;

LAB23:
LAB22:    goto LAB8;

LAB10:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 8254);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB8;

LAB11:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8262);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB8;

LAB12:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 8270);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB8;

LAB13:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 8278);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB8;

LAB14:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 8286);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB51;

LAB53:
LAB52:    goto LAB8;

LAB15:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 8294);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB57;

LAB59:
LAB58:    goto LAB8;

LAB16:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 8302);
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
        goto LAB63;

LAB65:
LAB64:    goto LAB8;

LAB17:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 8310);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB69;

LAB71:
LAB70:    goto LAB8;

LAB18:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 8318);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(138, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB75;

LAB77:
LAB76:    goto LAB8;

LAB19:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 8326);
    t5 = (t0 + 4968);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB81;

LAB83:
LAB82:    goto LAB8;

LAB20:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 5032);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB21:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 0);
    if (t6 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB22;

LAB24:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB25;

LAB27:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 1);
    if (t6 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB28;

LAB30:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB31;

LAB33:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 2);
    if (t6 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB34;

LAB36:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB37;

LAB39:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 3);
    if (t6 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB40;

LAB42:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)4;
    xsi_driver_first_trans_fast(t2);
    goto LAB43;

LAB45:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 4);
    if (t6 != 0)
        goto LAB48;

LAB50:
LAB49:    goto LAB46;

LAB48:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t2);
    goto LAB49;

LAB51:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 5);
    if (t6 != 0)
        goto LAB54;

LAB56:
LAB55:    goto LAB52;

LAB54:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)6;
    xsi_driver_first_trans_fast(t2);
    goto LAB55;

LAB57:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 6);
    if (t6 != 0)
        goto LAB60;

LAB62:
LAB61:    goto LAB58;

LAB60:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)7;
    xsi_driver_first_trans_fast(t2);
    goto LAB61;

LAB63:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 7);
    if (t6 != 0)
        goto LAB66;

LAB68:
LAB67:    goto LAB64;

LAB66:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)8;
    xsi_driver_first_trans_fast(t2);
    goto LAB67;

LAB69:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 8);
    if (t6 != 0)
        goto LAB72;

LAB74:
LAB73:    goto LAB70;

LAB72:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)9;
    xsi_driver_first_trans_fast(t2);
    goto LAB73;

LAB75:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 9);
    if (t6 != 0)
        goto LAB78;

LAB80:
LAB79:    goto LAB76;

LAB78:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)10;
    xsi_driver_first_trans_fast(t2);
    goto LAB79;

LAB81:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t17 = *((int *)t5);
    t6 = (t17 == 10);
    if (t6 != 0)
        goto LAB84;

LAB86:
LAB85:    goto LAB82;

LAB84:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 5032);
    t8 = (t2 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t2);
    goto LAB85;

}


extern void work_a_0979357509_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0979357509_3212880686_p_0,(void *)work_a_0979357509_3212880686_p_1,(void *)work_a_0979357509_3212880686_p_2,(void *)work_a_0979357509_3212880686_p_3};
	xsi_register_didat("work_a_0979357509_3212880686", "isim/light_pattern_tbw_isim_beh.exe.sim/work/a_0979357509_3212880686.didat");
	xsi_register_executes(pe);
}
