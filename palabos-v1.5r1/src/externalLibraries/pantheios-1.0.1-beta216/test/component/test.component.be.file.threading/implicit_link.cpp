/* /////////////////////////////////////////////////////////////////////////
 * File:        test/component/test.component.be.file.threading/implicit_link.cpp
 *
 * Purpose:     Implicit link file for the test.component.be.file.threading project.
 *
 * Created:     3rd July 2009
 * Updated:     21st September 2015
 *
 * Status:      Wizard-generated
 *
 * License:     (Licensed under the Synesis Software Open License)
 *
 *              Copyright (c) 2009-2015, Synesis Software Pty Ltd.
 *              All rights reserved.
 *
 *              www:        http://www.synesis.com.au/software
 *
 * ////////////////////////////////////////////////////////////////////// */


/* Pantheios header files */
#include <platformstl/platformstl.h>
#include <pantheios/implicit_link/core.h>
#include <pantheios/implicit_link/fe.N.h>
#include <pantheios/implicit_link/be.N.h>
#include <pantheios/implicit_link/bec.file.h>
#include <pantheios/implicit_link/bec.console.h>

/* UNIXem header files */
#include <platformstl/platformstl.h>
#if defined(PLATFORMSTL_OS_IS_UNIX) && \
    defined(_WIN32)
# include <unixem/implicit_link.h>
#endif /* operating system */

/* ///////////////////////////// end of file //////////////////////////// */
