/**************************************************************************************************
 **************************************************************************************************
 *                                                                                                *
 *  Revision      :  $Id: eagle_merlin_api_uc_vars_rdwr_defns_public.h 947 2015-03-06 21:11:44Z kirand $ *
 *                                                                                                *
 *  Description   :  Read/Write macros to Eagle/Merlin IP's uC RAM's User variables               *
 *                                                                                                *
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$                                                                          *
 *  No portions of this material may be reproduced in any form without                            *
 *  the written permission of:                                                                    *
 *      Broadcom Corporation                                                                      *
 *      5300 California Avenue                                                                    *
 *      Irvine, CA  92617                                                                         *
 *                                                                                                *
 *  All information contained in this document is Broadcom Corporation                            *
 *  company private proprietary, and trade secret.                                                *
 *                                                                                                *
 **************************************************************************************************
 **************************************************************************************************/

/** @file eagle_merlin_api_uc_vars_rdwr_defns.h
 * Read/Write macros to Eagle/Merlin IP's uC RAM's User variables
 */

/* THIS FILE IS GENERATED USING AN AUTOMATED SCRIPT... PLEASE DO NOT EDIT THIS FILE DIRECTLY !!! */


#ifndef EAGLE_MERLIN_API_UC_VARS_RDWR_DEFNS_PUBLIC_H
#define EAGLE_MERLIN_API_UC_VARS_RDWR_DEFNS_PUBLIC_H

/************************************/
/*  Serdes IP RAM access functions  */
/************************************/

