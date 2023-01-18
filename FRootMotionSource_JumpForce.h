// ScriptStruct /Script/Engine.RootMotionSource_JumpForce
// Size: 0x130
struct FRootMotionSource_JumpForce : FRootMotionSource
{
	struct FRotator Rotation; // 0xd8 (0x18)
	float Distance; // 0xf0 (0x4)
	float Height; // 0xf4 (0x4)
	bool bDisableTimeout; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x7]; // 0xf9 (0x7) 
	class UCurveVector* PathOffsetCurve; // 0x100 (0x8)
	class UCurveFloat* TimeMappingCurve; // 0x108 (0x8)
	unsigned char padding_110[0x20]; // 0x110 (0x20)
};

