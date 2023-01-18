// ScriptStruct /Script/Engine.TextSizingParameters
// Size: 0x38
struct FTextSizingParameters
{
	float DrawX; // 0x0 (0x4)
	float DrawY; // 0x4 (0x4)
	float DrawXL; // 0x8 (0x4)
	float DrawYL; // 0xc (0x4)
	struct FVector2D Scaling; // 0x10 (0x10)
	class UFont* DrawFont; // 0x20 (0x8)
	struct FVector2D SpacingAdjust; // 0x28 (0x10)
};

