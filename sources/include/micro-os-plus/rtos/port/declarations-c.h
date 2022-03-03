/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus/)
 * Copyright (c) 2016 Liviu Ionescu.
 *
 * Permission to use, copy, modify, and/or distribute this software
 * for any purpose is hereby granted, under the terms of the MIT license.
 *
 * If a copy of the license was not distributed with this file, it can
 * be obtained from https://opensource.org/licenses/MIT/.
 */

/*
 * This file is included in `micro-os-plus/rtos/declarations-c.h` to
 * customise it with port specific declarations.
 *
 * These structures (which basically contain handlers)
 * are conditionally included in the system objects
 * when they are implemented using the port native objects.
 */

#ifndef MICRO_OS_PLUS_ARCHITECTURE_CORTEXM_RTOS_PORT_DECLARATIONS_C_H_
#define MICRO_OS_PLUS_ARCHITECTURE_CORTEXM_RTOS_PORT_DECLARATIONS_C_H_

// ----------------------------------------------------------------------------

#include <stdint.h>
#include <stdbool.h>

// ----------------------------------------------------------------------------

typedef uint64_t micro_os_plus_port_clock_timestamp_t;
typedef uint32_t micro_os_plus_port_clock_duration_t;
typedef uint64_t micro_os_plus_port_clock_offset_t;

typedef bool micro_os_plus_port_scheduler_state_t;

typedef uint32_t micro_os_plus_port_interrupts_state_t;

typedef uint32_t micro_os_plus_port_thread_stack_element_t;
typedef uint64_t micro_os_plus_port_thread_stack_allocation_element_t;

typedef struct
{
  micro_os_plus_port_thread_stack_element_t* stack_ptr;
} micro_os_plus_port_thread_context_t;

// ----------------------------------------------------------------------------

#endif // MICRO_OS_PLUS_ARCHITECTURE_CORTEXM_RTOS_PORT_DECLARATIONS_C_H_

// ----------------------------------------------------------------------------
