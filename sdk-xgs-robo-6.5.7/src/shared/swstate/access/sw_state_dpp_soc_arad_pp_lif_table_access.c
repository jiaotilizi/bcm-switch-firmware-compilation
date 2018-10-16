/* $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#include <sal/core/libc.h>
#include <shared/swstate/sw_state.h>
#include <shared/error.h>
#include <shared/swstate/sw_state_defs.h>
#include <shared/bsl.h>
#include <shared/swstate/access/sw_state_access.h>
#include <shared/swstate/access/sw_state_dpp_soc_arad_pp_lif_table_access.h>

#ifdef _ERR_MSG_MODULE_NAME
    #error "_ERR_MSG_MODULE_NAME redefined"
#endif

#define _ERR_MSG_MODULE_NAME BSL_LS_SHARED_SWSTATE

extern shr_sw_state_t *sw_state[BCM_MAX_NUM_UNITS];

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_set(int unit, CONST ARAD_PP_SW_DB_LIF_TABLE *lif_table){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.lif_table.verify( unit));
    SHR_SW_STATE_MEMSET(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->lif_table[0],
        lif_table,
        ARAD_PP_SW_DB_LIF_TABLE,
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_lif_table_set");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_get(int unit, ARAD_PP_SW_DB_LIF_TABLE *lif_table){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_VERIFY( sw_state_access[unit].dpp.soc.arad.pp.lif_table.verify( unit));
    *lif_table = sw_state[unit]->dpp.soc.arad.pp->lif_table[0];
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_alloc(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->lif_table,
        sizeof(ARAD_PP_SW_DB_LIF_TABLE),
        SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
        "sw_state_dpp_soc_arad_pp_lif_table_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_is_allocated(int unit, uint8 *is_allocated){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_IS_ALLOC(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->lif_table,
        is_allocated,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_lif_table_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_free(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    SHR_SW_STATE_FREE(
        unit,
        sw_state[unit]->dpp.soc.arad.pp->lif_table,
        SW_STATE_NONE,
        "sw_state_dpp_soc_arad_pp_lif_table_alloc");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_verify(int unit){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_NULL_ACCESS_CHECK(sw_state[unit]->dpp.soc.arad.pp->lif_table);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_set(int unit, int _bit_num){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_SET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _bit_num);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_clear(int unit, int _bit_num){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_CLEAR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _bit_num);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_get(int unit, int _bit_num, uint8* result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_GET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _bit_num,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_read(int unit, int sw_state_bmp_first, int result_first, int _range, SHR_BITDCL *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (sw_state_bmp_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_READ(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         sw_state_bmp_first,
         result_first,
         _range,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_write(int unit, int sw_state_bmp_first, int input_bmp_first, int _range, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (sw_state_bmp_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_WRITE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         sw_state_bmp_first,
         input_bmp_first,
          _range,
         input_bmp);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_and(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_AND(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_or(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_OR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_xor(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_XOR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_remove(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_REMOVE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_negate(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_NEGATE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_clear(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_CLEAR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_set(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_SET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_null(int unit, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_NULL(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _first,
         _count,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_test(int unit, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_TEST(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _first,
         _count,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_eq(int unit, SHR_BITDCL *input_bmp, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_EQ(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _first,
         _count,
         input_bmp,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_count(int unit, int _first, int _range, int *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify(unit, (_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_COUNT(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_use,
         _first,
         _range,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_use_verify(int unit, int lif_use_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_OUT_OF_BOUND_CHECK( lif_use_idx_0, ARAD_BIT_TO_U32(SOC_DPP_DEFS_MAX(NOF_LOCAL_LIFS)*ARAD_PP_SW_DB_TYPE_BITS), "lif_use");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_set(int unit, int _bit_num){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_SET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _bit_num);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_clear(int unit, int _bit_num){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_CLEAR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _bit_num);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_get(int unit, int _bit_num, uint8* result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, _bit_num/SHR_BITWID);
   _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_GET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _bit_num,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_read(int unit, int sw_state_bmp_first, int result_first, int _range, SHR_BITDCL *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (sw_state_bmp_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_READ(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         sw_state_bmp_first,
         result_first,
         _range,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_write(int unit, int sw_state_bmp_first, int input_bmp_first, int _range, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (sw_state_bmp_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_WRITE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         sw_state_bmp_first,
         input_bmp_first,
          _range,
         input_bmp);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_and(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_AND(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_or(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_OR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_xor(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_XOR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_remove(int unit, int _first, int _count, SHR_BITDCL *input_bmp){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_REMOVE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         input_bmp,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_negate(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_NEGATE(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_clear(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_CLEAR(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_set(int unit, int _first, int _count){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_SET(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _first,
         _count);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_null(int unit, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_NULL(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _first,
         _count,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_test(int unit, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_TEST(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _first,
         _count,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_eq(int unit, SHR_BITDCL *input_bmp, int _first, int _count, uint8 *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _count - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_EQ(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _first,
         _count,
         input_bmp,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_count(int unit, int _first, int _range, int *result){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify(unit, (_first + _range - 1)/SHR_BITWID);
    _SOC_IF_ERR_EXIT(_rv);
        SHR_SW_STATE_BIT_RANGE_COUNT(
        unit,
         SW_STATE_IS_WB_CHECK | SW_STATE_ALLOW_AUTOSYNC,
         sw_state[unit]->dpp.soc.arad.pp->lif_table->lif_sub_use,
         _first,
         _range,
         result);
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 

#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
/* AUTO-GENERATED - DO NOT MODIFY */
int sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_verify(int unit, int lif_sub_use_idx_0){
    SW_STATE_INIT_FUNC_DEFS;
    _rv = sw_state_access[unit].dpp.soc.arad.pp.lif_table.verify( unit);
    _SOC_IF_ERR_EXIT(_rv);
    SW_STATE_OUT_OF_BOUND_CHECK( lif_sub_use_idx_0, ARAD_BIT_TO_U32(SOC_DPP_DEFS_MAX(NOF_LOCAL_LIFS)*ARAD_PP_SW_DB_TYPE_BITS), "lif_sub_use");
    SW_STATE_FUNC_RETURN;
}

