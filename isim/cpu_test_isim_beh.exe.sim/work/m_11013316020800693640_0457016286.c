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
static const char *ng0 = "/media/aldi/Little Seagate/Scoala/Facultate/nesortate/verilog/rezolvare/state_machine.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {5, 0};
static int ng4[] = {2, 0};
static int ng5[] = {1, 0};
static int ng6[] = {3, 0};



static void Always_12_0(char *t0)
{
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

LAB0:    t1 = (t0 + 3000U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 3816);
    *((int *)t2) = 1;
    t3 = (t0 + 3032);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(13, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 6, 0LL);

LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(14, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 6, 0LL);
    goto LAB7;

}

static void Always_18_1(char *t0)
{
    char t13[8];
    char t22[8];
    char t36[8];
    char t44[8];
    char t52[8];
    char t90[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    int t76;
    int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    char *t111;

LAB0:    t1 = (t0 + 3248U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 3832);
    *((int *)t2) = 1;
    t3 = (t0 + 3280);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(18, ng0);

LAB5:    xsi_set_current_line(19, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB12;

LAB9:    if (t18 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t13) = 1;

LAB12:    memset(t22, 0, 8);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB13;

LAB14:    if (*((unsigned int *)t23) != 0)
        goto LAB15;

LAB16:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB17;

LAB18:    memcpy(t52, t22, 8);

LAB19:    t84 = (t52 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t52);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB27;

LAB28:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB39;

LAB36:    if (t18 != 0)
        goto LAB38;

LAB37:    *((unsigned int *)t13) = 1;

LAB39:    memset(t22, 0, 8);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t23) != 0)
        goto LAB42;

LAB43:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB44;

LAB45:    memcpy(t52, t22, 8);

LAB46:    t84 = (t52 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t52);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB66;

LAB63:    if (t18 != 0)
        goto LAB65;

LAB64:    *((unsigned int *)t13) = 1;

LAB66:    memset(t22, 0, 8);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t23) != 0)
        goto LAB69;

LAB70:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB71;

LAB72:    memcpy(t52, t22, 8);

LAB73:    t84 = (t52 + 4);
    t85 = *((unsigned int *)t84);
    t86 = (~(t85));
    t87 = *((unsigned int *)t52);
    t88 = (t87 & t86);
    t89 = (t88 != 0);
    if (t89 > 0)
        goto LAB81;

LAB82:
LAB83:
LAB56:
LAB29:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(20, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB12;

LAB13:    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB15:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB16;

LAB17:    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 17);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 17);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    memset(t44, 0, 8);
    t45 = (t36 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t36);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t45) != 0)
        goto LAB22;

LAB23:    t53 = *((unsigned int *)t22);
    t54 = *((unsigned int *)t44);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t22 + 4);
    t57 = (t44 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB19;

LAB20:    *((unsigned int *)t44) = 1;
    goto LAB23;

LAB22:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB23;

LAB24:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t22 + 4);
    t67 = (t44 + 4);
    t68 = *((unsigned int *)t22);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t44);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB26;

LAB27:    xsi_set_current_line(23, ng0);
    t91 = (t0 + 1928);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t90, 0, 8);
    t94 = (t93 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t94) == 0)
        goto LAB30;

LAB32:    t100 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t100) = 1;

LAB33:    t101 = (t90 + 4);
    t102 = (t93 + 4);
    t103 = *((unsigned int *)t93);
    t104 = (~(t103));
    *((unsigned int *)t90) = t104;
    *((unsigned int *)t101) = 0;
    if (*((unsigned int *)t102) != 0)
        goto LAB35;

LAB34:    t109 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t109 & 1U);
    t110 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t110 & 1U);
    t111 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t111, t90, 0, 0, 1, 0LL);
    goto LAB29;

LAB30:    *((unsigned int *)t90) = 1;
    goto LAB33;

LAB35:    t105 = *((unsigned int *)t90);
    t106 = *((unsigned int *)t102);
    *((unsigned int *)t90) = (t105 | t106);
    t107 = *((unsigned int *)t101);
    t108 = *((unsigned int *)t102);
    *((unsigned int *)t101) = (t107 | t108);
    goto LAB34;

LAB38:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB39;

LAB40:    *((unsigned int *)t22) = 1;
    goto LAB43;

LAB42:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB43;

