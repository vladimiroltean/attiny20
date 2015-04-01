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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/media/aldi/Little Seagate/Scoala/Facultate/nesortate/verilog/rezolvare/interrupt_controller.v";
static int ng1[] = {8, 0};
static unsigned int ng2[] = {7U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {9U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {10U, 0U};
static unsigned int ng9[] = {0U, 0U};
static unsigned int ng10[] = {11U, 0U};



static void Cont_20_0(char *t0)
{
    char t3[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;

LAB0:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(20, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1960U);
    t5 = *((char **)t4);
    t4 = (t0 + 1920U);
    t7 = (t4 + 72U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t6, 1, t5, t8, 2, t9, 3, 2);
    xsi_vlog_mul_concat(t3, 8, 1, t2, 1U, t6, 1);
    t10 = (t0 + 4680);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memset(t14, 0, 8);
    t15 = 255U;
    t16 = t15;
    t17 = (t3 + 4);
    t18 = *((unsigned int *)t3);
    t15 = (t15 & t18);
    t19 = *((unsigned int *)t17);
    t16 = (t16 & t19);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t21 | t15);
    t22 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t22 | t16);
    xsi_driver_vfirst_trans(t10, 0, 7);
    t23 = (t0 + 4568);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Cont_21_1(char *t0)
{
    char t5[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    int t61;
    int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 4000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1640U);
    t3 = *((char **)t2);
    t2 = (t0 + 1800U);
    t4 = *((char **)t2);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t4);
    t8 = (t6 & t7);
    *((unsigned int *)t5) = t8;
    t2 = (t3 + 4);
    t9 = (t4 + 4);
    t10 = (t5 + 4);
    t11 = *((unsigned int *)t2);
    t12 = *((unsigned int *)t9);
    t13 = (t11 | t12);
    *((unsigned int *)t10) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 != 0);
    if (t15 == 1)
        goto LAB4;

LAB5:
LAB6:    t36 = (t0 + 2120U);
    t37 = *((char **)t36);
    t39 = *((unsigned int *)t5);
    t40 = *((unsigned int *)t37);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t36 = (t5 + 4);
    t42 = (t37 + 4);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB7;

LAB8:
LAB9:    t69 = (t0 + 4744);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    t72 = (t71 + 56U);
    t73 = *((char **)t72);
    memset(t73, 0, 8);
    t74 = 255U;
    t75 = t74;
    t76 = (t38 + 4);
    t77 = *((unsigned int *)t38);
    t74 = (t74 & t77);
    t78 = *((unsigned int *)t76);
    t75 = (t75 & t78);
    t79 = (t73 + 4);
    t80 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t80 | t74);
    t81 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t81 | t75);
    xsi_driver_vfirst_trans(t69, 0, 7);
    t82 = (t0 + 4584);
    *((int *)t82) = 1;

LAB1:    return;
LAB4:    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t16 | t17);
    t18 = (t3 + 4);
    t19 = (t4 + 4);
    t20 = *((unsigned int *)t3);
    t21 = (~(t20));
    t22 = *((unsigned int *)t18);
    t23 = (~(t22));
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    t26 = *((unsigned int *)t19);
    t27 = (~(t26));
    t28 = (t21 & t23);
    t29 = (t25 & t27);
    t30 = (~(t28));
    t31 = (~(t29));
    t32 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t32 & t30);
    t33 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t33 & t31);
    t34 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t34 & t30);
    t35 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t35 & t31);
    goto LAB6;

LAB7:    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t38) = (t49 | t50);
    t51 = (t5 + 4);
    t52 = (t37 + 4);
    t53 = *((unsigned int *)t5);
    t54 = (~(t53));
    t55 = *((unsigned int *)t51);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (~(t57));
    t59 = *((unsigned int *)t52);
    t60 = (~(t59));
    t61 = (t54 & t56);
    t62 = (t58 & t60);
    t63 = (~(t61));
    t64 = (~(t62));
    t65 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t65 & t63);
    t66 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t66 & t64);
    t67 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t67 & t63);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    goto LAB9;

}

static void Always_23_2(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 4248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 4600);
    *((int *)t2) = 1;
    t3 = (t0 + 4280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 2240U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t13, 1, t3, t5, 2, t11, 3, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 2240U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng7)));
    xsi_vlog_generic_get_index_select_value(t13, 1, t3, t5, 2, t11, 3, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2280U);
    t3 = *((char **)t2);
    t2 = (t0 + 2240U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng9)));
    xsi_vlog_generic_get_index_select_value(t13, 1, t3, t5, 2, t11, 3, 2);
    t12 = (t13 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:    xsi_set_current_line(36, ng0);

LAB21:    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);

LAB19:
LAB15:
LAB11:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(24, ng0);

LAB8:    xsi_set_current_line(25, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB7;

LAB9:    xsi_set_current_line(27, ng0);

LAB12:    xsi_set_current_line(28, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB11;

LAB13:    xsi_set_current_line(30, ng0);

LAB16:    xsi_set_current_line(31, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(33, ng0);

LAB20:    xsi_set_current_line(34, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 1, 0LL);
    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 10, 0LL);
    goto LAB19;

}


extern void work_m_12609664921133026089_2373178884_init()
{
	static char *pe[] = {(void *)Cont_20_0,(void *)Cont_21_1,(void *)Always_23_2};
	xsi_register_didat("work_m_12609664921133026089_2373178884", "isim/cpu_test_isim_beh.exe.sim/work/m_12609664921133026089_2373178884.didat");
	xsi_register_executes(pe);
}
