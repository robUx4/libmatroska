// Copyright © 2002-2010 Steve Lhomme.
// SPDX-License-Identifier: LGPL-2.1-or-later

/*!
  \file
  \author Steve Lhomme     <robux4 @ users.sf.net>
*/
#ifndef LIBMATROSKA_DEFINES_H
#define LIBMATROSKA_DEFINES_H

#include <ebml/EbmlVersion.h>
#include <ebml/EbmlElement.h>

#define DEFINE_MKX_CONTEXT(a)                DEFINE_xxx_CONTEXT(a,GetKaxGlobal_Context)
#define DEFINE_MKX_MASTER_CONS(a,b,c,d,i,e)  DEFINE_xxx_MASTER_CONS(a,b,c,d,i,e,GetKaxGlobal_Context)
#define DEFINE_MKX_MASTER(a,b,c,d,i,e)       DEFINE_xxx_MASTER(a,b,c,d,i,e,GetKaxGlobal_Context)
#define DEFINE_MKX_MASTER_ORPHAN(a,b,c,i,d)  DEFINE_xxx_MASTER_ORPHAN(a,b,c,i,d,GetKaxGlobal_Context)
#define DEFINE_MKX_UINTEGER_DEF(a,b,c,d,e,v) DEFINE_xxx_UINTEGER_DEF(a,b,c,d,e,GetKaxGlobal_Context,v)
#define DEFINE_MKX_SINTEGER_DEF(a,b,c,d,e,v) DEFINE_xxx_SINTEGER_DEF(a,b,c,d,e,GetKaxGlobal_Context,v)
#define DEFINE_MKX_UINTEGER(a,b,c,d,e)       DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context) \
    a::a() :EbmlUInteger(a::ClassInfos) {}
#define DEFINE_MKX_SINTEGER(a,b,c,d,e)       DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context) \
    a::a() :EbmlSInteger(a::ClassInfos) {}
#define DEFINE_MKX_STRING_DEF(a,b,c,d,e,v)   DEFINE_xxx_STRING_DEF(a,b,c,d,e,GetKaxGlobal_Context,v)
#define DEFINE_MKX_STRING(a,b,c,d,e)         DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context) \
    a::a() :EbmlString(a::ClassInfos) {}
#define DEFINE_MKX_UNISTRING(a,b,c,d,e)      DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context) \
    a::a() :EbmlUnicodeString(a::ClassInfos) {}
#define DEFINE_MKX_BINARY(a,b,c,d,e)         DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context) \
    a::a() :EbmlBinary(a::ClassInfos) {}
#define DEFINE_MKX_FLOAT_DEF(a,b,c,d,e,v)    DEFINE_xxx_FLOAT_DEF(a,b,c,d,e,GetKaxGlobal_Context,v)
#define DEFINE_MKX_FLOAT(a,b,c,d,e)          DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context) \
    a::a() :EbmlFloat(a::ClassInfos) {}
#define DEFINE_MKX_DATE(a,b,c,d,e)           DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context) \
    a::a() :EbmlDate(a::ClassInfos) {}
#define DEFINE_MKX_BINARY_CONS(a,b,c,d,e)    DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context)
#define DEFINE_MKX_SINTEGER_CONS(a,b,c,d,e)  DEFINE_xxx_CLASS_CONS(a,b,c,d,e,GetKaxGlobal_Context)

#define DECLARE_MKX_MASTER(x)   \
class MATROSKA_DLL_API x : public EbmlMaster { \
    public: x(); \
    x(const x & ElementToClone) :EbmlMaster(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_MASTER_CONS(x)   \
class MATROSKA_DLL_API x : public EbmlMaster { \
    public: x(); \
    x(const x & ElementToClone); \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_BINARY(x)   \
  class MATROSKA_DLL_API x : public EbmlBinary { \
    public: x(); \
    x(const x & ElementToClone) :EbmlBinary(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_BINARY_CONS(x)   \
  class MATROSKA_DLL_API x : public EbmlBinary { \
    public: x(); \
    x(const x & ElementToClone); \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_UNISTRING(x)  \
  class MATROSKA_DLL_API x : public EbmlUnicodeString { \
    public: x(); \
    x(const x & ElementToClone) :EbmlUnicodeString(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_STRING(x)   \
  class MATROSKA_DLL_API x : public EbmlString { \
    public: x(); \
    x(const x & ElementToClone) :EbmlString(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_UINTEGER(x) \
  class MATROSKA_DLL_API x : public EbmlUInteger { \
    public: x(); \
    x(const x & ElementToClone) :EbmlUInteger(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_SINTEGER_CONS(x) \
  class MATROSKA_DLL_API x : public EbmlSInteger { \
    public: x(); \
    x(const x & ElementToClone); \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_SINTEGER(x) \
  class MATROSKA_DLL_API x : public EbmlSInteger { \
    public: x(); \
    x(const x & ElementToClone) :EbmlSInteger(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_DATE(x)     \
  class MATROSKA_DLL_API x : public EbmlDate { \
    public: x(); \
    x(const x & ElementToClone) :EbmlDate(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)

#define DECLARE_MKX_FLOAT(x)    \
  class MATROSKA_DLL_API x : public EbmlFloat { \
    public: x(); \
    x(const x & ElementToClone) :EbmlFloat(ElementToClone) {} \
    EBML_CONCRETE_CLASS(x)


#endif // LIBMATROSKA_DEFINES_H
