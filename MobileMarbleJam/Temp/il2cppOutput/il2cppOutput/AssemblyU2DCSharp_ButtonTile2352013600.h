#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;
// SelectionManager
struct SelectionManager_t503375009;
// TouchControl
struct TouchControl_t3773144382;
// CreateTile
struct CreateTile_t3362678250;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_CreateTile_TileType3606623661.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonTile
struct  ButtonTile_t2352013600  : public MonoBehaviour_t667441552
{
public:
	// CreateTile/TileType ButtonTile::tileType
	int32_t ___tileType_2;
	// UnityEngine.Color ButtonTile::selectedColor
	Color_t4194546905  ___selectedColor_3;
	// UnityEngine.SpriteRenderer ButtonTile::spriteRenderer
	SpriteRenderer_t2548470764 * ___spriteRenderer_4;
	// UnityEngine.Color ButtonTile::defaultColor
	Color_t4194546905  ___defaultColor_5;
	// System.Boolean ButtonTile::buttonSelected
	bool ___buttonSelected_6;
	// SelectionManager ButtonTile::selectionManager
	SelectionManager_t503375009 * ___selectionManager_7;
	// TouchControl ButtonTile::touchControl
	TouchControl_t3773144382 * ___touchControl_8;
	// CreateTile ButtonTile::createTile
	CreateTile_t3362678250 * ___createTile_9;

public:
	inline static int32_t get_offset_of_tileType_2() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___tileType_2)); }
	inline int32_t get_tileType_2() const { return ___tileType_2; }
	inline int32_t* get_address_of_tileType_2() { return &___tileType_2; }
	inline void set_tileType_2(int32_t value)
	{
		___tileType_2 = value;
	}

	inline static int32_t get_offset_of_selectedColor_3() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___selectedColor_3)); }
	inline Color_t4194546905  get_selectedColor_3() const { return ___selectedColor_3; }
	inline Color_t4194546905 * get_address_of_selectedColor_3() { return &___selectedColor_3; }
	inline void set_selectedColor_3(Color_t4194546905  value)
	{
		___selectedColor_3 = value;
	}

	inline static int32_t get_offset_of_spriteRenderer_4() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___spriteRenderer_4)); }
	inline SpriteRenderer_t2548470764 * get_spriteRenderer_4() const { return ___spriteRenderer_4; }
	inline SpriteRenderer_t2548470764 ** get_address_of_spriteRenderer_4() { return &___spriteRenderer_4; }
	inline void set_spriteRenderer_4(SpriteRenderer_t2548470764 * value)
	{
		___spriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___spriteRenderer_4, value);
	}

	inline static int32_t get_offset_of_defaultColor_5() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___defaultColor_5)); }
	inline Color_t4194546905  get_defaultColor_5() const { return ___defaultColor_5; }
	inline Color_t4194546905 * get_address_of_defaultColor_5() { return &___defaultColor_5; }
	inline void set_defaultColor_5(Color_t4194546905  value)
	{
		___defaultColor_5 = value;
	}

	inline static int32_t get_offset_of_buttonSelected_6() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___buttonSelected_6)); }
	inline bool get_buttonSelected_6() const { return ___buttonSelected_6; }
	inline bool* get_address_of_buttonSelected_6() { return &___buttonSelected_6; }
	inline void set_buttonSelected_6(bool value)
	{
		___buttonSelected_6 = value;
	}

	inline static int32_t get_offset_of_selectionManager_7() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___selectionManager_7)); }
	inline SelectionManager_t503375009 * get_selectionManager_7() const { return ___selectionManager_7; }
	inline SelectionManager_t503375009 ** get_address_of_selectionManager_7() { return &___selectionManager_7; }
	inline void set_selectionManager_7(SelectionManager_t503375009 * value)
	{
		___selectionManager_7 = value;
		Il2CppCodeGenWriteBarrier(&___selectionManager_7, value);
	}

	inline static int32_t get_offset_of_touchControl_8() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___touchControl_8)); }
	inline TouchControl_t3773144382 * get_touchControl_8() const { return ___touchControl_8; }
	inline TouchControl_t3773144382 ** get_address_of_touchControl_8() { return &___touchControl_8; }
	inline void set_touchControl_8(TouchControl_t3773144382 * value)
	{
		___touchControl_8 = value;
		Il2CppCodeGenWriteBarrier(&___touchControl_8, value);
	}

	inline static int32_t get_offset_of_createTile_9() { return static_cast<int32_t>(offsetof(ButtonTile_t2352013600, ___createTile_9)); }
	inline CreateTile_t3362678250 * get_createTile_9() const { return ___createTile_9; }
	inline CreateTile_t3362678250 ** get_address_of_createTile_9() { return &___createTile_9; }
	inline void set_createTile_9(CreateTile_t3362678250 * value)
	{
		___createTile_9 = value;
		Il2CppCodeGenWriteBarrier(&___createTile_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
