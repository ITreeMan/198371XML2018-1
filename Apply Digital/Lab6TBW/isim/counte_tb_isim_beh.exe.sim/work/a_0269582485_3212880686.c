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
extern char *WORK_P_0595283810;
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0269582485_3212880686_p_0(char *t0)
{
    char t44[16];
    char t47[16];
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
    char *t12;
    int t13;
    char *t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    int t22;
    char *t23;
    char *t24;
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
    unsigned char t38;
    unsigned char t39;
    unsigned char t40;
    unsigned char t41;
    unsigned char t42;
    unsigned char t43;
    unsigned int t45;
    unsigned char t46;
    unsigned int t48;
    unsigned char t49;

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 11979);
    t4 = xsi_mem_cmp(t1, t2, 4U);
    if (t4 == 1)
        goto LAB3;

LAB14:    t5 = (t0 + 11983);
    t7 = xsi_mem_cmp(t5, t2, 4U);
    if (t7 == 1)
        goto LAB4;

LAB15:    t8 = (t0 + 11987);
    t10 = xsi_mem_cmp(t8, t2, 4U);
    if (t10 == 1)
        goto LAB5;

LAB16:    t11 = (t0 + 11991);
    t13 = xsi_mem_cmp(t11, t2, 4U);
    if (t13 == 1)
        goto LAB6;

LAB17:    t14 = (t0 + 11995);
    t16 = xsi_mem_cmp(t14, t2, 4U);
    if (t16 == 1)
        goto LAB7;

LAB18:    t17 = (t0 + 11999);
    t19 = xsi_mem_cmp(t17, t2, 4U);
    if (t19 == 1)
        goto LAB8;

LAB19:    t20 = (t0 + 12003);
    t22 = xsi_mem_cmp(t20, t2, 4U);
    if (t22 == 1)
        goto LAB9;

LAB20:    t23 = (t0 + 12007);
    t25 = xsi_mem_cmp(t23, t2, 4U);
    if (t25 == 1)
        goto LAB10;

LAB21:    t26 = (t0 + 12011);
    t28 = xsi_mem_cmp(t26, t2, 4U);
    if (t28 == 1)
        goto LAB11;

LAB22:    t29 = (t0 + 12015);
    t31 = xsi_mem_cmp(t29, t2, 4U);
    if (t31 == 1)
        goto LAB12;

LAB23:
LAB13:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 12019);
    t3 = (t0 + 7056);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t3);

LAB2:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2752U);
    t39 = xsi_signal_has_event(t1);
    if (t39 == 1)
        goto LAB28;

LAB29:    t38 = (unsigned char)0;

LAB30:    if (t38 != 0)
        goto LAB25;

LAB27:
LAB26:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t38 = *((unsigned char *)t2);
    t39 = (t38 == (unsigned char)3);
    if (t39 != 0)
        goto LAB31;

LAB33:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t38 = *((unsigned char *)t2);
    t39 = (t38 == (unsigned char)2);
    if (t39 != 0)
        goto LAB60;

LAB61:
LAB32:    t1 = (t0 + 6880);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(43, ng0);
    t32 = ((WORK_P_0595283810) + 1168U);
    t33 = *((char **)t32);
    t32 = (t0 + 7056);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t33, 8U);
    xsi_driver_first_trans_fast(t32);
    goto LAB2;

