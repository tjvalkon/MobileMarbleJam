#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject GameManager::ballBlue
	GameObject_t3674682005 * ___ballBlue_2;
	// UnityEngine.GameObject GameManager::startGameButton
	GameObject_t3674682005 * ___startGameButton_3;

public:
	inline static int32_t get_offset_of_ballBlue_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___ballBlue_2)); }
	inline GameObject_t3674682005 * get_ballBlue_2() const { return ___ballBlue_2; }
	inline GameObject_t3674682005 ** get_address_of_ballBlue_2() { return &___ballBlue_2; }
	inline void set_ballBlue_2(GameObject_t3674682005 * value)
	{
		___ballBlue_2 = value;
		Il2CppCodeGenWriteBarrier(&___ballBlue_2, value);
	}

	inline static int32_t get_offset_of_startGameButton_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___startGameButton_3)); }
	inline GameObject_t3674682005 * get_startGameButton_3() const { return ___startGameButton_3; }
	inline GameObject_t3674682005 ** get_address_of_startGameButton_3() { return &___startGameButton_3; }
	inline void set_startGameButton_3(GameObject_t3674682005 * value)
	{
		___startGameButton_3 = value;
		Il2CppCodeGenWriteBarrier(&___startGameButton_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
