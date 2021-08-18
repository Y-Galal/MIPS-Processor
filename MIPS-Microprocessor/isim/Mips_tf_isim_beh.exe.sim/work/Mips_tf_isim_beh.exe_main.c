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
    work_m_00000000002023528988_0886308060_init();
    work_m_00000000000683084938_2937920168_init();
    work_m_00000000003844762590_2133777247_init();
    work_m_00000000001910889564_1733832700_init();
    work_m_00000000003305977997_2461264495_init();
    work_m_00000000000204860449_1938225339_init();
    work_m_00000000000146324344_1193918056_init();
    work_m_00000000003451402095_3350891018_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000003451402095_3350891018");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
