// ScriptStruct /Script/Engine.RigidBodyErrorCorrection
// Size: 0x34
struct FRigidBodyErrorCorrection
{
	float PingExtrapolation; // 0x0 (0x4)
	float PingLimit; // 0x4 (0x4)
	float ErrorPerLinearDifference; // 0x8 (0x4)
	float ErrorPerAngularDifference; // 0xc (0x4)
	float MaxRestoredStateError; // 0x10 (0x4)
	float MaxLinearHardSnapDistance; // 0x14 (0x4)
	float PositionLerp; // 0x18 (0x4)
	float AngleLerp; // 0x1c (0x4)
	float LinearVelocityCoefficient; // 0x20 (0x4)
	float AngularVelocityCoefficient; // 0x24 (0x4)
	float ErrorAccumulationSeconds; // 0x28 (0x4)
	float ErrorAccumulationDistanceSq; // 0x2c (0x4)
	float ErrorAccumulationSimilarity; // 0x30 (0x4)
};

