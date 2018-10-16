
/*
 * $Id: l3.c,v 1.19 Broadcom SDK $
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 *
 * File:    l3.c
 * Purpose: Common L3 API
 */

#include <soc/defs.h>

#include <sal/core/libc.h>

#include <soc/drv.h>
#include <soc/mem.h>
#include <soc/util.h>
#include <soc/debug.h>

#include <bcm/l2.h>
#include <bcm/l3.h>
#include <bcm/tunnel.h>
#include <bcm/port.h>
#include <bcm/error.h>
#include <bcm/vlan.h>
#include <bcm/rate.h>
#include <bcm/ipmc.h>
#include <bcm/stack.h>
#include <bcm/topo.h>
#include <bcm/debug.h>
#include <bcm/types.h>
#include <bcm/stat.h>

#ifdef BCM_ESW_SUPPORT
#include <bcm_int/esw/l3.h>
#endif
/*
 * Function:
 *      bcm_ip6_mask_create
 * Purpose:
 *      Create IPv6 network address from prefix length
 * Parameters:
 *      ip6 - (OUT) IPv6 address holder
 *      len - the prefix/mask length
 * Returns:
 *      none
 */

int
bcm_ip6_mask_create(bcm_ip6_t ip6, int len)
{
    return _shr_ip6_mask_create(ip6, len);
}

/*
 * Function:
 *      bcm_ip6_mask_length
 * Purpose:
 *      Return the mask length from IPv6 network address
 * Parameters: 
 *      mask - IPv6 address
 * Returns:
 *      The prefix/mask length
 */

int
bcm_ip6_mask_length(bcm_ip6_t mask)
{
    return _shr_ip6_mask_length(mask);
}


/*
 * Function:
 *      bcm_ip_mask_create
 * Purpose:
 *      Create IPv4 network address from prefix length
 * Parameters:
 *      len - the prefix/mask length
 * Returns:
 *      The IPv4 mask
 */

bcm_ip_t
bcm_ip_mask_create(int len)
{
    return _shr_ip_mask_create(len);
}

/*
 * Function:
 *      bcm_ip_mask_length
 * Purpose:
 *      Return the mask length from IPv4 network address
 * Parameters:
 *      mask - The IPv4 mask as IP address
 * Returns:
 *      The IPv4 mask length
 */

int
bcm_ip_mask_length(bcm_ip_t mask)
{
    return _shr_ip_mask_length(mask);
}

#ifdef INCLUDE_L3
/*
 * Function:
 *      bcm_l3_intf_t_init
 * Purpose:
 *      Initialize a L3 interface struct
 * Parameters:
 *      intf - pointer to the L3 interface struct
 * Returns:
 *      NONE
 */

void
bcm_l3_intf_t_init(bcm_l3_intf_t *intf)
{
    if (NULL != intf) {
        sal_memset(intf, 0, sizeof (*intf));
        intf->l3a_vrf = BCM_L3_VRF_DEFAULT;
    }
    return;
}

/*
 * Function:
 *      bcm_l3_host_t_init
 * Purpose:
 *      Initialize a L3 IP struct
 * Parameters:
 *      ip - pointer to the L3 IP struct
 * Returns:
 *      NONE
 */

void
bcm_l3_host_t_init(bcm_l3_host_t *ip)
{
    if (NULL != ip) {
        sal_memset(ip, 0, sizeof (*ip));
        ip->l3a_vrf = BCM_L3_VRF_DEFAULT;
    }
    return;
}

/* 
 * Function:
 *      bcm_l3_route_t_init
 * Purpose:
 *      Initialize a L3 route struct
 * Parameters: 
 *      route - pointer to the L3 route struct
 * Returns:
 *      NONE
 */

void
bcm_l3_route_t_init(bcm_l3_route_t *route)
{
    if (NULL != route) {
        sal_memset(route, 0, sizeof (*route));
        route->l3a_vrf = BCM_L3_VRF_DEFAULT;
        route->l3a_rp = BCM_IPMC_RP_ID_INVALID;
    }
    return;
}

