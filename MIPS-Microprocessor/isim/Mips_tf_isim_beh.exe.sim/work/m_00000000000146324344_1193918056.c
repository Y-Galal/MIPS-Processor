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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "E:/Working/Digital Electronics/Mips-Processor/Mips-Processor/MIPS-Microprocessor/Mips.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {0, 0};
static unsigned int ng6[] = {7U, 0U};



static void Cont_67_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 4940U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1612U);
    t3 = *((char **)t2);
    t2 = (t0 + 6092);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 65535U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 15);
    t16 = (t0 + 6000);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Always_68_1(char *t0)
{
    char t7[8];
    char t14[8];
    char t26[8];
    char t28[8];
    char t29[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t27;

LAB0:    t1 = (t0 + 5084U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 6008);
    *((int *)t2) = 1;
    t3 = (t0 + 5112);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);

LAB5:    xsi_set_current_line(70, ng0);
    t4 = (t0 + 2532U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t4, 1);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 1, t2, 1);
    if (t6 == 1)
        goto LAB9;

LAB10:
LAB12:
LAB11:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 16, 0LL);

LAB13:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 9);
    *((unsigned int *)t26) = t17;
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 9);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t20 & 7U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 7U);
    t8 = (t0 + 3588);
    xsi_vlogvar_wait_assign_value(t8, t26, 0, 0, 3, 0LL);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1520U);
    t3 = *((char **)t2);
    memset(t26, 0, 8);
    t2 = (t26 + 4);
    t4 = (t3 + 4);
    t16 = *((unsigned int *)t3);
    t17 = (t16 >> 6);
    *((unsigned int *)t26) = t17;
    t18 = *((unsigned int *)t4);
    t19 = (t18 >> 6);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t20 & 7U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 7U);
    t8 = (t0 + 3680);
    xsi_vlogvar_wait_assign_value(t8, t26, 0, 0, 3, 0LL);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2716U);
    t3 = *((char **)t2);

LAB35:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t3, 1, t2, 1);
    if (t6 == 1)
        goto LAB38;

LAB39:
LAB40:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2256U);
    t4 = *((char **)t2);
    t2 = (t0 + 3864);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2900U);
    t4 = *((char **)t2);
    t2 = (t0 + 2808U);
    t9 = *((char **)t2);
    xsi_vlogtype_concat(t26, 2, 2, 2U, t9, 1, t4, 1);

LAB48:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t2, 2);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t2, 2);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t2, 2);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t26, 2, t2, 2);
    if (t6 == 1)
        goto LAB55;

LAB56:
LAB57:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 1244U);
    t4 = *((char **)t2);
    t2 = (t0 + 3404);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 16, 0LL);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 2992U);
    t4 = *((char **)t2);

LAB58:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 1, t2, 1);
    if (t6 == 1)
        goto LAB61;

LAB62:
LAB63:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 968U);
    t9 = *((char **)t2);
    t2 = (t0 + 4140);
    xsi_vlogvar_wait_assign_value(t2, t9, 0, 0, 16, 0LL);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1336U);
    t9 = *((char **)t2);
    t2 = (t0 + 4232);
    xsi_vlogvar_wait_assign_value(t2, t9, 0, 0, 16, 0LL);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1520U);
    t9 = *((char **)t2);
    memset(t28, 0, 8);
    t2 = (t28 + 4);
    t10 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 12);
    *((unsigned int *)t28) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 12);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t20 & 15U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 15U);
    t12 = (t0 + 4324);
    xsi_vlogvar_wait_assign_value(t12, t28, 0, 0, 4, 0LL);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1520U);
    t9 = *((char **)t2);
    memset(t28, 0, 8);
    t2 = (t28 + 4);
    t10 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t28) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 0);
    *((unsigned int *)t2) = t19;
    t20 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t20 & 7U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 7U);
    t12 = (t0 + 4416);
    xsi_vlogvar_wait_assign_value(t12, t28, 0, 0, 3, 0LL);
    goto LAB2;

LAB7:    xsi_set_current_line(72, ng0);

LAB14:    xsi_set_current_line(73, ng0);
    t8 = (t0 + 2348U);
    t9 = *((char **)t8);
    t8 = (t0 + 2440U);
    t10 = *((char **)t8);
    xsi_vlogtype_concat(t7, 2, 2, 2U, t10, 1, t9, 1);

