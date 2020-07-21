// SPDX-License-Identifier: ISC
/*
 * Copyright (c) 2013 Qualcomm Atheros, Inc.
 */

#include <linux/module.h>
#if LINUX_VERSION_IS_LESS(3,1,0)
#include <linux/interrupt.h>
#endif

#define CREATE_TRACE_POINTS
#include "trace.h"
