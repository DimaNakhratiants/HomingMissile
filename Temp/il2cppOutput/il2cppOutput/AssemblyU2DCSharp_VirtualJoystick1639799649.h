#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// UnityEngine.UI.Image
struct Image_t2042527209;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VirtualJoystick
struct  VirtualJoystick_t1639799649  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Image VirtualJoystick::joystickBackground
	Image_t2042527209 * ___joystickBackground_2;
	// UnityEngine.UI.Image VirtualJoystick::joystick
	Image_t2042527209 * ___joystick_3;
	// UnityEngine.Vector2 VirtualJoystick::inputVector
	Vector2_t2243707579  ___inputVector_4;

public:
	inline static int32_t get_offset_of_joystickBackground_2() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1639799649, ___joystickBackground_2)); }
	inline Image_t2042527209 * get_joystickBackground_2() const { return ___joystickBackground_2; }
	inline Image_t2042527209 ** get_address_of_joystickBackground_2() { return &___joystickBackground_2; }
	inline void set_joystickBackground_2(Image_t2042527209 * value)
	{
		___joystickBackground_2 = value;
		Il2CppCodeGenWriteBarrier(&___joystickBackground_2, value);
	}

	inline static int32_t get_offset_of_joystick_3() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1639799649, ___joystick_3)); }
	inline Image_t2042527209 * get_joystick_3() const { return ___joystick_3; }
	inline Image_t2042527209 ** get_address_of_joystick_3() { return &___joystick_3; }
	inline void set_joystick_3(Image_t2042527209 * value)
	{
		___joystick_3 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_3, value);
	}

	inline static int32_t get_offset_of_inputVector_4() { return static_cast<int32_t>(offsetof(VirtualJoystick_t1639799649, ___inputVector_4)); }
	inline Vector2_t2243707579  get_inputVector_4() const { return ___inputVector_4; }
	inline Vector2_t2243707579 * get_address_of_inputVector_4() { return &___inputVector_4; }
	inline void set_inputVector_4(Vector2_t2243707579  value)
	{
		___inputVector_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
