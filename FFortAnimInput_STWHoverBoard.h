// ScriptStruct /Script/FortniteGame.FortAnimInput_STWHoverBoard
// Size: 0x78
struct FFortAnimInput_STWHoverBoard
{
	class UCurveFloat* HoverCycleVelocityCurve; // 0x0 (0x8)
	class UCurveFloat* HoverHeightCurve; // 0x8 (0x8)
	class UCurveFloat* HoverLeanCurve; // 0x10 (0x8)
	class UCurveFloat* HoverPitchCurve; // 0x18 (0x8)
	struct FRotator HoverTransformRotation; // 0x20 (0x18)
	struct FVector HoverTransformTranslation; // 0x38 (0x18)
	float HoverTransformAlpha; // 0x50 (0x4)
	float HoverCycle; // 0x54 (0x4)
	float HoverHeight; // 0x58 (0x4)
	float HoverLeanAngle; // 0x5c (0x4)
	float HoverPitchAngle; // 0x60 (0x4)
	float HoverYaw; // 0x64 (0x4)
	float HoverYawCurrent; // 0x68 (0x4)
	float HoverIdleLeanAlpha; // 0x6c (0x4)
	bool bIsUsingHoverboard; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