LAB44:    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 18);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 18);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    memset(t44, 0, 8);
    t45 = (t36 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t36);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t45) != 0)
        goto LAB49;

LAB50:    t53 = *((unsigned int *)t22);
    t54 = *((unsigned int *)t44);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t22 + 4);
    t57 = (t44 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t44) = 1;
    goto LAB50;

LAB49:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB50;

LAB51:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t22 + 4);
    t67 = (t44 + 4);
    t68 = *((unsigned int *)t22);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t44);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB53;

LAB54:    xsi_set_current_line(26, ng0);
    t91 = (t0 + 1928);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t90, 0, 8);
    t94 = (t93 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t94) == 0)
        goto LAB57;

LAB59:    t100 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t100) = 1;

LAB60:    t101 = (t90 + 4);
    t102 = (t93 + 4);
    t103 = *((unsigned int *)t93);
    t104 = (~(t103));
    *((unsigned int *)t90) = t104;
    *((unsigned int *)t101) = 0;
    if (*((unsigned int *)t102) != 0)
        goto LAB62;

LAB61:    t109 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t109 & 1U);
    t110 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t110 & 1U);
    t111 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t111, t90, 0, 0, 1, 0LL);
    goto LAB56;

LAB57:    *((unsigned int *)t90) = 1;
    goto LAB60;

LAB62:    t105 = *((unsigned int *)t90);
    t106 = *((unsigned int *)t102);
    *((unsigned int *)t90) = (t105 | t106);
    t107 = *((unsigned int *)t101);
    t108 = *((unsigned int *)t102);
    *((unsigned int *)t101) = (t107 | t108);
    goto LAB61;

LAB65:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB66;

LAB67:    *((unsigned int *)t22) = 1;
    goto LAB70;

LAB69:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB70;

LAB71:    t34 = (t0 + 1048U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t36 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 19);
    t40 = (t39 & 1);
    *((unsigned int *)t36) = t40;
    t41 = *((unsigned int *)t37);
    t42 = (t41 >> 19);
    t43 = (t42 & 1);
    *((unsigned int *)t34) = t43;
    memset(t44, 0, 8);
    t45 = (t36 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t36);
    t49 = (t48 & t47);
    t50 = (t49 & 1U);
    if (t50 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t45) != 0)
        goto LAB76;

LAB77:    t53 = *((unsigned int *)t22);
    t54 = *((unsigned int *)t44);
    t55 = (t53 & t54);
    *((unsigned int *)t52) = t55;
    t56 = (t22 + 4);
    t57 = (t44 + 4);
    t58 = (t52 + 4);
    t59 = *((unsigned int *)t56);
    t60 = *((unsigned int *)t57);
    t61 = (t59 | t60);
    *((unsigned int *)t58) = t61;
    t62 = *((unsigned int *)t58);
    t63 = (t62 != 0);
    if (t63 == 1)
        goto LAB78;

LAB79:
LAB80:    goto LAB73;

LAB74:    *((unsigned int *)t44) = 1;
    goto LAB77;

LAB76:    t51 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t51) = 1;
    goto LAB77;

LAB78:    t64 = *((unsigned int *)t52);
    t65 = *((unsigned int *)t58);
    *((unsigned int *)t52) = (t64 | t65);
    t66 = (t22 + 4);
    t67 = (t44 + 4);
    t68 = *((unsigned int *)t22);
    t69 = (~(t68));
    t70 = *((unsigned int *)t66);
    t71 = (~(t70));
    t72 = *((unsigned int *)t44);
    t73 = (~(t72));
    t74 = *((unsigned int *)t67);
    t75 = (~(t74));
    t76 = (t69 & t71);
    t77 = (t73 & t75);
    t78 = (~(t76));
    t79 = (~(t77));
    t80 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t80 & t78);
    t81 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t81 & t79);
    t82 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t82 & t78);
    t83 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t83 & t79);
    goto LAB80;

LAB81:    xsi_set_current_line(29, ng0);
    t91 = (t0 + 1928);
    t92 = (t91 + 56U);
    t93 = *((char **)t92);
    memset(t90, 0, 8);
    t94 = (t93 + 4);
    t95 = *((unsigned int *)t94);
    t96 = (~(t95));
    t97 = *((unsigned int *)t93);
    t98 = (t97 & t96);
    t99 = (t98 & 1U);
    if (t99 != 0)
        goto LAB87;

