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

#ifndef _SHR_SW_STATE_DPP_BCM_TRUNK_ACCESS_H_
#define _SHR_SW_STATE_DPP_BCM_TRUNK_ACCESS_H_

/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_alloc */
typedef int (*sw_state_dpp_bcm_trunk_alloc_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_is_allocated */
typedef int (*sw_state_dpp_bcm_trunk_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_free */
typedef int (*sw_state_dpp_bcm_trunk_free_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_verify */
typedef int (*sw_state_dpp_bcm_trunk_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_init_state_set */
typedef int (*sw_state_dpp_bcm_trunk_init_state_set_cb)(
    int unit, trunk_init_state_t init_state);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_init_state_get */
typedef int (*sw_state_dpp_bcm_trunk_init_state_get_cb)(
    int unit, trunk_init_state_t *init_state);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_init_state_verify */
typedef int (*sw_state_dpp_bcm_trunk_init_state_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_ngroups_set */
typedef int (*sw_state_dpp_bcm_trunk_ngroups_set_cb)(
    int unit, int ngroups);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_ngroups_get */
typedef int (*sw_state_dpp_bcm_trunk_ngroups_get_cb)(
    int unit, int *ngroups);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_ngroups_verify */
typedef int (*sw_state_dpp_bcm_trunk_ngroups_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_stk_ngroups_set */
typedef int (*sw_state_dpp_bcm_trunk_stk_ngroups_set_cb)(
    int unit, int stk_ngroups);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_stk_ngroups_get */
typedef int (*sw_state_dpp_bcm_trunk_stk_ngroups_get_cb)(
    int unit, int *stk_ngroups);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_stk_ngroups_verify */
typedef int (*sw_state_dpp_bcm_trunk_stk_ngroups_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_nports_set */
typedef int (*sw_state_dpp_bcm_trunk_nports_set_cb)(
    int unit, int nports);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_nports_get */
typedef int (*sw_state_dpp_bcm_trunk_nports_get_cb)(
    int unit, int *nports);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_nports_verify */
typedef int (*sw_state_dpp_bcm_trunk_nports_verify_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_set */
typedef int (*sw_state_dpp_bcm_trunk_t_info_set_cb)(
    int unit, int t_info_idx_0, CONST bcm_dpp_trunk_private_t *t_info);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_get */
typedef int (*sw_state_dpp_bcm_trunk_t_info_get_cb)(
    int unit, int t_info_idx_0, bcm_dpp_trunk_private_t *t_info);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_alloc */
typedef int (*sw_state_dpp_bcm_trunk_t_info_alloc_cb)(
    int unit, int nof_instances_to_alloc);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_is_allocated */
typedef int (*sw_state_dpp_bcm_trunk_t_info_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_free */
typedef int (*sw_state_dpp_bcm_trunk_t_info_free_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_verify */
typedef int (*sw_state_dpp_bcm_trunk_t_info_verify_cb)(
    int unit, int t_info_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_trunk_id_set */
typedef int (*sw_state_dpp_bcm_trunk_t_info_trunk_id_set_cb)(
    int unit, int t_info_idx_0, bcm_trunk_t trunk_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_trunk_id_get */
typedef int (*sw_state_dpp_bcm_trunk_t_info_trunk_id_get_cb)(
    int unit, int t_info_idx_0, bcm_trunk_t *trunk_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_trunk_id_verify */
typedef int (*sw_state_dpp_bcm_trunk_t_info_trunk_id_verify_cb)(
    int unit, int t_info_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_in_use_set */
typedef int (*sw_state_dpp_bcm_trunk_t_info_in_use_set_cb)(
    int unit, int t_info_idx_0, int in_use);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_in_use_get */
typedef int (*sw_state_dpp_bcm_trunk_t_info_in_use_get_cb)(
    int unit, int t_info_idx_0, int *in_use);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_in_use_verify */
typedef int (*sw_state_dpp_bcm_trunk_t_info_in_use_verify_cb)(
    int unit, int t_info_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_nof_members_set */
typedef int (*sw_state_dpp_bcm_trunk_t_info_nof_members_set_cb)(
    int unit, int t_info_idx_0, int nof_members);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_nof_members_get */
typedef int (*sw_state_dpp_bcm_trunk_t_info_nof_members_get_cb)(
    int unit, int t_info_idx_0, int *nof_members);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_nof_members_verify */
typedef int (*sw_state_dpp_bcm_trunk_t_info_nof_members_verify_cb)(
    int unit, int t_info_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_is_stateful_set */
typedef int (*sw_state_dpp_bcm_trunk_t_info_is_stateful_set_cb)(
    int unit, int t_info_idx_0, int is_stateful);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_is_stateful_get */
typedef int (*sw_state_dpp_bcm_trunk_t_info_is_stateful_get_cb)(
    int unit, int t_info_idx_0, int *is_stateful);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_is_stateful_verify */
typedef int (*sw_state_dpp_bcm_trunk_t_info_is_stateful_verify_cb)(
    int unit, int t_info_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_psc_set */
typedef int (*sw_state_dpp_bcm_trunk_t_info_psc_set_cb)(
    int unit, int t_info_idx_0, int psc);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_psc_get */
typedef int (*sw_state_dpp_bcm_trunk_t_info_psc_get_cb)(
    int unit, int t_info_idx_0, int *psc);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_t_info_psc_verify */
typedef int (*sw_state_dpp_bcm_trunk_t_info_psc_verify_cb)(
    int unit, int t_info_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_set */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_set_cb)(
    int unit, int trunk_members_idx_0, CONST bcm_dpp_trunk_member_t *trunk_members);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_get */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_get_cb)(
    int unit, int trunk_members_idx_0, bcm_dpp_trunk_member_t *trunk_members);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_alloc */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_alloc_cb)(
    int unit, int nof_instances_to_alloc);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_is_allocated */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_free */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_free_cb)(
    int unit);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_verify */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_verify_cb)(
    int unit, int trunk_members_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_system_port_set */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_system_port_set_cb)(
    int unit, int trunk_members_idx_0, bcm_gport_t system_port);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_system_port_get */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_system_port_get_cb)(
    int unit, int trunk_members_idx_0, bcm_gport_t *system_port);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_system_port_verify */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_system_port_verify_cb)(
    int unit, int trunk_members_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_flags_set */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_flags_set_cb)(
    int unit, int trunk_members_idx_0, uint32 flags);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_flags_get */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_flags_get_cb)(
    int unit, int trunk_members_idx_0, uint32 *flags);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_flags_verify */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_flags_verify_cb)(
    int unit, int trunk_members_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_member_id_set */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_member_id_set_cb)(
    int unit, int trunk_members_idx_0, uint32 member_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_member_id_get */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_member_id_get_cb)(
    int unit, int trunk_members_idx_0, uint32 *member_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_member_id_verify */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_member_id_verify_cb)(
    int unit, int trunk_members_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_trunk_id_set */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_trunk_id_set_cb)(
    int unit, int trunk_members_idx_0, uint32 trunk_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_trunk_id_get */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_trunk_id_get_cb)(
    int unit, int trunk_members_idx_0, uint32 *trunk_id);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* implemented by: sw_state_dpp_bcm_trunk_trunk_members_trunk_id_verify */
typedef int (*sw_state_dpp_bcm_trunk_trunk_members_trunk_id_verify_cb)(
    int unit, int trunk_members_idx_0);
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_init_state_cbs_s {
    sw_state_dpp_bcm_trunk_init_state_set_cb set;
    sw_state_dpp_bcm_trunk_init_state_get_cb get;
    sw_state_dpp_bcm_trunk_init_state_verify_cb verify;
} sw_state_dpp_bcm_trunk_init_state_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_ngroups_cbs_s {
    sw_state_dpp_bcm_trunk_ngroups_set_cb set;
    sw_state_dpp_bcm_trunk_ngroups_get_cb get;
    sw_state_dpp_bcm_trunk_ngroups_verify_cb verify;
} sw_state_dpp_bcm_trunk_ngroups_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_stk_ngroups_cbs_s {
    sw_state_dpp_bcm_trunk_stk_ngroups_set_cb set;
    sw_state_dpp_bcm_trunk_stk_ngroups_get_cb get;
    sw_state_dpp_bcm_trunk_stk_ngroups_verify_cb verify;
} sw_state_dpp_bcm_trunk_stk_ngroups_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_nports_cbs_s {
    sw_state_dpp_bcm_trunk_nports_set_cb set;
    sw_state_dpp_bcm_trunk_nports_get_cb get;
    sw_state_dpp_bcm_trunk_nports_verify_cb verify;
} sw_state_dpp_bcm_trunk_nports_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_t_info_trunk_id_cbs_s {
    sw_state_dpp_bcm_trunk_t_info_trunk_id_set_cb set;
    sw_state_dpp_bcm_trunk_t_info_trunk_id_get_cb get;
    sw_state_dpp_bcm_trunk_t_info_trunk_id_verify_cb verify;
} sw_state_dpp_bcm_trunk_t_info_trunk_id_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_t_info_in_use_cbs_s {
    sw_state_dpp_bcm_trunk_t_info_in_use_set_cb set;
    sw_state_dpp_bcm_trunk_t_info_in_use_get_cb get;
    sw_state_dpp_bcm_trunk_t_info_in_use_verify_cb verify;
} sw_state_dpp_bcm_trunk_t_info_in_use_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_t_info_nof_members_cbs_s {
    sw_state_dpp_bcm_trunk_t_info_nof_members_set_cb set;
    sw_state_dpp_bcm_trunk_t_info_nof_members_get_cb get;
    sw_state_dpp_bcm_trunk_t_info_nof_members_verify_cb verify;
} sw_state_dpp_bcm_trunk_t_info_nof_members_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_t_info_is_stateful_cbs_s {
    sw_state_dpp_bcm_trunk_t_info_is_stateful_set_cb set;
    sw_state_dpp_bcm_trunk_t_info_is_stateful_get_cb get;
    sw_state_dpp_bcm_trunk_t_info_is_stateful_verify_cb verify;
} sw_state_dpp_bcm_trunk_t_info_is_stateful_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_t_info_psc_cbs_s {
    sw_state_dpp_bcm_trunk_t_info_psc_set_cb set;
    sw_state_dpp_bcm_trunk_t_info_psc_get_cb get;
    sw_state_dpp_bcm_trunk_t_info_psc_verify_cb verify;
} sw_state_dpp_bcm_trunk_t_info_psc_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_t_info_cbs_s {
    sw_state_dpp_bcm_trunk_t_info_set_cb set;
    sw_state_dpp_bcm_trunk_t_info_get_cb get;
    sw_state_dpp_bcm_trunk_t_info_alloc_cb alloc;
    sw_state_dpp_bcm_trunk_t_info_is_allocated_cb is_allocated;
    sw_state_dpp_bcm_trunk_t_info_free_cb free;
    sw_state_dpp_bcm_trunk_t_info_verify_cb verify;
    sw_state_dpp_bcm_trunk_t_info_trunk_id_cbs_t trunk_id;
    sw_state_dpp_bcm_trunk_t_info_in_use_cbs_t in_use;
    sw_state_dpp_bcm_trunk_t_info_nof_members_cbs_t nof_members;
    sw_state_dpp_bcm_trunk_t_info_is_stateful_cbs_t is_stateful;
    sw_state_dpp_bcm_trunk_t_info_psc_cbs_t psc;
} sw_state_dpp_bcm_trunk_t_info_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_trunk_members_system_port_cbs_s {
    sw_state_dpp_bcm_trunk_trunk_members_system_port_set_cb set;
    sw_state_dpp_bcm_trunk_trunk_members_system_port_get_cb get;
    sw_state_dpp_bcm_trunk_trunk_members_system_port_verify_cb verify;
} sw_state_dpp_bcm_trunk_trunk_members_system_port_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_trunk_members_flags_cbs_s {
    sw_state_dpp_bcm_trunk_trunk_members_flags_set_cb set;
    sw_state_dpp_bcm_trunk_trunk_members_flags_get_cb get;
    sw_state_dpp_bcm_trunk_trunk_members_flags_verify_cb verify;
} sw_state_dpp_bcm_trunk_trunk_members_flags_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_trunk_members_member_id_cbs_s {
    sw_state_dpp_bcm_trunk_trunk_members_member_id_set_cb set;
    sw_state_dpp_bcm_trunk_trunk_members_member_id_get_cb get;
    sw_state_dpp_bcm_trunk_trunk_members_member_id_verify_cb verify;
} sw_state_dpp_bcm_trunk_trunk_members_member_id_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_trunk_members_trunk_id_cbs_s {
    sw_state_dpp_bcm_trunk_trunk_members_trunk_id_set_cb set;
    sw_state_dpp_bcm_trunk_trunk_members_trunk_id_get_cb get;
    sw_state_dpp_bcm_trunk_trunk_members_trunk_id_verify_cb verify;
} sw_state_dpp_bcm_trunk_trunk_members_trunk_id_cbs_t;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_trunk_members_cbs_s {
    sw_state_dpp_bcm_trunk_trunk_members_set_cb set;
    sw_state_dpp_bcm_trunk_trunk_members_get_cb get;
    sw_state_dpp_bcm_trunk_trunk_members_alloc_cb alloc;
    sw_state_dpp_bcm_trunk_trunk_members_is_allocated_cb is_allocated;
    sw_state_dpp_bcm_trunk_trunk_members_free_cb free;
    sw_state_dpp_bcm_trunk_trunk_members_verify_cb verify;
    sw_state_dpp_bcm_trunk_trunk_members_system_port_cbs_t system_port;
    sw_state_dpp_bcm_trunk_trunk_members_flags_cbs_t flags;
    sw_state_dpp_bcm_trunk_trunk_members_member_id_cbs_t member_id;
    sw_state_dpp_bcm_trunk_trunk_members_trunk_id_cbs_t trunk_id;
} sw_state_dpp_bcm_trunk_trunk_members_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
typedef struct sw_state_dpp_bcm_trunk_cbs_s {
#if defined(BCM_PETRA_SUPPORT)
    sw_state_dpp_bcm_trunk_alloc_cb alloc;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
    sw_state_dpp_bcm_trunk_is_allocated_cb is_allocated;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
    sw_state_dpp_bcm_trunk_free_cb free;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
    sw_state_dpp_bcm_trunk_verify_cb verify;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    sw_state_dpp_bcm_trunk_init_state_cbs_t init_state;
    sw_state_dpp_bcm_trunk_ngroups_cbs_t ngroups;
    sw_state_dpp_bcm_trunk_stk_ngroups_cbs_t stk_ngroups;
    sw_state_dpp_bcm_trunk_nports_cbs_t nports;
    sw_state_dpp_bcm_trunk_t_info_cbs_t t_info;
    sw_state_dpp_bcm_trunk_trunk_members_cbs_t trunk_members;
} sw_state_dpp_bcm_trunk_cbs_t;

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

int sw_state_dpp_bcm_trunk_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_DPP_BCM_TRUNK_ACCESS_H_ */
