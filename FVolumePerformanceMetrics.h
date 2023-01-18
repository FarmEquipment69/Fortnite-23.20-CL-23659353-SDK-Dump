// ScriptStruct /Script/FortniteGame.VolumePerformanceMetrics
// Size: 0x34
struct FVolumePerformanceMetrics
{
	int PerformanceValue; // 0x0 (0x4)
	int PerformanceMaxValue; // 0x4 (0x4)
	int PerformanceValueMargin; // 0x8 (0x4)
	struct FIntPoint* PerformanceValueCellIndex; // 0xc (0x8)
	int PerformanceLowendThreshold; // 0x14 (0x4)
	int PreviewDeltaValue; // 0x18 (0x4)
	enum EFortBudgetCategory category; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	int PlayerId; // 0x20 (0x4)
	int MostExpensivePerformanceValue; // 0x24 (0x4)
	int MostExpensivePreviewDeltaValue; // 0x28 (0x4)
	struct FIntPoint* MostExpensivePerformanceValueCellIndex; // 0x2c (0x8)
};

