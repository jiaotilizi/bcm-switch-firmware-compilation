/*
 * $Id: $
 * 
 * $Copyright: (c) 2016 Broadcom.
 * Broadcom Proprietary and Confidential. All rights reserved.$
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */

#ifndef __BCMX_AUTH_H__
#define __BCMX_AUTH_H__

#include <bcm/types.h>
#include <bcmx/bcmx.h>
#include <bcmx/lport.h>
#include <bcm/auth.h>

/* Sets or gets authorization operating mode. */
extern int bcmx_auth_mode_set(
    bcmx_lport_t port, 
    uint32 mode);

/* Sets or gets authorization operating mode. */
extern int bcmx_auth_mode_get(
    bcmx_lport_t port, 
    uint32 *modep);

/* Definition for 802.1X callout functions. */
typedef void (*bcmx_auth_cb_t)(
    void *cookie, 
    bcmx_lport_t port, 
    int reason);

/* 
 * Register a callback function to be called when a port becomes
 * asynchronously unauthorized.
 */
extern int bcmx_auth_unauth_callback(
    bcmx_auth_cb_t func, 
    void *cookie);

/* Enable/disable the ability of packets to be sent out a port. */
extern int bcmx_auth_egress_set(
    bcmx_lport_t port, 
    int enable);

/* Enable/disable the ability of packets to be sent out a port. */
extern int bcmx_auth_egress_get(
    bcmx_lport_t port, 
    int *enable);

/* Add Switch's MAC address. */
extern int bcmx_auth_mac_add(
    bcmx_lport_t port, 
    bcm_mac_t mac);

/* Remove Switch's MAC address. */
extern int bcmx_auth_mac_delete(
    bcmx_lport_t port, 
    bcm_mac_t mac);

/* Remove Switch's MAC address. */
extern int bcmx_auth_mac_delete_all(
    bcmx_lport_t port);

#endif /* __BCMX_AUTH_H__ */