/* 
 * Function:
 *      bcm_l3_egress_t_init
 * Purpose:
 *      Initialize a L3 egress object  struct.
 * Parameters: 
 *      egr - pointer to the L3 egress object struct.
 * Returns:
 *      NONE
 */
void
bcm_l3_egress_t_init(bcm_l3_egress_t *egr)
{
    if (NULL != egr) {
        sal_memset(egr, 0, sizeof (*egr));
        egr->mpls_label = BCM_MPLS_LABEL_INVALID;
        egr->dynamic_scaling_factor =
            BCM_L3_ECMP_DYNAMIC_SCALING_FACTOR_INVALID;
        egr->dynamic_load_weight =
            BCM_L3_ECMP_DYNAMIC_LOAD_WEIGHT_INVALID;
        egr->dynamic_queue_size_weight =
            BCM_L3_ECMP_DYNAMIC_QUEUE_SIZE_WEIGHT_INVALID;
        egr->counting_profile = BCM_STAT_LIF_COUNTING_PROFILE_NONE;
    }
    return;
}

/* 
 * Function:
 *      bcm_l3_ingress_t_init
 * Purpose:
 *      Initialize a L3 egress object  struct.
 * Parameters: 
 *      egr - pointer to the L3 egress object struct.
 * Returns:
 *      NONE
 */
void
bcm_l3_ingress_t_init(bcm_l3_ingress_t *ing_intf)
{
    if (NULL != ing_intf) {
        sal_memset(ing_intf, 0, sizeof (*ing_intf));
    }
    return;
}


/*
 * Function:
 *      bcm_tunnel_initiator_t_init
 * Purpose:
 *      Initialize a tunnel initiator object struct.
 * Parameters:
 *      tunnel - pointer to the tunnel initiator object struct.
 * Returns:
 *      NONE
 */
void
bcm_tunnel_initiator_t_init(bcm_tunnel_initiator_t *tunnel_init)
{
    if (tunnel_init != NULL) {
        sal_memset(tunnel_init, 0, sizeof (*tunnel_init));
        tunnel_init->outlif_counting_profile = BCM_STAT_LIF_COUNTING_PROFILE_NONE;
    }
    return;
}

/*
 * Function:
 *      bcm_tunnel_terminator_t_init
 * Purpose:
 *      Initialize a tunnel terminator object struct.
 * Parameters:
 *      tunnel - pointer to the tunnel terminator object struct.
 * Returns:
 *      NONE
 */
void
bcm_tunnel_terminator_t_init(bcm_tunnel_terminator_t *tunnel_term)
{
    if (tunnel_term != NULL) {
        sal_memset(tunnel_term, 0, sizeof (*tunnel_term));
        tunnel_term->vrf = BCM_L3_VRF_DEFAULT;
        tunnel_term->tunnel_if = BCM_IF_INVALID;
        tunnel_term->inlif_counting_profile = BCM_STAT_LIF_COUNTING_PROFILE_NONE;
    }
    return;
}

/*
 * Function:
 *      bcm_tunnel_config_t_init
 * Purpose:
 *      Initialize a tunnel config object struct.
 * Parameters:
 *      tunnel - pointer to the tunnel config object struct.
 * Returns:
 *      NONE
 */
void
bcm_tunnel_config_t_init(bcm_tunnel_config_t *tconfig)
{
    if (tconfig != NULL) {
        sal_memset(tconfig, 0, sizeof (*tconfig));
    }
    return;
}

/*
 * Function:
 *      bcm_l3_key_t_init
 * Purpose:
 *      Initialize a L3 key object struct.
 * Parameters:
 *      key - pointer to the L3 key object struct.
 * Returns:
 *      NONE
 */
void
bcm_l3_key_t_init(bcm_l3_key_t *key)
{
    if (key != NULL) {
        sal_memset(key, 0, sizeof (*key));
        key->l3k_vrf = BCM_L3_VRF_DEFAULT;
    }
    return;
}

/*
 * Function:
 *      bcm_tunnel_dscp_map_t_init
 * Purpose:
 *      Initialize a dscp map object struct.
 * Parameters:
 *      dscp_info - pointer to the dscp map object struct.
 * Returns:
 *      NONE
 */
