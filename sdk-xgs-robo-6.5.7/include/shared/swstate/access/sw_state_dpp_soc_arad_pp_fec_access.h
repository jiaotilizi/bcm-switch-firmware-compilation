/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_PP_FEC_ACCESS_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_PP_FEC_ACCESS_H_

/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_set_cb)(
    int unit, CONST ARAD_PP_FEC *fec);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_get_cb)(
    int unit, ARAD_PP_FEC *fec);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_alloc */
typedef int (*sw_state_dpp_soc_arad_pp_fec_alloc_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_allocated */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_free */
typedef int (*sw_state_dpp_soc_arad_pp_fec_free_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_fec_entry_type_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_fec_entry_type_set_cb)(
    int unit, int fec_entry_type_idx_0, SOC_PPC_FEC_TYPE fec_entry_type);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_fec_entry_type_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_fec_entry_type_get_cb)(
    int unit, int fec_entry_type_idx_0, SOC_PPC_FEC_TYPE *fec_entry_type);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_fec_entry_type_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_fec_entry_type_verify_cb)(
    int unit, int fec_entry_type_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_set_cb)(
    int unit, int flp_progs_mapping_idx_0, uint8 flp_progs_mapping);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_get_cb)(
    int unit, int flp_progs_mapping_idx_0, uint8 *flp_progs_mapping);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_verify_cb)(
    int unit, int flp_progs_mapping_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_set_cb)(
    int unit, int lem_prefix_mapping_idx_0, uint8 lem_prefix_mapping);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_get_cb)(
    int unit, int lem_prefix_mapping_idx_0, uint8 *lem_prefix_mapping);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_verify_cb)(
    int unit, int lem_prefix_mapping_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_set_cb)(
    int unit, int _bit_num);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_clear */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_clear_cb)(
    int unit, int _bit_num);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_get_cb)(
    int unit, int _bit_num, uint8* result);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_read */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_read_cb)(
    int unit, int sw_state_bmp_first, int result_first, int _range, SHR_BITDCL *result);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_write */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_write_cb)(
    int unit, int sw_state_bmp_first, int input_bmp_first, int _range, SHR_BITDCL *input_bmp);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_and */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_and_cb)(
    int unit, int _first, int _count, SHR_BITDCL *input_bmp);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_or */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_or_cb)(
    int unit, int _first, int _count, SHR_BITDCL *input_bmp);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_xor */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_xor_cb)(
    int unit, int _first, int _count, SHR_BITDCL *input_bmp);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_remove */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_remove_cb)(
    int unit, int _first, int _count, SHR_BITDCL *input_bmp);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_negate */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_negate_cb)(
    int unit, int _first, int _count);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_clear */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_clear_cb)(
    int unit, int _first, int _count);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_set_cb)(
    int unit, int _first, int _count);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_null */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_null_cb)(
    int unit, int _first, int _count, uint8 *result);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_test */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_test_cb)(
    int unit, int _first, int _count, uint8 *result);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_eq */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_eq_cb)(
    int unit, SHR_BITDCL *input_bmp, int _first, int _count, uint8 *result);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_count */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_count_cb)(
    int unit, int _first, int _range, int *result);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_is_protected_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_is_protected_verify_cb)(
    int unit, int is_protected_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_set_cb)(
    int unit, uint64 flp_hw_prog_id_bitmap);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_get_cb)(
    int unit, uint64 *flp_hw_prog_id_bitmap);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_set_cb)(
    int unit, uint64 flp_prog_select_id_bitmap);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_get_cb)(
    int unit, uint64 *flp_prog_select_id_bitmap);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_set */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_set_cb)(
    int unit, int32 flp_ipv4mc_bridge_v4mc_cam_sel_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_get */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_get_cb)(
    int unit, int32 *flp_ipv4mc_bridge_v4mc_cam_sel_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_verify */
typedef int (*sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_fec_entry_type_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_fec_entry_type_set_cb set;
    sw_state_dpp_soc_arad_pp_fec_fec_entry_type_get_cb get;
    sw_state_dpp_soc_arad_pp_fec_fec_entry_type_verify_cb verify;
} sw_state_dpp_soc_arad_pp_fec_fec_entry_type_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_set_cb set;
    sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_get_cb get;
    sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_verify_cb verify;
} sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_set_cb set;
    sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_get_cb get;
    sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_verify_cb verify;
} sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_is_protected_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_set_cb bit_set;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_clear_cb bit_clear;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_get_cb bit_get;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_read_cb bit_range_read;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_write_cb bit_range_write;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_and_cb bit_range_and;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_or_cb bit_range_or;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_xor_cb bit_range_xor;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_remove_cb bit_range_remove;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_negate_cb bit_range_negate;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_clear_cb bit_range_clear;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_set_cb bit_range_set;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_null_cb bit_range_null;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_test_cb bit_range_test;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_eq_cb bit_range_eq;
    sw_state_dpp_soc_arad_pp_fec_is_protected_bit_range_count_cb bit_range_count;
    sw_state_dpp_soc_arad_pp_fec_is_protected_verify_cb verify;
} sw_state_dpp_soc_arad_pp_fec_is_protected_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_set_cb set;
    sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_get_cb get;
    sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_verify_cb verify;
} sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_set_cb set;
    sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_get_cb get;
    sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_verify_cb verify;
} sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_set_cb set;
    sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_get_cb get;
    sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_verify_cb verify;
} sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_soc_arad_pp_fec_cbs_s {
    sw_state_dpp_soc_arad_pp_fec_set_cb set;
    sw_state_dpp_soc_arad_pp_fec_get_cb get;
    sw_state_dpp_soc_arad_pp_fec_alloc_cb alloc;
    sw_state_dpp_soc_arad_pp_fec_is_allocated_cb is_allocated;
    sw_state_dpp_soc_arad_pp_fec_free_cb free;
    sw_state_dpp_soc_arad_pp_fec_verify_cb verify;
    sw_state_dpp_soc_arad_pp_fec_fec_entry_type_cbs_t fec_entry_type;
    sw_state_dpp_soc_arad_pp_fec_flp_progs_mapping_cbs_t flp_progs_mapping;
    sw_state_dpp_soc_arad_pp_fec_lem_prefix_mapping_cbs_t lem_prefix_mapping;
    sw_state_dpp_soc_arad_pp_fec_is_protected_cbs_t is_protected;
    sw_state_dpp_soc_arad_pp_fec_flp_hw_prog_id_bitmap_cbs_t flp_hw_prog_id_bitmap;
    sw_state_dpp_soc_arad_pp_fec_flp_prog_select_id_bitmap_cbs_t flp_prog_select_id_bitmap;
    sw_state_dpp_soc_arad_pp_fec_flp_ipv4mc_bridge_v4mc_cam_sel_id_cbs_t flp_ipv4mc_bridge_v4mc_cam_sel_id;
} sw_state_dpp_soc_arad_pp_fec_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

int sw_state_dpp_soc_arad_pp_fec_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_PP_FEC_ACCESS_H_ */
