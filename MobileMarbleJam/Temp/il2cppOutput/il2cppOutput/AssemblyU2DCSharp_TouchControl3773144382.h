#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// SelectionManager
struct SelectionManager_t503375009;
// CreateTile
struct CreateTile_t3362678250;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchControl
struct  TouchControl_t3773144382  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector2 TouchControl::target
	Vector2_t4282066565  ___target_2;
	// UnityEngine.Vector2 TouchControl::position
	Vector2_t4282066565  ___position_3;
	// System.Single TouchControl::speed
	float ___speed_4;
	// UnityEngine.Collider2D TouchControl::hit
	Collider2D_t1552025098 * ___hit_5;
	// SelectionManager TouchControl::selectionManager
	SelectionManager_t503375009 * ___selectionManager_6;
	// CreateTile TouchControl::createTile
	CreateTile_t3362678250 * ___createTile_7;
	// UnityEngine.Vector2 TouchControl::startPos
	Vector2_t4282066565  ___startPos_8;
	// UnityEngine.Vector2 TouchControl::direction
	Vector2_t4282066565  ___direction_9;
	// System.Boolean TouchControl::directionChosen
	bool ___directionChosen_10;
	// System.Int32 TouchControl::layerMask
	int32_t ___layerMask_11;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___target_2)); }
	inline Vector2_t4282066565  get_target_2() const { return ___target_2; }
	inline Vector2_t4282066565 * get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Vector2_t4282066565  value)
	{
		___target_2 = value;
	}

	inline static int32_t get_offset_of_position_3() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___position_3)); }
	inline Vector2_t4282066565  get_position_3() const { return ___position_3; }
	inline Vector2_t4282066565 * get_address_of_position_3() { return &___position_3; }
	inline void set_position_3(Vector2_t4282066565  value)
	{
		___position_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_hit_5() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___hit_5)); }
	inline Collider2D_t1552025098 * get_hit_5() const { return ___hit_5; }
	inline Collider2D_t1552025098 ** get_address_of_hit_5() { return &___hit_5; }
	inline void set_hit_5(Collider2D_t1552025098 * value)
	{
		___hit_5 = value;
		Il2CppCodeGenWriteBarrier(&___hit_5, value);
	}

	inline static int32_t get_offset_of_selectionManager_6() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___selectionManager_6)); }
	inline SelectionManager_t503375009 * get_selectionManager_6() const { return ___selectionManager_6; }
	inline SelectionManager_t503375009 ** get_address_of_selectionManager_6() { return &___selectionManager_6; }
	inline void set_selectionManager_6(SelectionManager_t503375009 * value)
	{
		___selectionManager_6 = value;
		Il2CppCodeGenWriteBarrier(&___selectionManager_6, value);
	}

	inline static int32_t get_offset_of_createTile_7() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___createTile_7)); }
	inline CreateTile_t3362678250 * get_createTile_7() const { return ___createTile_7; }
	inline CreateTile_t3362678250 ** get_address_of_createTile_7() { return &___createTile_7; }
	inline void set_createTile_7(CreateTile_t3362678250 * value)
	{
		___createTile_7 = value;
		Il2CppCodeGenWriteBarrier(&___createTile_7, value);
	}

	inline static int32_t get_offset_of_startPos_8() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___startPos_8)); }
	inline Vector2_t4282066565  get_startPos_8() const { return ___startPos_8; }
	inline Vector2_t4282066565 * get_address_of_startPos_8() { return &___startPos_8; }
	inline void set_startPos_8(Vector2_t4282066565  value)
	{
		___startPos_8 = value;
	}

	inline static int32_t get_offset_of_direction_9() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___direction_9)); }
	inline Vector2_t4282066565  get_direction_9() const { return ___direction_9; }
	inline Vector2_t4282066565 * get_address_of_direction_9() { return &___direction_9; }
	inline void set_direction_9(Vector2_t4282066565  value)
	{
		___direction_9 = value;
	}

	inline static int32_t get_offset_of_directionChosen_10() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___directionChosen_10)); }
	inline bool get_directionChosen_10() const { return ___directionChosen_10; }
	inline bool* get_address_of_directionChosen_10() { return &___directionChosen_10; }
	inline void set_directionChosen_10(bool value)
	{
		___directionChosen_10 = value;
	}

	inline static int32_t get_offset_of_layerMask_11() { return static_cast<int32_t>(offsetof(TouchControl_t3773144382, ___layerMask_11)); }
	inline int32_t get_layerMask_11() const { return ___layerMask_11; }
	inline int32_t* get_address_of_layerMask_11() { return &___layerMask_11; }
	inline void set_layerMask_11(int32_t value)
	{
		___layerMask_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
