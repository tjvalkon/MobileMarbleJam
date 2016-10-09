#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallControl
struct  BallControl_t4002918974  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean BallControl::useKeyboard
	bool ___useKeyboard_2;
	// System.Single BallControl::force
	float ___force_3;
	// UnityEngine.Rigidbody2D BallControl::rb
	Rigidbody2D_t1743771669 * ___rb_4;
	// UnityEngine.Vector2 BallControl::dir
	Vector2_t4282066565  ___dir_5;
	// System.Boolean BallControl::ballDropped
	bool ___ballDropped_6;

public:
	inline static int32_t get_offset_of_useKeyboard_2() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___useKeyboard_2)); }
	inline bool get_useKeyboard_2() const { return ___useKeyboard_2; }
	inline bool* get_address_of_useKeyboard_2() { return &___useKeyboard_2; }
	inline void set_useKeyboard_2(bool value)
	{
		___useKeyboard_2 = value;
	}

	inline static int32_t get_offset_of_force_3() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___force_3)); }
	inline float get_force_3() const { return ___force_3; }
	inline float* get_address_of_force_3() { return &___force_3; }
	inline void set_force_3(float value)
	{
		___force_3 = value;
	}

	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___rb_4)); }
	inline Rigidbody2D_t1743771669 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_t1743771669 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier(&___rb_4, value);
	}

	inline static int32_t get_offset_of_dir_5() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___dir_5)); }
	inline Vector2_t4282066565  get_dir_5() const { return ___dir_5; }
	inline Vector2_t4282066565 * get_address_of_dir_5() { return &___dir_5; }
	inline void set_dir_5(Vector2_t4282066565  value)
	{
		___dir_5 = value;
	}

	inline static int32_t get_offset_of_ballDropped_6() { return static_cast<int32_t>(offsetof(BallControl_t4002918974, ___ballDropped_6)); }
	inline bool get_ballDropped_6() const { return ___ballDropped_6; }
	inline bool* get_address_of_ballDropped_6() { return &___ballDropped_6; }
	inline void set_ballDropped_6(bool value)
	{
		___ballDropped_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