/* RAM access functions for lane_var_struct variables */
#define rdv_merlin_koi_config_word()                                            merlin_koi_rdwl_uc_var(__ERR,0x0)
#define wrv_merlin_koi_config_word(wr_val)                                      merlin_koi_wrwl_uc_var(0x0,wr_val)
#define rdv_merlin_koi_usr_ctrl_retune_after_restart()                          merlin_koi_rdbl_uc_var(__ERR,0x2)
#define wrv_merlin_koi_usr_ctrl_retune_after_restart(wr_val)                    merlin_koi_wrbl_uc_var(0x2,wr_val)
#define rdv_merlin_koi_usr_ctrl_clk90_offset_adjust()                           merlin_koi_rdbl_uc_var(__ERR,0x3)
#define wrv_merlin_koi_usr_ctrl_clk90_offset_adjust(wr_val)                     merlin_koi_wrbl_uc_var(0x3,wr_val)
#define rdv_merlin_koi_usr_ctrl_clk90_offset_override()                         merlin_koi_rdbl_uc_var(__ERR,0x4)
#define wrv_merlin_koi_usr_ctrl_clk90_offset_override(wr_val)                   merlin_koi_wrbl_uc_var(0x4,wr_val)
#define rdv_merlin_koi_usr_ctrl_lane_event_log_level()                          merlin_koi_rdbl_uc_var(__ERR,0x5)
#define wrv_merlin_koi_usr_ctrl_lane_event_log_level(wr_val)                    merlin_koi_wrbl_uc_var(0x5,wr_val)
#define rdv_merlin_koi_usr_ctrl_disable_startup_functions_byte()                merlin_koi_rdbl_uc_var(__ERR,0x6)
#define wrv_merlin_koi_usr_ctrl_disable_startup_functions_byte(wr_val)          merlin_koi_wrbl_uc_var(0x6,wr_val)
#define rdv_merlin_koi_usr_ctrl_disable_startup_dfe_functions_byte()            merlin_koi_rdbl_uc_var(__ERR,0x7)
#define wrv_merlin_koi_usr_ctrl_disable_startup_dfe_functions_byte(wr_val)      merlin_koi_wrbl_uc_var(0x7,wr_val)
#define rdv_merlin_koi_usr_ctrl_disable_steady_state_functions_byte()           merlin_koi_rdbl_uc_var(__ERR,0x8)
#define wrv_merlin_koi_usr_ctrl_disable_steady_state_functions_byte(wr_val)     merlin_koi_wrbl_uc_var(0x8,wr_val)
#define rdv_merlin_koi_usr_ctrl_disable_steady_state_dfe_functions_byte()       merlin_koi_rdbl_uc_var(__ERR,0x9)
#define wrv_merlin_koi_usr_ctrl_disable_steady_state_dfe_functions_byte(wr_val) merlin_koi_wrbl_uc_var(0x9,wr_val)
#define rdv_merlin_koi_usr_sts_restart_counter()                                merlin_koi_rdbl_uc_var(__ERR,0xa)
#define wrv_merlin_koi_usr_sts_restart_counter(wr_val)                          merlin_koi_wrbl_uc_var(0xa,wr_val)
#define rdv_merlin_koi_usr_sts_reset_counter()                                  merlin_koi_rdbl_uc_var(__ERR,0xb)
#define wrv_merlin_koi_usr_sts_reset_counter(wr_val)                            merlin_koi_wrbl_uc_var(0xb,wr_val)
#define rdv_merlin_koi_usr_sts_pmd_lock_counter()                               merlin_koi_rdbl_uc_var(__ERR,0xc)
#define wrv_merlin_koi_usr_sts_pmd_lock_counter(wr_val)                         merlin_koi_wrbl_uc_var(0xc,wr_val)
#define rdv_merlin_koi_usr_sts_heye_left()                                      merlin_koi_rdbl_uc_var(__ERR,0xd)
#define wrv_merlin_koi_usr_sts_heye_left(wr_val)                                merlin_koi_wrbl_uc_var(0xd,wr_val)
#define rdv_merlin_koi_usr_sts_heye_right()                                     merlin_koi_rdbl_uc_var(__ERR,0xe)
#define wrv_merlin_koi_usr_sts_heye_right(wr_val)                               merlin_koi_wrbl_uc_var(0xe,wr_val)
#define rdv_merlin_koi_usr_sts_veye_upper()                                     merlin_koi_rdbl_uc_var(__ERR,0xf)
#define wrv_merlin_koi_usr_sts_veye_upper(wr_val)                               merlin_koi_wrbl_uc_var(0xf,wr_val)
#define rdv_merlin_koi_usr_sts_veye_lower()                                     merlin_koi_rdbl_uc_var(__ERR,0x10)
#define wrv_merlin_koi_usr_sts_veye_lower(wr_val)                               merlin_koi_wrbl_uc_var(0x10,wr_val)
#define rdv_merlin_koi_usr_sts_micro_stopped()                                  merlin_koi_rdbl_uc_var(__ERR,0x11)
#define wrv_merlin_koi_usr_sts_micro_stopped(wr_val)                            merlin_koi_wrbl_uc_var(0x11,wr_val)
#define rdv_merlin_koi_usr_sts_link_time()                                      merlin_koi_rdwl_uc_var(__ERR,0x12)
#define wrv_merlin_koi_usr_sts_link_time(wr_val)                                merlin_koi_wrwl_uc_var(0x12,wr_val)
#define rdv_merlin_koi_usr_diag_status()                                        merlin_koi_rdwl_uc_var(__ERR,0x14)
#define wrv_merlin_koi_usr_diag_status(wr_val)                                  merlin_koi_wrwl_uc_var(0x14,wr_val)
#define rdv_merlin_koi_usr_diag_rd_ptr()                                        merlin_koi_rdbl_uc_var(__ERR,0x16)
#define wrv_merlin_koi_usr_diag_rd_ptr(wr_val)                                  merlin_koi_wrbl_uc_var(0x16,wr_val)
#define rdv_merlin_koi_usr_diag_mode()                                          merlin_koi_rdbl_uc_var(__ERR,0x17)
#define wrv_merlin_koi_usr_diag_mode(wr_val)                                    merlin_koi_wrbl_uc_var(0x17,wr_val)
#define rdv_merlin_koi_usr_var_msb()                                            merlin_koi_rdwl_uc_var(__ERR,0x18)
#define wrv_merlin_koi_usr_var_msb(wr_val)                                      merlin_koi_wrwl_uc_var(0x18,wr_val)
#define rdv_merlin_koi_usr_var_lsb()                                            merlin_koi_rdwl_uc_var(__ERR,0x1a)
#define wrv_merlin_koi_usr_var_lsb(wr_val)                                      merlin_koi_wrwl_uc_var(0x1a,wr_val)