#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 


int
sw_state_dpp_soc_arad_pp_lif_table_access_cb_init(int unit){
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.set = sw_state_dpp_soc_arad_pp_lif_table_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.get = sw_state_dpp_soc_arad_pp_lif_table_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.alloc = sw_state_dpp_soc_arad_pp_lif_table_alloc;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.is_allocated = sw_state_dpp_soc_arad_pp_lif_table_is_allocated;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.free = sw_state_dpp_soc_arad_pp_lif_table_free;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.verify = sw_state_dpp_soc_arad_pp_lif_table_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_set = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_clear = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_clear;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_get = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_read = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_read;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_write = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_write;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_and = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_and;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_or = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_or;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_xor = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_xor;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_remove = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_remove;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_negate = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_negate;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_clear = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_clear;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_set = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_null = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_null;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_test = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_test;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_eq = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_eq;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.bit_range_count = sw_state_dpp_soc_arad_pp_lif_table_lif_use_bit_range_count;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_use.verify = sw_state_dpp_soc_arad_pp_lif_table_lif_use_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_set = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_clear = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_clear;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_get = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_get;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_read = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_read;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_write = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_write;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_and = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_and;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_or = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_or;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_xor = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_xor;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_remove = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_remove;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_negate = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_negate;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_clear = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_clear;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_set = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_set;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_null = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_null;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_test = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_test;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_eq = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_eq;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.bit_range_count = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_bit_range_count;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#if defined(BCM_PETRA_SUPPORT)
#ifdef BCM_PETRA_SUPPORT
    sw_state_access[unit].dpp.soc.arad.pp.lif_table.lif_sub_use.verify = sw_state_dpp_soc_arad_pp_lif_table_lif_sub_use_verify;
#endif /* BCM_PETRA_SUPPORT*/ 
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
    return _SHR_E_NONE;
}

#undef _ERR_MSG_MODULE_NAME
