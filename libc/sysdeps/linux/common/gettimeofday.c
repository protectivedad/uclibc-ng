/* vi: set sw=4 ts=4: */
/*
 * gettimeofday() for uClibc
 *
 * Copyright (C) 2000-2006 Erik Andersen <andersen@uclibc.org>
 *
 * Licensed under the LGPL v2.1, see the file COPYING.LIB in this tarball.
 */

#include "syscalls.h"
#include <sys/time.h>

libc_hidden_proto(gettimeofday)

_syscall2(int, gettimeofday, struct timeval *, tv, struct timezone *, tz);
libc_hidden_def(gettimeofday)