void
bcm_tunnel_dscp_map_t_init(bcm_tunnel_dscp_map_t *dscp_info)
{
    if (dscp_info != NULL) {
        sal_memset(dscp_info, 0, sizeof (*dscp_info));
    }
    return;
}

/*
 * Function:
 *      bcm_l3_info_t_init
 * Purpose:
 *      Initialize a L3 info object struct.
 * Parameters:
 *      info - pointer to the L3 info object struct.
 * Returns:
 *      NONE
 */
void
bcm_l3_info_t_init(bcm_l3_info_t *info)
{
    if (info != NULL) {
        sal_memset(info, 0, sizeof (*info));
    }
    return;
}

/*
 * Function:
 *      bcm_l3_source_bind_t_init
 * Purpose:
 *      Initialize a bcm_l3_source_bind_t structure.
 * Parameters:
 *      info - (IN/OUT) L3 source binding information
 * Returns:
 *      BCM_E_XXX
 * Notes:
 */
void 
bcm_l3_source_bind_t_init(bcm_l3_source_bind_t *info)
{
    if (info != NULL) {
        sal_memset(info, 0, sizeof (*info));
        info->port = BCM_GPORT_INVALID; /* Wildcard port by default */
    }
    return;
}

/* 
 * Function:
 *      bcm_l3_egress_ecmp_t_init
 * Purpose:
 *      Initialize a L3 egress ecmp object struct.
 * Parameters: 
 *      ecmp - pointer to the L3 egress ecmp object struct.
 * Returns:
 *      NONE
 */
void
bcm_l3_egress_ecmp_t_init(bcm_l3_egress_ecmp_t *ecmp)
{
    if (NULL != ecmp) {
        sal_memset(ecmp, 0, sizeof (*ecmp));
    }
    return;
}

/* 
 * Function:
 *      bcm_l3_ecmp_member_t_init
 * Purpose:
 *      Initialize a L3 ecmp member struct.
 * Parameters: 
 *      ecmp_member - pointer to the L3 egress ecmp member's struct.
 * Returns:
 *      NONE
 */
void
bcm_l3_ecmp_member_t_init(bcm_l3_ecmp_member_t *ecmp_member)
{
    if (NULL != ecmp_member) {
        sal_memset(ecmp_member, 0, sizeof (*ecmp_member));
    }
    return;
}

/*
 * Function:
 *      bcm_l3_egress_multi_info_t_init
 * Purpose:
 *      Initialize L3 Egress multi group struct.
 * Parameters:
 *      ecmp_member - pointer to l3 egress multi struct.
 * Returns:
 *      NONE
 */
void
bcm_l3_egress_multi_info_t_init(bcm_l3_egress_multi_info_t *egress_multi_info)
{
    if (NULL != egress_multi_info) {
        sal_memset(egress_multi_info, 0, sizeof (*egress_multi_info));
    }
    return;
}

/*
 * Function:
 *      bcm_tunnel_terminator_config_key_t_init
 * Purpose:
 *      Initialize a tunnel L3 tunnel bcm_tunnel_terminator_config_key_t structure.
 * Parameters:
 *      config_key - pointer to l3 tunnel terminator config key struct.
 * Returns:
 *      NONE
 */
void 
bcm_tunnel_terminator_config_key_t_init(bcm_tunnel_terminator_config_key_t *config_key) {
    if (NULL != config_key) {
        sal_memset(config_key, 0, sizeof (*config_key));
    }
    return;
}

/*
 * Function:
 *      tunnel_terminator_config_action_t_init
 * Purpose:
 *      Initialize a tunnel L3 tunnel tunnel_terminator_config_action_t structure.
 * Parameters:
 *      ecmp_member - pointer to l3 tunnel terminator config action struct.
 * Returns:
 *      NONE
 */
void 
bcm_tunnel_terminator_config_action_t_init(bcm_tunnel_terminator_config_action_t *config_action) {
    if (NULL != config_action) {
        sal_memset(config_action, 0, sizeof (*config_action));
    }
    return;
}

#endif   /* INCLUDE_L3 */
