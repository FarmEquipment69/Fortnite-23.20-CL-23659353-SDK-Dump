// ScriptStruct /Script/Engine.PhysicalAnimationData
// Size: 0x20
struct FPhysicalAnimationData
{
	struct FName BodyName; // 0x0 (0x4)
	unsigned char bIsLocalSimulation; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float OrientationStrength; // 0x8 (0x4)
	float AngularVelocityStrength; // 0xc (0x4)
	float PositionStrength; // 0x10 (0x4)
	float VelocityStrength; // 0x14 (0x4)
	float MaxLinearForce; // 0x18 (0x4)
	float MaxAngularForce; // 0x1c (0x4)
};

