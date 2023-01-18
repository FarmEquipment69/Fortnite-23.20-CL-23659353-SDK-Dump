// ScriptStruct /Script/AnimationWarpingRuntime.FootPlacementPlantSettings
// Size: 0x34
struct FFootPlacementPlantSettings
{
	float SpeedThreshold; // 0x0 (0x4)
	float DistanceToGround; // 0x4 (0x4)
	enum EFootPlacementLockType LockType; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	float UnplantRadius; // 0xc (0x4)
	float ReplantRadiusRatio; // 0x10 (0x4)
	float UnplantAngle; // 0x14 (0x4)
	float ReplantAngleRatio; // 0x18 (0x4)
	float MaxExtensionRatio; // 0x1c (0x4)
	float MinExtensionRatio; // 0x20 (0x4)
	float SeparatingDistance; // 0x24 (0x4)
	float UnalignmentSpeedThreshold; // 0x28 (0x4)
	float AnkleTwistReduction; // 0x2c (0x4)
	bool bAdjustHeelBeforePlanting; // 0x30 (0x1)
	unsigned char padding_31[0x3]; // 0x31 (0x3)
};

