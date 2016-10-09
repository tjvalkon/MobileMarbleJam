#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Collider2D
struct Collider2D_t1552025098;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

// System.Void UnityEngine.Physics2D::.cctor()
extern "C"  void Physics2D__cctor_m2087591309 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapPoint(UnityEngine.Vector2,System.Int32)
extern "C"  Collider2D_t1552025098 * Physics2D_OverlapPoint_m1741297912 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___point0, int32_t ___layerMask1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.Physics2D::INTERNAL_CALL_OverlapPoint(UnityEngine.Vector2&,System.Int32,System.Single,System.Single)
extern "C"  Collider2D_t1552025098 * Physics2D_INTERNAL_CALL_OverlapPoint_m467114293 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565 * ___point0, int32_t ___layerMask1, float ___minDepth2, float ___maxDepth3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
