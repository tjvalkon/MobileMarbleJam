#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// SelectionManager
struct SelectionManager_t503375009;
// GameManager
struct GameManager_t2369589051;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CreateTile
struct  CreateTile_t3362678250  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] CreateTile::tile
	GameObjectU5BU5D_t2662109048* ___tile_2;
	// System.Int32 CreateTile::selectedTile
	int32_t ___selectedTile_3;
	// SelectionManager CreateTile::selectionManager
	SelectionManager_t503375009 * ___selectionManager_4;
	// GameManager CreateTile::gameManager
	GameManager_t2369589051 * ___gameManager_5;
	// System.Boolean CreateTile::startTilePlaced
	bool ___startTilePlaced_6;
	// System.Boolean CreateTile::exitTilePlaced
	bool ___exitTilePlaced_7;
	// System.Boolean CreateTile::startButtonActivated
	bool ___startButtonActivated_8;

public:
	inline static int32_t get_offset_of_tile_2() { return static_cast<int32_t>(offsetof(CreateTile_t3362678250, ___tile_2)); }
	inline GameObjectU5BU5D_t2662109048* get_tile_2() const { return ___tile_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_tile_2() { return &___tile_2; }
	inline void set_tile_2(GameObjectU5BU5D_t2662109048* value)
	{
		___tile_2 = value;
		Il2CppCodeGenWriteBarrier(&___tile_2, value);
	}

	inline static int32_t get_offset_of_selectedTile_3() { return static_cast<int32_t>(offsetof(CreateTile_t3362678250, ___selectedTile_3)); }
	inline int32_t get_selectedTile_3() const { return ___selectedTile_3; }
	inline int32_t* get_address_of_selectedTile_3() { return &___selectedTile_3; }
	inline void set_selectedTile_3(int32_t value)
	{
		___selectedTile_3 = value;
	}

	inline static int32_t get_offset_of_selectionManager_4() { return static_cast<int32_t>(offsetof(CreateTile_t3362678250, ___selectionManager_4)); }
	inline SelectionManager_t503375009 * get_selectionManager_4() const { return ___selectionManager_4; }
	inline SelectionManager_t503375009 ** get_address_of_selectionManager_4() { return &___selectionManager_4; }
	inline void set_selectionManager_4(SelectionManager_t503375009 * value)
	{
		___selectionManager_4 = value;
		Il2CppCodeGenWriteBarrier(&___selectionManager_4, value);
	}

	inline static int32_t get_offset_of_gameManager_5() { return static_cast<int32_t>(offsetof(CreateTile_t3362678250, ___gameManager_5)); }
	inline GameManager_t2369589051 * get_gameManager_5() const { return ___gameManager_5; }
	inline GameManager_t2369589051 ** get_address_of_gameManager_5() { return &___gameManager_5; }
	inline void set_gameManager_5(GameManager_t2369589051 * value)
	{
		___gameManager_5 = value;
		Il2CppCodeGenWriteBarrier(&___gameManager_5, value);
	}

	inline static int32_t get_offset_of_startTilePlaced_6() { return static_cast<int32_t>(offsetof(CreateTile_t3362678250, ___startTilePlaced_6)); }
	inline bool get_startTilePlaced_6() const { return ___startTilePlaced_6; }
	inline bool* get_address_of_startTilePlaced_6() { return &___startTilePlaced_6; }
	inline void set_startTilePlaced_6(bool value)
	{
		___startTilePlaced_6 = value;
	}

	inline static int32_t get_offset_of_exitTilePlaced_7() { return static_cast<int32_t>(offsetof(CreateTile_t3362678250, ___exitTilePlaced_7)); }
	inline bool get_exitTilePlaced_7() const { return ___exitTilePlaced_7; }
	inline bool* get_address_of_exitTilePlaced_7() { return &___exitTilePlaced_7; }
	inline void set_exitTilePlaced_7(bool value)
	{
		___exitTilePlaced_7 = value;
	}

	inline static int32_t get_offset_of_startButtonActivated_8() { return static_cast<int32_t>(offsetof(CreateTile_t3362678250, ___startButtonActivated_8)); }
	inline bool get_startButtonActivated_8() const { return ___startButtonActivated_8; }
	inline bool* get_address_of_startButtonActivated_8() { return &___startButtonActivated_8; }
	inline void set_startButtonActivated_8(bool value)
	{
		___startButtonActivated_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
