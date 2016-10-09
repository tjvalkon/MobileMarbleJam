#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// ButtonTile
struct ButtonTile_t2352013600;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectionManager
struct  SelectionManager_t503375009  : public MonoBehaviour_t667441552
{
public:
	// ButtonTile SelectionManager::selected
	ButtonTile_t2352013600 * ___selected_2;

public:
	inline static int32_t get_offset_of_selected_2() { return static_cast<int32_t>(offsetof(SelectionManager_t503375009, ___selected_2)); }
	inline ButtonTile_t2352013600 * get_selected_2() const { return ___selected_2; }
	inline ButtonTile_t2352013600 ** get_address_of_selected_2() { return &___selected_2; }
	inline void set_selected_2(ButtonTile_t2352013600 * value)
	{
		___selected_2 = value;
		Il2CppCodeGenWriteBarrier(&___selected_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
