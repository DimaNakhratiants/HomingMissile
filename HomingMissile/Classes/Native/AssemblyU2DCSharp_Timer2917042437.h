#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Timer::generalTime
	float ___generalTime_2;
	// UnityEngine.UI.Text Timer::pointText
	Text_t356221433 * ___pointText_3;
	// System.Single Timer::maxTimeDelta
	float ___maxTimeDelta_4;
	// System.Single Timer::offsetDistance
	float ___offsetDistance_5;
	// System.Single Timer::timeDeltaMultiplier
	float ___timeDeltaMultiplier_6;
	// UnityEngine.GameObject Timer::target
	GameObject_t1756533147 * ___target_8;
	// UnityEngine.GameObject Timer::player
	GameObject_t1756533147 * ___player_9;
	// System.Single Timer::timer
	float ___timer_10;

public:
	inline static int32_t get_offset_of_generalTime_2() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___generalTime_2)); }
	inline float get_generalTime_2() const { return ___generalTime_2; }
	inline float* get_address_of_generalTime_2() { return &___generalTime_2; }
	inline void set_generalTime_2(float value)
	{
		___generalTime_2 = value;
	}

	inline static int32_t get_offset_of_pointText_3() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___pointText_3)); }
	inline Text_t356221433 * get_pointText_3() const { return ___pointText_3; }
	inline Text_t356221433 ** get_address_of_pointText_3() { return &___pointText_3; }
	inline void set_pointText_3(Text_t356221433 * value)
	{
		___pointText_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointText_3, value);
	}

	inline static int32_t get_offset_of_maxTimeDelta_4() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___maxTimeDelta_4)); }
	inline float get_maxTimeDelta_4() const { return ___maxTimeDelta_4; }
	inline float* get_address_of_maxTimeDelta_4() { return &___maxTimeDelta_4; }
	inline void set_maxTimeDelta_4(float value)
	{
		___maxTimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_offsetDistance_5() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___offsetDistance_5)); }
	inline float get_offsetDistance_5() const { return ___offsetDistance_5; }
	inline float* get_address_of_offsetDistance_5() { return &___offsetDistance_5; }
	inline void set_offsetDistance_5(float value)
	{
		___offsetDistance_5 = value;
	}

	inline static int32_t get_offset_of_timeDeltaMultiplier_6() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___timeDeltaMultiplier_6)); }
	inline float get_timeDeltaMultiplier_6() const { return ___timeDeltaMultiplier_6; }
	inline float* get_address_of_timeDeltaMultiplier_6() { return &___timeDeltaMultiplier_6; }
	inline void set_timeDeltaMultiplier_6(float value)
	{
		___timeDeltaMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_target_8() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___target_8)); }
	inline GameObject_t1756533147 * get_target_8() const { return ___target_8; }
	inline GameObject_t1756533147 ** get_address_of_target_8() { return &___target_8; }
	inline void set_target_8(GameObject_t1756533147 * value)
	{
		___target_8 = value;
		Il2CppCodeGenWriteBarrier(&___target_8, value);
	}

	inline static int32_t get_offset_of_player_9() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___player_9)); }
	inline GameObject_t1756533147 * get_player_9() const { return ___player_9; }
	inline GameObject_t1756533147 ** get_address_of_player_9() { return &___player_9; }
	inline void set_player_9(GameObject_t1756533147 * value)
	{
		___player_9 = value;
		Il2CppCodeGenWriteBarrier(&___player_9, value);
	}

	inline static int32_t get_offset_of_timer_10() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___timer_10)); }
	inline float get_timer_10() const { return ___timer_10; }
	inline float* get_address_of_timer_10() { return &___timer_10; }
	inline void set_timer_10(float value)
	{
		___timer_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
