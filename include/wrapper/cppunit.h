/* -------------------------------------------------------------------------
// WINX: a C++ template GUI library - MOST SIMPLE BUT EFFECTIVE
// 
// This file is a part of the WINX Library.
// The use and distribution terms for this software are covered by the
// Common Public License 1.0 (http://opensource.org/licenses/cpl.php)
// which can be found in the file CPL.txt at this distribution. By using
// this software in any fashion, you are agreeing to be bound by the terms
// of this license. You must not remove this notice, or any other, from
// this software.
// 
// Module: wrapper/cppunit.h
// Creator: xushiwei
// Email: xushiweizh@gmail.com
// Date: 2003-10-14 17:57:09
// 
// $Id: cppunit.h,v 1.1 2006/11/30 08:45:42 xushiwei Exp $
// -----------------------------------------------------------------------*/
#ifndef WRAPPER_CPPUNIT_H
#define WRAPPER_CPPUNIT_H

#if (0)
#define X_RELEASE_CASE
#define X_RELEASE_TESTCASE
#endif

#if defined(X_RELEASE_TESTCASE)
#define X_RELEASE_CASE
#endif

#ifndef CPPUNIT_PLATAPI_H
#include "cppunit/platapi.h"
#endif

#ifndef CPPUNIT_BASIC_H
#include "cppunit/basic.h"
#endif

#ifndef CPPUNIT_LINKLIB_H
#include "cppunit/linklib.h"
#endif

// -------------------------------------------------------------------------
// $Log: cppunit.h,v $

#endif /* WRAPPER_CPPUNIT_H */