LAB4:    xsi_set_current_line(44, ng0);
    t1 = ((WORK_P_0595283810) + 1288U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(45, ng0);
    t1 = ((WORK_P_0595283810) + 1408U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);
    t1 = ((WORK_P_0595283810) + 1528U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB7:    xsi_set_current_line(47, ng0);
    t1 = ((WORK_P_0595283810) + 1648U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(48, ng0);
    t1 = ((WORK_P_0595283810) + 1768U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(49, ng0);
    t1 = ((WORK_P_0595283810) + 1888U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB10:    xsi_set_current_line(50, ng0);
    t1 = ((WORK_P_0595283810) + 2008U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB11:    xsi_set_current_line(51, ng0);
    t1 = ((WORK_P_0595283810) + 2128U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB12:    xsi_set_current_line(52, ng0);
    t1 = ((WORK_P_0595283810) + 2248U);
    t2 = *((char **)t1);
    t1 = (t0 + 7056);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB24:;
LAB25:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t42 = *((unsigned char *)t5);
    t43 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t42);
    t2 = (t0 + 7120);
    t6 = (t2 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t43;
    xsi_driver_first_trans_fast(t2);
    goto LAB26;

LAB28:    t2 = (t0 + 2792U);
    t3 = *((char **)t2);
    t40 = *((unsigned char *)t3);
    t41 = (t40 == (unsigned char)3);
    t38 = t41;
    goto LAB30;

LAB31:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1312U);
    t41 = xsi_signal_has_event(t1);
    if (t41 == 1)
        goto LAB37;

LAB38:    t40 = (unsigned char)0;

LAB39:    if (t40 != 0)
        goto LAB34;

LAB36:
LAB35:    goto LAB32;

LAB34:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 3432U);
    t6 = *((char **)t3);
    t3 = (t0 + 11852U);
    t8 = (t0 + 12027);
    t11 = (t44 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 0;
    t12 = (t11 + 4U);
    *((int *)t12) = 3;
    t12 = (t11 + 8U);
    *((int *)t12) = 1;
    t4 = (3 - 0);
    t45 = (t4 * 1);
    t45 = (t45 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t45;
    t46 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t6, t3, t8, t44);
    if (t46 != 0)
        goto LAB40;

LAB42:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 11852U);
    t3 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t44, t2, t1, 1);
    t5 = (t44 + 12U);
    t45 = *((unsigned int *)t5);
    t48 = (1U * t45);
    t38 = (4U != t48);
    if (t38 == 1)
        goto LAB58;

LAB59:    t6 = (t0 + 7248);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 7440);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB41:    goto LAB35;

LAB37:    t3 = (t0 + 1352U);
    t5 = *((char **)t3);
    t42 = *((unsigned char *)t5);
    t43 = (t42 == (unsigned char)3);
    t40 = t43;
    goto LAB39;

LAB40:    xsi_set_current_line(63, ng0);
    t12 = (t0 + 3592U);
    t14 = *((char **)t12);
    t12 = (t0 + 11868U);
    t15 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t47, t14, t12, 1);
    t17 = (t47 + 12U);
    t45 = *((unsigned int *)t17);
    t48 = (1U * t45);
    t49 = (4U != t48);
    if (t49 == 1)
        goto LAB43;

LAB44:    t18 = (t0 + 7184);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 4U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(64, ng0);
    t1 = (t0 + 12031);
    t3 = (t0 + 7248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t1 = (t0 + 11868U);
    t3 = (t0 + 12035);
    t6 = (t44 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 3;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t4 = (3 - 0);
    t45 = (t4 * 1);
    t45 = (t45 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t45;
    t38 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t3, t44);
    if (t38 != 0)
        goto LAB45;

LAB47:
LAB46:    goto LAB41;

LAB43:    xsi_size_not_matching(4U, t48, 0);
    goto LAB44;

LAB45:    xsi_set_current_line(66, ng0);
    t8 = (t0 + 3752U);
    t9 = *((char **)t8);
    t8 = (t0 + 11884U);
    t11 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t47, t9, t8, 1);
    t12 = (t47 + 12U);
    t45 = *((unsigned int *)t12);
    t48 = (1U * t45);
    t39 = (4U != t48);
    if (t39 == 1)
        goto LAB48;

LAB49:    t14 = (t0 + 7312);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t11, 4U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 12039);
    t3 = (t0 + 7184);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t1 = (t0 + 11884U);
    t3 = (t0 + 12043);
    t6 = (t44 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 3;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t4 = (3 - 0);
    t45 = (t4 * 1);
    t45 = (t45 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t45;
    t38 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t3, t44);
    if (t38 != 0)
        goto LAB50;

LAB52:
LAB51:    goto LAB46;

LAB48:    xsi_size_not_matching(4U, t48, 0);
    goto LAB49;

LAB50:    xsi_set_current_line(69, ng0);
    t8 = (t0 + 3912U);
    t9 = *((char **)t8);
    t8 = (t0 + 11900U);
    t11 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t47, t9, t8, 1);
    t12 = (t47 + 12U);
    t45 = *((unsigned int *)t12);
    t48 = (1U * t45);
    t39 = (4U != t48);
    if (t39 == 1)
        goto LAB53;

LAB54:    t14 = (t0 + 7376);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t11, 4U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 12047);
    t3 = (t0 + 7312);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t1 = (t0 + 11900U);
    t3 = (t0 + 12051);
    t6 = (t44 + 0U);
    t8 = (t6 + 0U);
    *((int *)t8) = 0;
    t8 = (t6 + 4U);
    *((int *)t8) = 3;
    t8 = (t6 + 8U);
    *((int *)t8) = 1;
    t4 = (3 - 0);
    t45 = (t4 * 1);
    t45 = (t45 + 1);
    t8 = (t6 + 12U);
    *((unsigned int *)t8) = t45;
    t38 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t2, t1, t3, t44);
    if (t38 != 0)
        goto LAB55;

