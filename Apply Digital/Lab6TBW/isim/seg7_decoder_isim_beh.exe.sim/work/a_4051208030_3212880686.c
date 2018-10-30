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
static const char *ng0 = "C:/Users/ITreeMan/Documents/198371XML2018-1/Apply Digital/Lab6TBW/seg7_decoder.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *WORK_P_0595283810;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_4051208030_3212880686_p_0(char *t0)
{
    char t15[16];
    char t20[16];
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
    char *t16;
    int t17;
    unsigned int t18;
    unsigned char t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 2752U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 3272U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)2);
    if (t3 != 0)
        goto LAB37;

LAB38:
LAB9:    t2 = (t0 + 6880);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3272U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 7056);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 2792U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 1312U);
    t7 = xsi_signal_has_event(t2);
    if (t7 == 1)
        goto LAB14;

LAB15:    t6 = (unsigned char)0;

LAB16:    if (t6 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(49, ng0);
    t5 = (t0 + 3432U);
    t11 = *((char **)t5);
    t5 = (t0 + 11852U);
    t12 = (t0 + 11979);
    t14 = (t15 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 0;
    t16 = (t14 + 4U);
    *((int *)t16) = 3;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t18;
    t19 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t11, t5, t12, t15);
    if (t19 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t2 = (t0 + 11852U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t15, t4, t2, 1);
    t8 = (t15 + 12U);
    t18 = *((unsigned int *)t8);
    t24 = (1U * t18);
    t1 = (4U != t24);
    if (t1 == 1)
        goto LAB35;

LAB36:    t11 = (t0 + 7184);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t5, 4U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3432U);
    t4 = *((char **)t2);
    t2 = (t0 + 7376);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t2);

LAB18:    goto LAB12;

LAB14:    t5 = (t0 + 1352U);
    t8 = *((char **)t5);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t6 = t10;
    goto LAB16;

LAB17:    xsi_set_current_line(50, ng0);
    t16 = (t0 + 3592U);
    t21 = *((char **)t16);
    t16 = (t0 + 11868U);
    t22 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t21, t16, 1);
    t23 = (t20 + 12U);
    t18 = *((unsigned int *)t23);
    t24 = (1U * t18);
    t25 = (4U != t24);
    if (t25 == 1)
        goto LAB20;

LAB21:    t26 = (t0 + 7120);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t22, 4U);
    xsi_driver_first_trans_fast(t26);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 11983);
    t5 = (t0 + 7184);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 3592U);
    t4 = *((char **)t2);
    t2 = (t0 + 11868U);
    t5 = (t0 + 11987);
    t11 = (t15 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t18;
    t1 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t4, t2, t5, t15);
    if (t1 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB18;

LAB20:    xsi_size_not_matching(4U, t24, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(53, ng0);
    t12 = (t0 + 3752U);
    t13 = *((char **)t12);
    t12 = (t0 + 11884U);
    t14 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t13, t12, 1);
    t16 = (t20 + 12U);
    t18 = *((unsigned int *)t16);
    t24 = (1U * t18);
    t3 = (4U != t24);
    if (t3 == 1)
        goto LAB25;

LAB26:    t21 = (t0 + 7248);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t26 = (t23 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t14, 4U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 11991);
    t5 = (t0 + 7120);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 3752U);
    t4 = *((char **)t2);
    t2 = (t0 + 11884U);
    t5 = (t0 + 11995);
    t11 = (t15 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t18;
    t1 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t4, t2, t5, t15);
    if (t1 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB23;

LAB25:    xsi_size_not_matching(4U, t24, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(56, ng0);
    t12 = (t0 + 3912U);
    t13 = *((char **)t12);
    t12 = (t0 + 11900U);
    t14 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t13, t12, 1);
    t16 = (t20 + 12U);
    t18 = *((unsigned int *)t16);
    t24 = (1U * t18);
    t3 = (4U != t24);
    if (t3 == 1)
        goto LAB30;

LAB31:    t21 = (t0 + 7312);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t26 = (t23 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t14, 4U);
    xsi_driver_first_trans_fast(t21);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 11999);
    t5 = (t0 + 7248);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3912U);
    t4 = *((char **)t2);
    t2 = (t0 + 11900U);
    t5 = (t0 + 12003);
    t11 = (t15 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t17 = (3 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t18;
    t1 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t4, t2, t5, t15);
    if (t1 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB28;

LAB30:    xsi_size_not_matching(4U, t24, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(59, ng0);
    t12 = (t0 + 12007);
    t14 = (t0 + 7312);
    t16 = (t14 + 56U);
    t21 = *((char **)t16);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t12, 4U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 12011);
    t5 = (t0 + 7248);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 12015);
    t5 = (t0 + 7120);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 12019);
    t5 = (t0 + 7184);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB33;

LAB35:    xsi_size_not_matching(4U, t24, 0);
    goto LAB36;

LAB37:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB39;

LAB41:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB42;

LAB43:    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB44;

LAB45:    t2 = (t0 + 2632U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB46;

LAB47:
LAB40:    goto LAB9;

LAB39:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1032U);
    t8 = *((char **)t2);
    t2 = (t0 + 7184);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t8, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB40;

LAB42:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t2 = (t0 + 7120);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB40;

LAB44:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t2 = (t0 + 7248);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB40;

LAB46:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t2 = (t0 + 7312);
    t8 = (t2 + 56U);
    t11 = *((char **)t8);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t5, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB40;

}

static void work_a_4051208030_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 12023);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB14:    t5 = (t0 + 12027);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB15:    t8 = (t0 + 12031);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB16:    t11 = (t0 + 12035);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 12039);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 12043);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 12047);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 12051);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 12055);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 12059);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 12063);
    t3 = (t0 + 7440);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);

LAB2:    t1 = (t0 + 6896);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(88, ng0);
    t32 = ((WORK_P_0595283810) + 1168U);
    t33 = *((char **)t32);
    t32 = (t0 + 7440);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t33, 8U);
    xsi_driver_first_trans_fast(t32);
    goto LAB2;

LAB4:    xsi_set_current_line(89, ng0);
    t1 = ((WORK_P_0595283810) + 1288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(90, ng0);
    t1 = ((WORK_P_0595283810) + 1408U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(91, ng0);
    t1 = ((WORK_P_0595283810) + 1528U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(92, ng0);
    t1 = ((WORK_P_0595283810) + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(93, ng0);
    t1 = ((WORK_P_0595283810) + 1768U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(94, ng0);
    t1 = ((WORK_P_0595283810) + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(95, ng0);
    t1 = ((WORK_P_0595283810) + 2008U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(96, ng0);
    t1 = ((WORK_P_0595283810) + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(97, ng0);
    t1 = ((WORK_P_0595283810) + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB24:;
}

static void work_a_4051208030_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(102, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 7504);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6912);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4051208030_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(103, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7568);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6928);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4051208030_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(104, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 7632);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6944);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4051208030_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(105, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 7696);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6960);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4051208030_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(106, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 7760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 6976);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4051208030_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4051208030_3212880686_p_0,(void *)work_a_4051208030_3212880686_p_1,(void *)work_a_4051208030_3212880686_p_2,(void *)work_a_4051208030_3212880686_p_3,(void *)work_a_4051208030_3212880686_p_4,(void *)work_a_4051208030_3212880686_p_5,(void *)work_a_4051208030_3212880686_p_6};
	xsi_register_didat("work_a_4051208030_3212880686", "isim/seg7_decoder_isim_beh.exe.sim/work/a_4051208030_3212880686.didat");
	xsi_register_executes(pe);
}
