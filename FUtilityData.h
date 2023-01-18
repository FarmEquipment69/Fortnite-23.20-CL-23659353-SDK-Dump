// ScriptStruct /Script/FortniteAI.UtilityData
// Size: 0x40
struct FUtilityData
{
	struct TArray<struct FUtilityContribution*> ContributingFactors; // 0x0 (0x10)
	float ContributionsTotal; // 0x10 (0x4)
	bool bApplyRecentSelectionPenalty; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float RecentlySelectedPenaltyPercentage; // 0x18 (0x4)
	float PenaltyFallOffRate; // 0x1c (0x4)
	struct FString DebugGraphName; // 0x20 (0x10)
	struct FLinearColor DebugGraphColor; // 0x30 (0x10)
};

