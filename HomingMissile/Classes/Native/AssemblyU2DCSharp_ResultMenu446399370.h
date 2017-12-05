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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResultMenu
struct  ResultMenu_t446399370  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ResultMenu::resultText
	Text_t356221433 * ___resultText_3;

public:
	inline static int32_t get_offset_of_resultText_3() { return static_cast<int32_t>(offsetof(ResultMenu_t446399370, ___resultText_3)); }
	inline Text_t356221433 * get_resultText_3() const { return ___resultText_3; }
	inline Text_t356221433 ** get_address_of_resultText_3() { return &___resultText_3; }
	inline void set_resultText_3(Text_t356221433 * value)
	{
		___resultText_3 = value;
		Il2CppCodeGenWriteBarrier(&___resultText_3, value);
	}
};

struct ResultMenu_t446399370_StaticFields
{
public:
	// System.Single ResultMenu::points
	float ___points_2;

public:
	inline static int32_t get_offset_of_points_2() { return static_cast<int32_t>(offsetof(ResultMenu_t446399370_StaticFields, ___points_2)); }
	inline float get_points_2() const { return ___points_2; }
	inline float* get_address_of_points_2() { return &___points_2; }
	inline void set_points_2(float value)
	{
		___points_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