LAB15:    t8 = ((char*)((ng1)));
    t11 = xsi_vlog_unsigned_case_compare(t7, 2, t8, 2);
    if (t11 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t7, 2, t2, 2);
    if (t6 == 1)
        goto LAB22;

LAB23:
LAB24:    goto LAB13;

LAB9:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 1612U);
    t4 = *((char **)t3);
    t3 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB13;

LAB16:    xsi_set_current_line(74, ng0);
    t12 = (t0 + 1612U);
    t13 = *((char **)t12);
    t12 = ((char*)((ng2)));
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 16, t13, 16, t12, 16);
    t15 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 16, 0LL);
    goto LAB24;

LAB18:    xsi_set_current_line(76, ng0);

LAB25:    xsi_set_current_line(77, ng0);
    t3 = (t0 + 3084U);
    t4 = *((char **)t3);
    t3 = (t0 + 1152U);
    t8 = *((char **)t3);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t8);
    t18 = (t16 ^ t17);
    *((unsigned int *)t14) = t18;
    t3 = (t4 + 4);
    t9 = (t8 + 4);
    t10 = (t14 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t9);
    t21 = (t19 | t20);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t10);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB32;

LAB33:
LAB34:
LAB26:    t12 = ((char*)((ng2)));
    t11 = xsi_vlog_unsigned_case_compare(t14, 1, t12, 1);
    if (t11 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t14, 1, t2, 1);
    if (t6 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB24;

LAB20:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 1520U);
    t4 = *((char **)t3);
    memset(t28, 0, 8);
    t3 = (t28 + 4);
    t8 = (t4 + 4);
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    *((unsigned int *)t28) = t17;
    t18 = *((unsigned int *)t8);
    t19 = (t18 >> 0);
    *((unsigned int *)t3) = t19;
    t20 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t20 & 4095U);
    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 4095U);
    t9 = ((char*)((ng1)));
    xsi_vlogtype_concat(t26, 16, 16, 2U, t9, 4, t28, 12);
    t10 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t10, t26, 0, 0, 16, 0LL);
    goto LAB24;

LAB22:    xsi_set_current_line(83, ng0);
    t3 = (t0 + 1244U);
    t4 = *((char **)t3);
    t3 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t3, t4, 0, 0, 16, 0LL);
    goto LAB24;

LAB27:    xsi_set_current_line(78, ng0);
    t13 = (t0 + 1612U);
    t15 = *((char **)t13);
    t13 = ((char*)((ng2)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 16, t15, 16, t13, 16);
    t27 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t27, t26, 0, 0, 16, 0LL);
    goto LAB31;

LAB29:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 1612U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t26, 0, 8);
    xsi_vlog_unsigned_add(t26, 16, t4, 16, t3, 16);
    t8 = (t0 + 1520U);
    t9 = *((char **)t8);
    memset(t29, 0, 8);
    t8 = (t29 + 4);
    t10 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 0);
    *((unsigned int *)t29) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 0);
    *((unsigned int *)t8) = t19;
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t20 & 63U);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t21 & 63U);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t28, 16, 16, 2U, t12, 10, t29, 6);
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 16, t26, 16, t28, 16);
    t13 = (t0 + 4048);
    xsi_vlogvar_wait_assign_value(t13, t30, 0, 0, 16, 0LL);
    goto LAB31;

LAB32:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t10);
    *((unsigned int *)t14) = (t24 | t25);
    goto LAB34;

LAB36:    xsi_set_current_line(94, ng0);
    t4 = ((char*)((ng6)));
    t8 = (t0 + 3772);
    xsi_vlogvar_wait_assign_value(t8, t4, 0, 0, 3, 0LL);
    goto LAB40;

LAB38:    xsi_set_current_line(96, ng0);

LAB41:    xsi_set_current_line(97, ng0);
    t4 = (t0 + 2624U);
    t8 = *((char **)t4);

LAB42:    t4 = ((char*)((ng1)));
    t11 = xsi_vlog_unsigned_case_compare(t8, 1, t4, 1);
    if (t11 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng2)));
    t6 = xsi_vlog_unsigned_case_compare(t8, 1, t2, 1);
    if (t6 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB40;

LAB43:    xsi_set_current_line(98, ng0);
    t9 = (t0 + 1520U);
    t10 = *((char **)t9);
    memset(t26, 0, 8);
    t9 = (t26 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (t16 >> 6);
    *((unsigned int *)t26) = t17;
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 6);
    *((unsigned int *)t9) = t19;
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t20 & 7U);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t21 & 7U);
    t13 = (t0 + 3772);
    xsi_vlogvar_wait_assign_value(t13, t26, 0, 0, 3, 0LL);
    goto LAB47;

