#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// VirtualJoystick
struct VirtualJoystick_t1639799649;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameObjectBehavior
struct  GameObjectBehavior_t1643225157  : public MonoBehaviour_t1158329972
{
public:
	// VirtualJoystick GameObjectBehavior::joystick
	VirtualJoystick_t1639799649 * ___joystick_2;
	// System.Single GameObjectBehavior::speed
	float ___speed_3;
	// System.Single GameObjectBehavior::rotationSpeed
	float ___rotationSpeed_4;
	// UnityEngine.Rigidbody2D GameObjectBehavior::rb
	Rigidbody2D_t502193897 * ___rb_5;

public:
	inline static int32_t get_offset_of_joystick_2() { return static_cast<int32_t>(offsetof(GameObjectBehavior_t1643225157, ___joystick_2)); }
	inline VirtualJoystick_t1639799649 * get_joystick_2() const { return ___joystick_2; }
	inline VirtualJoystick_t1639799649 ** get_address_of_joystick_2() { return &___joystick_2; }
	inline void set_joystick_2(VirtualJoystick_t1639799649 * value)
	{
		___joystick_2 = value;
		Il2CppCodeGenWriteBarrier(&___joystick_2, value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(GameObjectBehavior_t1643225157, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_4() { return static_cast<int32_t>(offsetof(GameObjectBehavior_t1643225157, ___rotationSpeed_4)); }
	inline float get_rotationSpeed_4() const { return ___rotationSpeed_4; }
	inline float* get_address_of_rotationSpeed_4() { return &___rotationSpeed_4; }
	inline void set_rotationSpeed_4(float value)
	{
		___rotationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(GameObjectBehavior_t1643225157, ___rb_5)); }
	inline Rigidbody2D_t502193897 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_t502193897 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
