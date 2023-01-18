// ScriptStruct /Script/Engine.RootMotionSource_MoveToDynamicForce
// Size: 0x140
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource
{
	struct FVector StartLocation; // 0xd8 (0x18)
	struct FVector InitialTargetLocation; // 0xf0 (0x18)
	struct FVector TargetLocation; // 0x108 (0x18)
	bool bRestrictSpeedToExpected; // 0x120 (0x1)
	unsigned char unreflected_121[0x7]; // 0x121 (0x7) 
	class UCurveVector* PathOffsetCurve; // 0x128 (0x8)
	class UCurveFloat* TimeMappingCurve; // 0x130 (0x8)
	unsigned char padding_138[0x8]; // 0x138 (0x8)
};

