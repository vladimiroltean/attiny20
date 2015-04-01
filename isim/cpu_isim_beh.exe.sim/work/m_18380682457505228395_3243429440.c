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
static const char *ng0 = "/media/aldi/Little Seagate/Scoala/Facultate/nesortate/verilog/rezolvare/gpio_unit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 1U};
static int ng3[] = {1, 0};



static void Always_18_0(char *t0)
{
    char t13[8];
    char t18[8];
    char t19[8];
    char t22[8];
    char t41[8];
    char t53[8];
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
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    unsigned int t61;
    int t62;

LAB0:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 4232);
    *((int *)t2) = 1;
    t3 = (t0 + 3944);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1640U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(25, ng0);
    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 9);

LAB10:    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 768);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB12;

LAB11:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB12;

LAB15:    if (*((unsigned int *)t4) < *((unsigned int *)t11))
        goto LAB13;

LAB14:    t15 = (t13 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB16;

LAB17:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);

LAB9:    xsi_set_current_line(21, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2680);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(22, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2840);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB12:    t14 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB14;

LAB13:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    xsi_set_current_line(25, ng0);

LAB18:    t16 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t16, &&LAB19);
    t17 = (t0 + 3720);
    xsi_vlog_namedbase_pushprocess(t16, t17);

LAB20:    xsi_set_current_line(26, ng0);
    t20 = (t0 + 1800U);
    t21 = *((char **)t20);
    t20 = (t0 + 1760U);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 3000);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t22, 1, t21, t24, 2, t27, 9, 2);
    memset(t19, 0, 8);
    t28 = (t22 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (~(t29));
    t31 = *((unsigned int *)t22);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t28) != 0)
        goto LAB23;

LAB24:    t35 = (t19 + 4);
    t36 = *((unsigned int *)t19);
    t37 = *((unsigned int *)t35);
    t38 = (t36 || t37);
    if (t38 > 0)
        goto LAB25;

LAB26:    t47 = *((unsigned int *)t19);
    t48 = (~(t47));
    t49 = *((unsigned int *)t35);
    t50 = (t48 || t49);
    if (t50 > 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t35) > 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t19) > 0)
        goto LAB31;

LAB32:    memcpy(t18, t51, 8);

LAB33:    t52 = (t0 + 2680);
    t54 = (t0 + 2680);
    t55 = (t54 + 72U);
    t56 = *((char **)t55);
    t57 = (t0 + 3000);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    xsi_vlog_generic_convert_bit_index(t53, t56, 2, t59, 9, 2);
    t60 = (t53 + 4);
    t61 = *((unsigned int *)t60);
    t62 = (!(t61));
    if (t62 == 1)
        goto LAB34;

LAB35:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t2 = (t0 + 1920U);
    t4 = (t2 + 72U);
    t5 = *((char **)t4);
    t11 = (t0 + 3000);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    xsi_vlog_generic_get_index_select_value(t19, 1, t3, t5, 2, t14, 9, 2);
    memset(t18, 0, 8);
    t15 = (t19 + 4);
    t6 = *((unsigned int *)t15);
    t7 = (~(t6));
    t8 = *((unsigned int *)t19);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t15) != 0)
        goto LAB38;

LAB39:    t17 = (t18 + 4);
    t29 = *((unsigned int *)t18);
    t30 = *((unsigned int *)t17);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB40;

LAB41:    t32 = *((unsigned int *)t18);
    t33 = (~(t32));
    t36 = *((unsigned int *)t17);
    t37 = (t33 || t36);
    if (t37 > 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t17) > 0)
        goto LAB44;

LAB45:    if (*((unsigned int *)t18) > 0)
        goto LAB46;

LAB47:    memcpy(t13, t28, 8);

LAB48:    t34 = (t0 + 2840);
    t35 = (t0 + 2840);
    t39 = (t35 + 72U);
    t40 = *((char **)t39);
    t42 = (t0 + 3000);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    xsi_vlog_generic_convert_bit_index(t41, t40, 2, t44, 9, 2);
    t45 = (t41 + 4);
    t38 = *((unsigned int *)t45);
    t62 = (!(t38));
    if (t62 == 1)
        goto LAB49;

LAB50:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB19:    t3 = (t0 + 3720);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    xsi_set_current_line(25, ng0);
    t2 = (t0 + 3000);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 9, t5, 32);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 9);
    goto LAB10;

LAB21:    *((unsigned int *)t19) = 1;
    goto LAB24;

LAB23:    t34 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB24;

LAB25:    t39 = (t0 + 2120U);
    t40 = *((char **)t39);
    t39 = (t0 + 2080U);
    t42 = (t39 + 72U);
    t43 = *((char **)t42);
    t44 = (t0 + 3000);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    xsi_vlog_generic_get_index_select_value(t41, 1, t40, t43, 2, t46, 9, 2);
    goto LAB26;

LAB27:    t51 = ((char*)((ng2)));
    goto LAB28;

LAB29:    xsi_vlog_unsigned_bit_combine(t18, 1, t41, 1, t51, 1);
    goto LAB33;

LAB31:    memcpy(t18, t41, 8);
    goto LAB33;

LAB34:    xsi_vlogvar_wait_assign_value(t52, t18, 0, *((unsigned int *)t53), 1, 0LL);
    goto LAB35;

LAB36:    *((unsigned int *)t18) = 1;
    goto LAB39;

LAB38:    t16 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t16) = 1;
    goto LAB39;

LAB40:    t20 = (t0 + 2280U);
    t21 = *((char **)t20);
    t20 = (t0 + 2240U);
    t23 = (t20 + 72U);
    t24 = *((char **)t23);
    t25 = (t0 + 3000);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    xsi_vlog_generic_get_index_select_value(t22, 1, t21, t24, 2, t27, 9, 2);
    goto LAB41;

LAB42:    t28 = ((char*)((ng2)));
    goto LAB43;

LAB44:    xsi_vlog_unsigned_bit_combine(t13, 1, t22, 1, t28, 1);
    goto LAB48;

LAB46:    memcpy(t13, t22, 8);
    goto LAB48;

LAB49:    xsi_vlogvar_wait_assign_value(t34, t13, 0, *((unsigned int *)t41), 1, 0LL);
    goto LAB50;

}


extern void work_m_18380682457505228395_3243429440_init()
{
	static char *pe[] = {(void *)Always_18_0};
	xsi_register_didat("work_m_18380682457505228395_3243429440", "isim/cpu_isim_beh.exe.sim/work/m_18380682457505228395_3243429440.didat");
	xsi_register_executes(pe);
}