LAB57:
LAB56:    goto LAB51;

LAB53:    xsi_size_not_matching(4U, t48, 0);
    goto LAB54;

LAB55:    xsi_set_current_line(72, ng0);
    t8 = (t0 + 12055);
    t11 = (t0 + 7376);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t8, 4U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 12059);
    t3 = (t0 + 7312);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 12063);
    t3 = (t0 + 7184);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 12067);
    t3 = (t0 + 7248);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    goto LAB56;

LAB58:    xsi_size_not_matching(4U, t48, 0);
    goto LAB59;

LAB60:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t40 = *((unsigned char *)t3);
    t41 = (t40 == (unsigned char)3);
    if (t41 != 0)
        goto LAB62;

LAB64:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t38 = *((unsigned char *)t2);
    t39 = (t38 == (unsigned char)3);
    if (t39 != 0)
        goto LAB65;

LAB66:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t38 = *((unsigned char *)t2);
    t39 = (t38 == (unsigned char)3);
    if (t39 != 0)
        goto LAB67;

LAB68:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t38 = *((unsigned char *)t2);
    t39 = (t38 == (unsigned char)3);
    if (t39 != 0)
        goto LAB69;

LAB70:
LAB63:    goto LAB32;

LAB62:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 7248);
    t6 = (t1 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t5, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB65:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 7184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB67:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 7312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

LAB69:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t1 = (t0 + 7376);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 4U);
    xsi_driver_first_trans_fast(t1);
    goto LAB63;

}

static void work_a_0269582485_3212880686_p_1(char *t0)
{
    char *t1;

LAB0:    t1 = (t0 + 6896);
    *((int *)t1) = 1;

LAB1:    return;
}

static void work_a_0269582485_3212880686_p_2(char *t0)
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

static void work_a_0269582485_3212880686_p_3(char *t0)
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

static void work_a_0269582485_3212880686_p_4(char *t0)
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

static void work_a_0269582485_3212880686_p_5(char *t0)
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

static void work_a_0269582485_3212880686_p_6(char *t0)
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


extern void work_a_0269582485_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0269582485_3212880686_p_0,(void *)work_a_0269582485_3212880686_p_1,(void *)work_a_0269582485_3212880686_p_2,(void *)work_a_0269582485_3212880686_p_3,(void *)work_a_0269582485_3212880686_p_4,(void *)work_a_0269582485_3212880686_p_5,(void *)work_a_0269582485_3212880686_p_6};
	xsi_register_didat("work_a_0269582485_3212880686", "isim/counte_tb_isim_beh.exe.sim/work/a_0269582485_3212880686.didat");
	xsi_register_executes(pe);
}
