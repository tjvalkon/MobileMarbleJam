#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;
// BallControl
struct BallControl_t4002918974;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallBehaviour
struct  BallBehaviour_t2798137694  : public MonoBehaviour_t667441552
{
public:
	// GameManager BallBehaviour::gameManager
	GameManager_t2369589051 * ___gameManager_2;
	// BallControl BallBehaviour::ballControl
	BallControl_t4002918974 * ___ballControl_3;
	// UnityEngine.SpriteRenderer BallBehaviour::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_4;
	// System.Single BallBehaviour::fallSpeed
	float ___fallSpeed_5;
	// System.Boolean BallBehaviour::ballDropped
	bool ___ballDropped_6;
	// System.Boolean BallBehaviour::stageClear
	bool ___stageClear_7;
	// System.Int32 BallBehaviour::layerMask
	int32_t ___layerMask_8;

public:
	inline static int32_t get_offset_of_gameManager_2() { return static_cast<int32_t>(offsetof(BallBehaviour_t2798137694, ___gameManager_2)); }
	inline GameManager_t2369589051 * get_gameManager_2() const { return ___gameManager_2; }
	inline GameManager_t2369589051 ** get_address_of_gameManager_2() { return &___gameManager_2; }
	inline void set_gameManager_2(GameManager_t2369589051 * value)
	{
		___gameManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_2, value);
	}

	inline static int32_t get_offset_of_ballControl_3() { return static_cast<int32_t>(offsetof(BallBehaviour_t2798137694, ___ballControl_3)); }
	inline BallControl_t4002918974 * get_ballControl_3() const { return ___ballControl_3; }
	inline BallControl_t4002918974 ** get_address_of_ballControl_3() { return &___ballControl_3; }
	inline void set_ballControl_3(BallControl_t4002918974 * value)
	{
		___ballControl_3 = value;
		Il2CppCodeGenWriteBarrier(&___ballControl_3, value);
	}

	inline static int32_t get_offset_of_spriteRenderer_4() { return static_cast<int32_t>(offsetof(BallBehaviour_t2798137694, ___spriteRenderer_4)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_4() const { return ___spriteRenderer_4; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_4() { return &___spriteRenderer_4; }
	inline void set_spriteRenderer_4(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_4, value);
	}

	inline static int32_t get_offset_of_fallSpeed_5() { return static_cast<int32_t>(offsetof(BallBehaviour_t2798137694, ___fallSpeed_5)); }
	inline float get_fallSpeed_5() const { return ___fallSpeed_5; }
	inline float* get_address_of_fallSpeed_5() { return &___fallSpeed_5; }
	inline void set_fallSpeed_5(float value)
	{
		___fallSpeed_5 = value;
	}

	inline static int32_t get_offset_of_ballDropped_6() { return static_cast<int32_t>(offsetof(BallBehaviour_t2798137694, ___ballDropped_6)); }
	inline bool get_ballDropped_6() const { return ___ballDropped_6; }
	inline bool* get_address_of_ballDropped_6() { return &___ballDropped_6; }
	inline void set_ballDropped_6(bool value)
	{
		___ballDropped_6 = value;
	}

	inline static int32_t get_offset_of_stageClear_7() { return static_cast<int32_t>(offsetof(BallBehaviour_t2798137694, ___stageClear_7)); }
	inline bool get_stageClear_7() const { return ___stageClear_7; }
	inline bool* get_address_of_stageClear_7() { return &___stageClear_7; }
	inline void set_stageClear_7(bool value)
	{
		___stageClear_7 = value;
	}

	inline static int32_t get_offset_of_layerMask_8() { return static_cast<int32_t>(offsetof(BallBehaviour_t2798137694, ___layerMask_8)); }
	inline int32_t get_layerMask_8() const { return ___layerMask_8; }
	inline int32_t* get_address_of_layerMask_8() { return &___layerMask_8; }
	inline void set_layerMask_8(int32_t value)
	{
		___layerMask_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
