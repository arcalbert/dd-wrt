/*
 * Driver interaction with generic Linux Wireless Extensions
 * Copyright (c) 2003-2011, Jouni Malinen <j@w1.fi>
 *
 * This software may be distributed under the terms of the BSD license.
 * See README for more details.
 */

#ifndef LINUX_WEXT_H
#define LINUX_WEXT_H

#ifndef ANDROID

/*
 * Avoid including other kernel header to avoid conflicts with C library
 * headers.
 */
#define _LINUX_TYPES_H
#define _LINUX_SOCKET_H
#define _LINUX_IF_H

#include <stdint.h>
#include <net/if.h>

#ifndef __UCLIBC__
/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;

/* Fixed-size types, underlying types depend on word size and compiler.  */
typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;
#endif

typedef uint32_t __u32;
typedef int32_t __s32;
typedef uint16_t __u16;
typedef int16_t __s16;
typedef uint8_t __u8;
typedef int8_t __s8;
#ifndef __user
#define __user
#endif /* __user */

#endif /* ANDROID */

#include <linux/wireless.h>

#ifndef IW_ENCODE_ALG_PMK
#define IW_ENCODE_ALG_PMK 4
#endif

#ifndef IW_ENC_CAPA_4WAY_HANDSHAKE
#define IW_ENC_CAPA_4WAY_HANDSHAKE 0x00000010
#endif

#endif /* LINUX_WEXT_H */
