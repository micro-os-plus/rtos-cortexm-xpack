/*
 * This file is part of the µOS++ project (https://micro-os-plus.github.io/).
 * Copyright (c) 2021-2025 Liviu Ionescu. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/mit.
 */

#ifndef MICRO_OS_PLUS_RTOS_PORT_DEFINES_H_
#define MICRO_OS_PLUS_RTOS_PORT_DEFINES_H_

// ----------------------------------------------------------------------------

#if !defined(MICRO_OS_PLUS_INTEGER_SYSTICK_FREQUENCY_HZ)
#define MICRO_OS_PLUS_INTEGER_SYSTICK_FREQUENCY_HZ (1000)
#endif

#if !defined(MICRO_OS_PLUS_INTEGER_RTOS_MIN_STACK_SIZE_BYTES)
#define MICRO_OS_PLUS_INTEGER_RTOS_MIN_STACK_SIZE_BYTES (256)
#endif

#if !defined(MICRO_OS_PLUS_INTEGER_RTOS_DEFAULT_STACK_SIZE_BYTES)
#define MICRO_OS_PLUS_INTEGER_RTOS_DEFAULT_STACK_SIZE_BYTES (2048)
#endif

#if !defined(MICRO_OS_PLUS_INTEGER_RTOS_MAIN_STACK_SIZE_BYTES)
#define MICRO_OS_PLUS_INTEGER_RTOS_MAIN_STACK_SIZE_BYTES \
  (MICRO_OS_PLUS_INTEGER_RTOS_DEFAULT_STACK_SIZE_BYTES)
#endif

#if !defined(MICRO_OS_PLUS_INTEGER_RTOS_IDLE_STACK_SIZE_BYTES)
#define MICRO_OS_PLUS_INTEGER_RTOS_IDLE_STACK_SIZE_BYTES \
  (MICRO_OS_PLUS_INTEGER_RTOS_DEFAULT_STACK_SIZE_BYTES)
#endif

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_RTOS_PORT_DEFINES_H_

// ----------------------------------------------------------------------------