LAB85:    if (*((unsigned int *)t94) == 0)
        goto LAB84;

LAB86:    t100 = (t90 + 4);
    *((unsigned int *)t90) = 1;
    *((unsigned int *)t100) = 1;

LAB87:    t101 = (t90 + 4);
    t102 = (t93 + 4);
    t103 = *((unsigned int *)t93);
    t104 = (~(t103));
    *((unsigned int *)t90) = t104;
    *((unsigned int *)t101) = 0;
    if (*((unsigned int *)t102) != 0)
        goto LAB89;

LAB88:    t109 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t109 & 1U);
    t110 = *((unsigned int *)t101);
    *((unsigned int *)t101) = (t110 & 1U);
    t111 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t111, t90, 0, 0, 1, 0LL);
    goto LAB83;

LAB84:    *((unsigned int *)t90) = 1;
    goto LAB87;

LAB89:    t105 = *((unsigned int *)t90);
    t106 = *((unsigned int *)t102);
    *((unsigned int *)t90) = (t105 | t106);
    t107 = *((unsigned int *)t101);
    t108 = *((unsigned int *)t102);
    *((unsigned int *)t101) = (t107 | t108);
    goto LAB88;

}

static void Always_32_2(char *t0)
{
    char t11[8];
    char t18[8];
    char t31[8];
    char t47[8];
    char t55[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t94;

LAB0:    t1 = (t0 + 3496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3848);
    *((int *)t2) = 1;
    t3 = (t0 + 3528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1768);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t7, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng6)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 32);
    if (t8 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB21:    goto LAB2;

LAB7:    xsi_set_current_line(35, ng0);
    t9 = ((char*)((ng5)));
    t10 = (t0 + 2088);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 6);
    goto LAB21;

LAB9:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    goto LAB21;

LAB11:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 19);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 19);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    memset(t18, 0, 8);
    t7 = (t11 + 4);
    t19 = *((unsigned int *)t7);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t7) != 0)
        goto LAB24;

LAB25:    t10 = (t18 + 4);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB26;

LAB27:    memcpy(t55, t18, 8);

LAB28:    t87 = (t55 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB42:    goto LAB21;

LAB13:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 6);
    goto LAB21;

LAB15:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 17);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 17);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    memset(t18, 0, 8);
    t7 = (t11 + 4);
    t19 = *((unsigned int *)t7);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t7) != 0)
        goto LAB45;

LAB46:    t10 = (t18 + 4);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB47;

LAB48:    memcpy(t55, t18, 8);

LAB49:    t87 = (t55 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB61;

LAB62:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB63:    goto LAB21;

LAB17:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 1048U);
    t4 = *((char **)t3);
    memset(t11, 0, 8);
    t3 = (t11 + 4);
    t5 = (t4 + 4);
    t12 = *((unsigned int *)t4);
    t13 = (t12 >> 18);
    t14 = (t13 & 1);
    *((unsigned int *)t11) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 18);
    t17 = (t16 & 1);
    *((unsigned int *)t3) = t17;
    memset(t18, 0, 8);
    t7 = (t11 + 4);
    t19 = *((unsigned int *)t7);
    t20 = (~(t19));
    t21 = *((unsigned int *)t11);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t7) != 0)
        goto LAB66;

LAB67:    t10 = (t18 + 4);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t10);
    t26 = (t24 || t25);
    if (t26 > 0)
        goto LAB68;

LAB69:    memcpy(t55, t18, 8);

LAB70:    t87 = (t55 + 4);
    t88 = *((unsigned int *)t87);
    t89 = (~(t88));
    t90 = *((unsigned int *)t55);
    t91 = (t90 & t89);
    t92 = (t91 != 0);
    if (t92 > 0)
        goto LAB82;

LAB83:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB84:    goto LAB21;

LAB22:    *((unsigned int *)t18) = 1;
    goto LAB25;

LAB24:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB25;

LAB26:    t27 = (t0 + 1928);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    t33 = (t30 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB32;

LAB29:    if (t43 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t31) = 1;

LAB32:    memset(t47, 0, 8);
    t48 = (t31 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t48) != 0)
        goto LAB35;

LAB36:    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t18 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB37;

LAB38:
LAB39:    goto LAB28;

LAB31:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB32;

LAB33:    *((unsigned int *)t47) = 1;
    goto LAB36;

LAB35:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB36;

