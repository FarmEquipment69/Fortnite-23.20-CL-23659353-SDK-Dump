// ScriptStruct /Script/Engine.RootMotionSource_MoveToForce
// Size: 0x120
struct FRootMotionSource_MoveToForce : FRootMotionSource
{
	struct FVector StartLocation; // 0xd8 (0x18)
	struct FVector TargetLocation; // 0xf0 (0x18)
	bool bRestrictSpeedToExpected; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	class UCurveVector* PathOffsetCurve; // 0x110 (0x8)
	unsigned char padding_118[0x8]; // 0x118 (0x8)
};

