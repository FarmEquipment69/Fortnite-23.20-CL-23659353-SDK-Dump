// ScriptStruct /Script/Engine.CurveEdTab
// Size: 0x30
struct FCurveEdTab
{
	struct FString TabName; // 0x0 (0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10 (0x10)
	float ViewStartInput; // 0x20 (0x4)
	float ViewEndInput; // 0x24 (0x4)
	float ViewStartOutput; // 0x28 (0x4)
	float ViewEndOutput; // 0x2c (0x4)
};