LAB37:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t18 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t18);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB39;

LAB40:    xsi_set_current_line(40, ng0);
    t93 = ((char*)((ng4)));
    t94 = (t0 + 2088);
    xsi_vlogvar_assign_value(t94, t93, 0, 0, 6);
    goto LAB42;

LAB43:    *((unsigned int *)t18) = 1;
    goto LAB46;

LAB45:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB47:    t27 = (t0 + 1928);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    t33 = (t30 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB53;

LAB50:    if (t43 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t31) = 1;

LAB53:    memset(t47, 0, 8);
    t48 = (t31 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB54;

LAB55:    if (*((unsigned int *)t48) != 0)
        goto LAB56;

LAB57:    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t18 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB58;

LAB59:
LAB60:    goto LAB49;

LAB52:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB53;

LAB54:    *((unsigned int *)t47) = 1;
    goto LAB57;

LAB56:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB57;

LAB58:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t18 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t18);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB60;

LAB61:    xsi_set_current_line(47, ng0);
    t93 = ((char*)((ng2)));
    t94 = (t0 + 2088);
    xsi_vlogvar_assign_value(t94, t93, 0, 0, 6);
    goto LAB63;

LAB64:    *((unsigned int *)t18) = 1;
    goto LAB67;

LAB66:    t9 = (t18 + 4);
    *((unsigned int *)t18) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB67;

LAB68:    t27 = (t0 + 1928);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = ((char*)((ng1)));
    memset(t31, 0, 8);
    t32 = (t29 + 4);
    t33 = (t30 + 4);
    t34 = *((unsigned int *)t29);
    t35 = *((unsigned int *)t30);
    t36 = (t34 ^ t35);
    t37 = *((unsigned int *)t32);
    t38 = *((unsigned int *)t33);
    t39 = (t37 ^ t38);
    t40 = (t36 | t39);
    t41 = *((unsigned int *)t32);
    t42 = *((unsigned int *)t33);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t40 & t44);
    if (t45 != 0)
        goto LAB74;

LAB71:    if (t43 != 0)
        goto LAB73;

LAB72:    *((unsigned int *)t31) = 1;

LAB74:    memset(t47, 0, 8);
    t48 = (t31 + 4);
    t49 = *((unsigned int *)t48);
    t50 = (~(t49));
    t51 = *((unsigned int *)t31);
    t52 = (t51 & t50);
    t53 = (t52 & 1U);
    if (t53 != 0)
        goto LAB75;

LAB76:    if (*((unsigned int *)t48) != 0)
        goto LAB77;

LAB78:    t56 = *((unsigned int *)t18);
    t57 = *((unsigned int *)t47);
    t58 = (t56 & t57);
    *((unsigned int *)t55) = t58;
    t59 = (t18 + 4);
    t60 = (t47 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB79;

LAB80:
LAB81:    goto LAB70;

LAB73:    t46 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB74;

LAB75:    *((unsigned int *)t47) = 1;
    goto LAB78;

LAB77:    t54 = (t47 + 4);
    *((unsigned int *)t47) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB78;

LAB79:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    t69 = (t18 + 4);
    t70 = (t47 + 4);
    t71 = *((unsigned int *)t18);
    t72 = (~(t71));
    t73 = *((unsigned int *)t69);
    t74 = (~(t73));
    t75 = *((unsigned int *)t47);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (~(t77));
    t79 = (t72 & t74);
    t80 = (t76 & t78);
    t81 = (~(t79));
    t82 = (~(t80));
    t83 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t83 & t81);
    t84 = *((unsigned int *)t61);
    *((unsigned int *)t61) = (t84 & t82);
    t85 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t85 & t81);
    t86 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t86 & t82);
    goto LAB81;

LAB82:    xsi_set_current_line(52, ng0);
    t93 = ((char*)((ng3)));
    t94 = (t0 + 2088);
    xsi_vlogvar_assign_value(t94, t93, 0, 0, 6);
    goto LAB84;

}


extern void work_m_11013316020800693640_0457016286_init()
{
	static char *pe[] = {(void *)Always_12_0,(void *)Always_18_1,(void *)Always_32_2};
	xsi_register_didat("work_m_11013316020800693640_0457016286", "isim/cpu_test_isim_beh.exe.sim/work/m_11013316020800693640_0457016286.didat");
	xsi_register_executes(pe);
}
