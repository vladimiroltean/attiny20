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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_11013316020800693640_0457016286_init();
    work_m_05007481564404943610_0266380040_init();
    work_m_07005960154240995210_0782664348_init();
    work_m_00983998573257835876_1893023533_init();
    work_m_12466465884410966165_3206292610_init();
    work_m_17048300975216766255_1351276808_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_17048300975216766255_1351276808");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
