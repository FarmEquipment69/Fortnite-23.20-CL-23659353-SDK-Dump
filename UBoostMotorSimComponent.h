// Class /Script/AudioMotorSimStandardComponents.BoostMotorSimComponent
// Size: 0x150
class UBoostMotorSimComponent : public UAudioMotorSimComponent
{
	float ThrottleScale; // 0xa8 (0x4)
	float InterpExp; // 0xac (0x4)
	float InterpTime; // 0xb0 (0x4)
	bool ScaleThrottleWithBoostStrength; // 0xb4 (0x1)
	bool bModifyPitch; // 0xb5 (0x1)
	unsigned char unreflected_b6[0x2]; // 0xb6 (0x2) 
	float PitchModifierInterpSpeed; // 0xb8 (0x4)
	unsigned char unreflected_bc[0x4]; // 0xbc (0x4) 
	struct FRuntimeFloatCurve BoostToPitchCurve; // 0xc0 (0x88)
	unsigned char padding_148[0x8]; // 0x148 (0x8)
};

