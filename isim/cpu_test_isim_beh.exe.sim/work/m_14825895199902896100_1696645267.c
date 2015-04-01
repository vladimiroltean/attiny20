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
static unsigned int ng2[] = {49190U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {47053U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {47070U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {38339U, 0U};
static int ng9[] = {4, 0};
static int ng10[] = {5, 0};
static int ng11[] = {6, 0};
static unsigned int ng12[] = {37129U, 0U};
static int ng13[] = {7, 0};
static unsigned int ng14[] = {37145U, 0U};
static int ng15[] = {8, 0};
static unsigned int ng16[] = {33064U, 0U};
static int ng17[] = {9, 0};
static unsigned int ng18[] = {57928U, 0U};
static int ng19[] = {10, 0};
static unsigned int ng20[] = {40708U, 0U};
static int ng21[] = {11, 0};
static unsigned int ng22[] = {11680U, 0U};
static int ng23[] = {12, 0};
static unsigned int ng24[] = {11697U, 0U};
static int ng25[] = {13, 0};
static unsigned int ng26[] = {4001U, 0U};
static int ng27[] = {14, 0};
static unsigned int ng28[] = {8115U, 0U};
static int ng29[] = {15, 0};
static unsigned int ng30[] = {38323U, 0U};
static int ng31[] = {16, 0};
static unsigned int ng32[] = {9216U, 0U};
static int ng33[] = {17, 0};
static unsigned int ng34[] = {9233U, 0U};
static int ng35[] = {18, 0};
static unsigned int ng36[] = {37676U, 0U};
static int ng37[] = {19, 0};
static unsigned int ng38[] = {38152U, 0U};
static int ng39[] = {20, 0};
static unsigned int ng40[] = {58126U, 0U};
static int ng41[] = {21, 0};
static unsigned int ng42[] = {11824U, 0U};
static int ng43[] = {22, 0};
static unsigned int ng44[] = {57344U, 0U};
static int ng45[] = {23, 0};
static unsigned int ng46[] = {11840U, 0U};
static int ng47[] = {24, 0};
static unsigned int ng48[] = {9984U, 0U};
static int ng49[] = {25, 0};
static unsigned int ng50[] = {9301U, 0U};
static int ng51[] = {26, 0};
static unsigned int ng52[] = {37439U, 0U};
static int ng53[] = {27, 0};
static unsigned int ng54[] = {37455U, 0U};
static int ng55[] = {28, 0};
static unsigned int ng56[] = {37471U, 0U};
static int ng57[] = {29, 0};
static unsigned int ng58[] = {57315U, 0U};
static int ng59[] = {30, 0};
static unsigned int ng60[] = {46861U, 0U};
static int ng61[] = {31, 0};
static unsigned int ng62[] = {38147U, 0U};
static int ng63[] = {32, 0};
static int ng64[] = {33, 0};
static int ng65[] = {34, 0};
static unsigned int ng66[] = {48909U, 0U};
static int ng67[] = {35, 0};
static unsigned int ng68[] = {37955U, 0U};
static int ng69[] = {36, 0};
static unsigned int ng70[] = {37971U, 0U};
static int ng71[] = {37, 0};
static unsigned int ng72[] = {53236U, 0U};
static int ng73[] = {38, 0};
static int ng74[] = {39, 0};
static unsigned int ng75[] = {60175U, 0U};
static int ng76[] = {40, 0};
static int ng77[] = {41, 0};
static int ng78[] = {42, 0};
static unsigned int ng79[] = {48910U, 0U};
static int ng80[] = {43, 0};
static unsigned int ng81[] = {57320U, 0U};
static int ng82[] = {44, 0};
static unsigned int ng83[] = {53242U, 0U};
static unsigned int ng84[] = {0U, 0U};



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
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng11)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng13)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng15)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng19)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng21)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng27)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng29)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng31)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng33)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng35)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng37)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng39)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng41)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng43)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng45)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng47)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng49)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng51)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB59;

