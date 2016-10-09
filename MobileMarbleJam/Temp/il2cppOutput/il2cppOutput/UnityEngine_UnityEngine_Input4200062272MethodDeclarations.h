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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Touch4210255029.h"

// System.Void UnityEngine.Input::.cctor()
extern "C"  void Input__cctor_m1327041086 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyInt(System.Int32)
extern "C"  bool Input_GetKeyInt_m1221229866 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Input::GetAxis(System.String)
extern "C"  float Input_GetAxis_m2027668530 (Il2CppObject * __this /* static, unused */, String_t* ___axisName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
extern "C"  bool Input_GetKey_m1349175653 (Il2CppObject * __this /* static, unused */, int32_t ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m4080958081 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2031691843 (Il2CppObject * __this /* static, unused */, int32_t ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t4282066566  Input_get_mousePosition_m4020233228 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_mousePosition(UnityEngine.Vector3&)
extern "C"  void Input_INTERNAL_get_mousePosition_m4008828427 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Input::get_acceleration()
extern "C"  Vector3_t4282066566  Input_get_acceleration_m3697865796 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_get_acceleration(UnityEngine.Vector3&)
extern "C"  void Input_INTERNAL_get_acceleration_m3372612331 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
extern "C"  Touch_t4210255029  Input_GetTouch_m2282421092 (Il2CppObject * __this /* static, unused */, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Input::INTERNAL_CALL_GetTouch(System.Int32,UnityEngine.Touch&)
extern "C"  void Input_INTERNAL_CALL_GetTouch_m1845826650 (Il2CppObject * __this /* static, unused */, int32_t ___index0, Touch_t4210255029 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Input::get_touchCount()
extern "C"  int32_t Input_get_touchCount_m1430909390 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
