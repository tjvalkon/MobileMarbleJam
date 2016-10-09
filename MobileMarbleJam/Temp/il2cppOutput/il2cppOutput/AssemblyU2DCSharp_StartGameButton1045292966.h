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
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartGameButton
struct  StartGameButton_t1045292966  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean StartGameButton::buttonSelected
	bool ___buttonSelected_2;
	// GameManager StartGameButton::gameManager
	GameManager_t2369589051 * ___gameManager_3;
	// UnityEngine.Color StartGameButton::selectedColor
	Color_t4194546905  ___selectedColor_4;
	// UnityEngine.SpriteRenderer StartGameButton::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_5;
	// UnityEngine.Color StartGameButton::defaultColor
	Color_t4194546905  ___defaultColor_6;

public:
	inline static int32_t get_offset_of_buttonSelected_2() { return static_cast<int32_t>(offsetof(StartGameButton_t1045292966, ___buttonSelected_2)); }
	inline bool get_buttonSelected_2() const { return ___buttonSelected_2; }
	inline bool* get_address_of_buttonSelected_2() { return &___buttonSelected_2; }
	inline void set_buttonSelected_2(bool value)
	{
		___buttonSelected_2 = value;
	}

	inline static int32_t get_offset_of_gameManager_3() { return static_cast<int32_t>(offsetof(StartGameButton_t1045292966, ___gameManager_3)); }
	inline GameManager_t2369589051 * get_gameManager_3() const { return ___gameManager_3; }
	inline GameManager_t2369589051 ** get_address_of_gameManager_3() { return &___gameManager_3; }
	inline void set_gameManager_3(GameManager_t2369589051 * value)
	{
		___gameManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_3, value);
	}

	inline static int32_t get_offset_of_selectedColor_4() { return static_cast<int32_t>(offsetof(StartGameButton_t1045292966, ___selectedColor_4)); }
	inline Color_t4194546905  get_selectedColor_4() const { return ___selectedColor_4; }
	inline Color_t4194546905 * get_address_of_selectedColor_4() { return &___selectedColor_4; }
	inline void set_selectedColor_4(Color_t4194546905  value)
	{
		___selectedColor_4 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_5() { return static_cast<int32_t>(offsetof(StartGameButton_t1045292966, ___spriteRenderer_5)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_5() const { return ___spriteRenderer_5; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_5() { return &___spriteRenderer_5; }
	inline void set_spriteRenderer_5(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_5 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_5, value);
	}

	inline static int32_t get_offset_of_defaultColor_6() { return static_cast<int32_t>(offsetof(StartGameButton_t1045292966, ___defaultColor_6)); }
	inline Color_t4194546905  get_defaultColor_6() const { return ___defaultColor_6; }
	inline Color_t4194546905 * get_address_of_defaultColor_6() { return &___defaultColor_6; }
	inline void set_defaultColor_6(Color_t4194546905  value)
	{
		___defaultColor_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