/* RAM access functions for ilane_var_struct variables */

/* RAM access functions for core_var_struct variables */
#define rdcv_merlin_koi_config_word()                                           merlin_koi_rdwc_uc_var(__ERR,0x0)
#define wrcv_merlin_koi_config_word(wr_val)                                     merlin_koi_wrwc_uc_var(0x0,wr_val)
#define rdcv_merlin_koi_temp_frc_val()                                          merlin_koi_rdwc_uc_var(__ERR,0x2)
#define wrcv_merlin_koi_temp_frc_val(wr_val)                                    merlin_koi_wrwc_uc_var(0x2,wr_val)
#define rdcv_merlin_koi_common_ucode_version()                                  merlin_koi_rdwc_uc_var(__ERR,0x4)
#define wrcv_merlin_koi_common_ucode_version(wr_val)                            merlin_koi_wrwc_uc_var(0x4,wr_val)
#define rdcv_merlin_koi_avg_tmon_reg13bit()                                     merlin_koi_rdwc_uc_var(__ERR,0x6)
#define wrcv_merlin_koi_avg_tmon_reg13bit(wr_val)                               merlin_koi_wrwc_uc_var(0x6,wr_val)
#define rdcv_merlin_koi_trace_mem_rd_idx()                                      merlin_koi_rdwc_uc_var(__ERR,0x8)
#define wrcv_merlin_koi_trace_mem_rd_idx(wr_val)                                merlin_koi_wrwc_uc_var(0x8,wr_val)
#define rdcv_merlin_koi_trace_mem_wr_idx()                                      merlin_koi_rdwc_uc_var(__ERR,0xa)
#define wrcv_merlin_koi_trace_mem_wr_idx(wr_val)                                merlin_koi_wrwc_uc_var(0xa,wr_val)
#define rdcv_merlin_koi_temp_idx()                                              merlin_koi_rdbc_uc_var(__ERR,0xc)
#define wrcv_merlin_koi_temp_idx(wr_val)                                        merlin_koi_wrbc_uc_var(0xc,wr_val)
#define rdcv_merlin_koi_usr_ctrl_core_event_log_level()                         merlin_koi_rdbc_uc_var(__ERR,0xd)
#define wrcv_merlin_koi_usr_ctrl_core_event_log_level(wr_val)                   merlin_koi_wrbc_uc_var(0xd,wr_val)
#define rdcv_merlin_koi_common_ucode_minor_version()                            merlin_koi_rdbc_uc_var(__ERR,0xe)
#define wrcv_merlin_koi_common_ucode_minor_version(wr_val)                      merlin_koi_wrbc_uc_var(0xe,wr_val)
#define rdcv_merlin_koi_afe_hardware_version()                                  merlin_koi_rdbc_uc_var(__ERR,0xf)
#define wrcv_merlin_koi_afe_hardware_version(wr_val)                            merlin_koi_wrbc_uc_var(0xf,wr_val)
#define rdcv_merlin_koi_status_byte()                                           merlin_koi_rdbc_uc_var(__ERR,0x10)
#define wrcv_merlin_koi_status_byte(wr_val)                                     merlin_koi_wrbc_uc_var(0x10,wr_val)
#define rdcv_merlin_koi_diag_max_time_control()                                 merlin_koi_rdbc_uc_var(__ERR,0x11)
#define wrcv_merlin_koi_diag_max_time_control(wr_val)                           merlin_koi_wrbc_uc_var(0x11,wr_val)
#define rdcv_merlin_koi_diag_max_err_control()                                  merlin_koi_rdbc_uc_var(__ERR,0x12)
#define wrcv_merlin_koi_diag_max_err_control(wr_val)                            merlin_koi_wrbc_uc_var(0x12,wr_val)

#endif