LAB60:    t2 = ((char*)((ng53)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB61;

LAB62:    t2 = ((char*)((ng55)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB63;

LAB64:    t2 = ((char*)((ng57)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB65;

LAB66:    t2 = ((char*)((ng59)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB67;

LAB68:    t2 = ((char*)((ng61)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB69;

LAB70:    t2 = ((char*)((ng63)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB71;

LAB72:    t2 = ((char*)((ng64)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB73;

LAB74:    t2 = ((char*)((ng65)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB75;

LAB76:    t2 = ((char*)((ng67)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB77;

LAB78:    t2 = ((char*)((ng69)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB79;

LAB80:    t2 = ((char*)((ng71)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB81;

LAB82:    t2 = ((char*)((ng73)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB83;

LAB84:    t2 = ((char*)((ng74)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB85;

LAB86:    t2 = ((char*)((ng76)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB87;

LAB88:    t2 = ((char*)((ng77)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB89;

LAB90:    t2 = ((char*)((ng78)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB91;

LAB92:    t2 = ((char*)((ng80)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB93;

LAB94:    t2 = ((char*)((ng82)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 10, t2, 32);
    if (t6 == 1)
        goto LAB95;

LAB96:
LAB98:
LAB97:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng84)));
    t3 = (t0 + 2040);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);

LAB99:    goto LAB2;

LAB7:    xsi_set_current_line(15, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 2040);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    goto LAB99;

LAB9:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB11:    xsi_set_current_line(19, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB13:    xsi_set_current_line(21, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB15:    xsi_set_current_line(23, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB17:    xsi_set_current_line(25, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB19:    xsi_set_current_line(27, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB21:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB23:    xsi_set_current_line(31, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB25:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB27:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB29:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB31:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng24)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB33:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng26)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB35:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng28)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB37:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng30)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB39:    xsi_set_current_line(47, ng0);
    t3 = ((char*)((ng32)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB41:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng34)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB43:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng36)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB45:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB47:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng40)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB49:    xsi_set_current_line(57, ng0);
    t3 = ((char*)((ng42)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB51:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB53:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng46)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB55:    xsi_set_current_line(63, ng0);
    t3 = ((char*)((ng48)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB57:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng50)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB59:    xsi_set_current_line(67, ng0);
    t3 = ((char*)((ng52)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB61:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng54)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB63:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng56)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB65:    xsi_set_current_line(73, ng0);
    t3 = ((char*)((ng58)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB67:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng60)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB69:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng62)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB71:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng62)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB73:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng62)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB75:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng66)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB77:    xsi_set_current_line(85, ng0);
    t3 = ((char*)((ng68)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB79:    xsi_set_current_line(87, ng0);
    t3 = ((char*)((ng70)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB81:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng72)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB83:    xsi_set_current_line(91, ng0);
    t3 = ((char*)((ng38)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB85:    xsi_set_current_line(93, ng0);
    t3 = ((char*)((ng75)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB87:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng66)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB89:    xsi_set_current_line(97, ng0);
    t3 = ((char*)((ng44)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB91:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng79)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB93:    xsi_set_current_line(101, ng0);
    t3 = ((char*)((ng81)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

LAB95:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng83)));
    t4 = (t0 + 2040);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 16);
    goto LAB99;

}

static void Always_107_1(char *t0)
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

LAB2:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 3536);
    *((int *)t2) = 1;
    t3 = (t0 + 3232);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(107, ng0);

LAB5:    xsi_set_current_line(108, ng0);
    t4 = (t0 + 2040);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1880);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 16, 0LL);
    goto LAB2;

}


extern void work_m_14825895199902896100_1696645267_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Always_107_1};
	xsi_register_didat("work_m_14825895199902896100_1696645267", "isim/cpu_test_isim_beh.exe.sim/work/m_14825895199902896100_1696645267.didat");
	xsi_register_executes(pe);
}
