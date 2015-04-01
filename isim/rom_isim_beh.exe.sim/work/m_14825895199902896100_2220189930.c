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
static const char *ng0 = "/media/aldi/Little Seagate/Scoala/Facultate/nesortate/verilog/rezolvare/rom.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {49165U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {58126U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {57374U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {57636U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {57912U, 0U};
static int ng11[] = {5, 0};
static unsigned int ng12[] = {57408U, 0U};
static int ng13[] = {6, 0};
static unsigned int ng14[] = {40723U, 0U};
static int ng15[] = {7, 0};
static unsigned int ng16[] = {3586U, 0U};
static int ng17[] = {8, 0};
static unsigned int ng18[] = {7700U, 0U};
static int ng19[] = {9, 0};
static unsigned int ng20[] = {37907U, 0U};
static int ng21[] = {10, 0};
static unsigned int ng22[] = {11697U, 0U};
static int ng23[] = {11, 0};
static unsigned int ng24[] = {11680U, 0U};
static int ng25[] = {12, 0};
static unsigned int ng26[] = {37644U, 0U};
static int ng27[] = {13, 0};
static unsigned int ng28[] = {38152U, 0U};
static int ng29[] = {14, 0};
static unsigned int ng30[] = {60175U, 0U};
static int ng31[] = {15, 0};
static unsigned int ng32[] = {48909U, 0U};
static int ng33[] = {16, 0};
static unsigned int ng34[] = {57344U, 0U};
static int ng35[] = {17, 0};
static unsigned int ng36[] = {48910U, 0U};
static int ng37[] = {18, 0};
static unsigned int ng38[] = {57326U, 0U};
static int ng39[] = {19, 0};
static unsigned int ng40[] = {53242U, 0U};
static unsigned int ng41[] = {0U, 0U};



static void Always_12_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3520);
    *((int *)t2) = 1;
    t3 = (t0 + 2984);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(12, ng0);

LAB5:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1480U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 8, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng41)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB49:    goto LAB2;

LAB7:    xsi_set_current_line(15, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2040);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB49;

LAB9:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB11:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB13:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB15:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB17:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB19:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB21:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB23:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB25:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB27:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB29:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB31:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB33:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB35:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB37:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB39:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB41:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB43:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

LAB45:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB49;

}

static void Always_57_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t1 = (t0 + 3200U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3536);
    *((int *)t2) = 1;
    t3 = (t0 + 3232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(57, ng0);

LAB5:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 16, 0LL);
    goto LAB2;

}


extern void work_m_14825895199902896100_2220189930_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Always_57_1};
	xsi_register_didat("work_m_14825895199902896100_2220189930", "isim/rom_isim_beh.exe.sim/work/m_14825895199902896100_2220189930.didat");
	xsi_register_executes(pe);
}
