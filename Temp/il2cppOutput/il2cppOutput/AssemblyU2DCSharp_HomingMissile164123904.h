#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HomingMissile
struct  HomingMissile_t164123904  : public MonoBehaviour_t1158329972
{
public:
	// System.Single HomingMissile::speed
	float ___speed_2;
	// System.Single HomingMissile::rotationSpeed
	float ___rotationSpeed_3;
	// UnityEngine.GameObject HomingMissile::target
	GameObject_t1756533147 * ___target_4;
	// UnityEngine.GameObject HomingMissile::explosion
	GameObject_t1756533147 * ___explosion_5;
	// UnityEngine.Rigidbody2D HomingMissile::rb
	Rigidbody2D_t502193897 * ___rb_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___target_4)); }
	inline GameObject_t1756533147 * get_target_4() const { return ___target_4; }
	inline GameObject_t1756533147 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(GameObject_t1756533147 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier(&___target_4, value);
	}

	inline static int32_t get_offset_of_explosion_5() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___explosion_5)); }
	inline GameObject_t1756533147 * get_explosion_5() const { return ___explosion_5; }
	inline GameObject_t1756533147 ** get_address_of_explosion_5() { return &___explosion_5; }
	inline void set_explosion_5(GameObject_t1756533147 * value)
	{
		___explosion_5 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_5, value);
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(HomingMissile_t164123904, ___rb_6)); }
	inline Rigidbody2D_t502193897 * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_t502193897 * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier(&___rb_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
