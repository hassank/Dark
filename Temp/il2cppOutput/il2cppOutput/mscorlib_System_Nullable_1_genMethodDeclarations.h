﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Nullable_1_gen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m1_5481_gshared (Nullable_1_t1_815 * __this, TimeSpan_t1_209  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m1_5481(__this, ___value, method) (( void (*) (Nullable_1_t1_815 *, TimeSpan_t1_209 , const MethodInfo*))Nullable_1__ctor_m1_5481_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m1_5482_gshared (Nullable_1_t1_815 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m1_5482(__this, method) (( bool (*) (Nullable_1_t1_815 *, const MethodInfo*))Nullable_1_get_HasValue_m1_5482_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t1_209  Nullable_1_get_Value_m1_5483_gshared (Nullable_1_t1_815 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m1_5483(__this, method) (( TimeSpan_t1_209  (*) (Nullable_1_t1_815 *, const MethodInfo*))Nullable_1_get_Value_m1_5483_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m1_6982_gshared (Nullable_1_t1_815 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_6982(__this, ___other, method) (( bool (*) (Nullable_1_t1_815 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m1_6982_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m1_6983_gshared (Nullable_1_t1_815 * __this, Nullable_1_t1_815  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m1_6983(__this, ___other, method) (( bool (*) (Nullable_1_t1_815 *, Nullable_1_t1_815 , const MethodInfo*))Nullable_1_Equals_m1_6983_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m1_6984_gshared (Nullable_1_t1_815 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m1_6984(__this, method) (( int32_t (*) (Nullable_1_t1_815 *, const MethodInfo*))Nullable_1_GetHashCode_m1_6984_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m1_6985_gshared (Nullable_1_t1_815 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m1_6985(__this, method) (( String_t* (*) (Nullable_1_t1_815 *, const MethodInfo*))Nullable_1_ToString_m1_6985_gshared)(__this, method)