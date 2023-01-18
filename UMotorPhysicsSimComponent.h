// Class /Script/AudioMotorSimStandardComponents.MotorPhysicsSimComponent
// Size: 0x108
class UMotorPhysicsSimComponent : public UAudioMotorSimComponent
{
	float Weight; // 0xa8 (0x4)
	float EngineTorque; // 0xac (0x4)
	float BrakingHorsePower; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct TArray<float> GearRatios; // 0xb8 (0x10)
	float ClutchedGearRatio; // 0xc8 (0x4)
	bool bUseInfiniteGears; // 0xcc (0x1)
	bool bAlwaysDownshiftToZerothGear; // 0xcd (0x1)
	unsigned char unreflected_ce[0x2]; // 0xce (0x2) 
	float InfiniteGearRatio; // 0xd0 (0x4)
	float UpShiftMaxRpm; // 0xd4 (0x4)
	float DownShiftStartRpm; // 0xd8 (0x4)
	float ClutchedForceModifier; // 0xdc (0x4)
	float EngineGearRatio; // 0xe0 (0x4)
	float EngineFriction; // 0xe4 (0x4)
	float GroundFriction; // 0xe8 (0x4)
	float WindResistancePerVelocity; // 0xec (0x4)
	float ThrottleInterpolationTime; // 0xf0 (0x4)
	float RpmInterpSpeed; // 0xf4 (0x4)
	struct FMulticastInlineDelegate OnGearChangedEvent; // 0xf8 (0x10)
};