LAB45:    xsi_set_current_line(99, ng0);
    t4 = (t0 + 1520U);
    t9 = *((char **)t4);
    memset(t26, 0, 8);
    t4 = (t26 + 4);
    t10 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    t17 = (t16 >> 3);
    *((unsigned int *)t26) = t17;
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 3);
    *((unsigned int *)t4) = t19;
    t20 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t20 & 7U);
    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 7U);
    t12 = (t0 + 3772);
    xsi_vlogvar_wait_assign_value(t12, t26, 0, 0, 3, 0LL);
    goto LAB47;

LAB49:    xsi_set_current_line(106, ng0);
    t10 = (t0 + 1796U);
    t12 = *((char **)t10);
    t10 = (t0 + 3956);
    xsi_vlogvar_wait_assign_value(t10, t12, 0, 0, 16, 0LL);
    goto LAB57;

LAB51:    xsi_set_current_line(107, ng0);
    t4 = (t0 + 968U);
    t9 = *((char **)t4);
    t4 = (t0 + 3956);
    xsi_vlogvar_wait_assign_value(t4, t9, 0, 0, 16, 0LL);
    goto LAB57;

LAB53:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 1612U);
    t9 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 16, t9, 16, t4, 16);
    t10 = (t0 + 3956);
    xsi_vlogvar_wait_assign_value(t10, t28, 0, 0, 16, 0LL);
    goto LAB57;

LAB55:    xsi_set_current_line(109, ng0);
    t4 = (t0 + 600U);
    t9 = *((char **)t4);
    t4 = (t0 + 3956);
    xsi_vlogvar_wait_assign_value(t4, t9, 0, 0, 16, 0LL);
    goto LAB57;

LAB59:    xsi_set_current_line(114, ng0);
    t9 = (t0 + 1336U);
    t10 = *((char **)t9);
    t9 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 16, 0LL);
    goto LAB63;

LAB61:    xsi_set_current_line(115, ng0);
    t9 = (t0 + 1520U);
    t10 = *((char **)t9);
    memset(t29, 0, 8);
    t9 = (t29 + 4);
    t12 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (t16 >> 0);
    *((unsigned int *)t29) = t17;
    t18 = *((unsigned int *)t12);
    t19 = (t18 >> 0);
    *((unsigned int *)t9) = t19;
    t20 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t20 & 63U);
    t21 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t21 & 63U);
    t13 = ((char*)((ng1)));
    xsi_vlogtype_concat(t28, 16, 16, 2U, t13, 10, t29, 6);
    t15 = (t0 + 3496);
    xsi_vlogvar_wait_assign_value(t15, t28, 0, 0, 16, 0LL);
    goto LAB63;

}

static void Always_126_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 5228U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 6016);
    *((int *)t2) = 1;
    t3 = (t0 + 5256);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(127, ng0);

LAB5:    xsi_set_current_line(128, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng2)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(129, ng0);
    t28 = (t0 + 1244U);
    t29 = *((char **)t28);
    t28 = (t0 + 3312);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 16, 0LL);
    goto LAB12;

}

static void Cont_132_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 5372U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 6128);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 65535U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 15);
    t18 = (t0 + 6024);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_133_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5516U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2164U);
    t3 = *((char **)t2);
    t2 = (t0 + 6164);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 6032);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_134_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5660U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1980U);
    t3 = *((char **)t2);
    t2 = (t0 + 6200);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 7U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 2);
    t16 = (t0 + 6040);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_136_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;

LAB0:    t1 = (t0 + 5804U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t0 + 6236);
    t4 = (t2 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 0);
    t16 = (t0 + 6048);
    *((int *)t16) = 1;

LAB1:    return;
}


extern void work_m_00000000000146324344_1193918056_init()
{
	static char *pe[] = {(void *)Cont_67_0,(void *)Always_68_1,(void *)Always_126_2,(void *)Cont_132_3,(void *)Cont_133_4,(void *)Cont_134_5,(void *)Cont_136_6};
	xsi_register_didat("work_m_00000000000146324344_1193918056", "isim/Mips_tf_isim_beh.exe.sim/work/m_00000000000146324344_1193918056.didat");
	xsi_register_executes(pe);
}
