// ScriptStruct /Script/FortniteGame.BundleGoalCardDisplayData
// Size: 0x80
struct FBundleGoalCardDisplayData
{
	struct FText HeaderText; // 0x0 (0x18)
	struct FLinearColor HeaderColor; // 0x18 (0x10)
	struct FText SubHeaderText; // 0x28 (0x18)
	struct FLinearColor SubHeaderColor; // 0x40 (0x10)
	struct TWeakObjectPtr<class UObject> HeaderIcon; // 0x50 (0x28)
	int MilestoneTier; // 0x78 (0x4)
	int SortOrder; // 0x7c (0x4)
};

