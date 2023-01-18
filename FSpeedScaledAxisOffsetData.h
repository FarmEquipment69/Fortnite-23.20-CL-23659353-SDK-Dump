// ScriptStruct /Script/GrappleParentRuntime.SpeedScaledAxisOffsetData
// Size: 0x60
struct FSpeedScaledAxisOffsetData
{
	struct FScalableFloat OffsetModifier; // 0x0 (0x28)
	float BaseOffset; // 0x28 (0x4)
	float SpeedScaledOffset; // 0x2c (0x4)
	struct FVector2D SpeedBounds; // 0x30 (0x10)
	struct FVector2D SpeedMultiplierBounds; // 0x40 (0x10)
	unsigned char padding_50[0x10]; // 0x50 (0x10)
};

