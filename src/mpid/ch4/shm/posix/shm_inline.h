/*
 *  (C) 2006 by Argonne National Laboratory.
 *      See COPYRIGHT in top-level directory.
 *
 *  Portions of this code were written by Intel Corporation.
 *  Copyright (C) 2011-2017 Intel Corporation.  Intel provides this material
 *  to Argonne National Laboratory subject to Software Grant and Corporate
 *  Contributor License Agreement dated February 8, 2012.
 */
#ifndef POSIX_INLINE_H_INCLUDED
#define POSIX_INLINE_H_INCLUDED

#include "posix_probe.h"
#include "posix_recv.h"
#include "posix_request.h"
#include "posix_send.h"
#include "posix_win.h"
#include "posix_rma.h"
#include "posix_am.h"
#include "posix_coll.h"
#include "posix_unimpl.h"
#include "posix_proc.h"

/* Not-inlined shm functions */
#include "posix_noinline.h"

#endif /* POSIX_INLINE_H_INCLUDED */
