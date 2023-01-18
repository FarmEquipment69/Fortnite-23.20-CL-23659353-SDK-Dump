// ScriptStruct /Script/FortniteGame.FortNonPrimaryMission
// Size: 0xb8
struct FFortNonPrimaryMission
{
	struct TWeakObjectPtr<class UFortMissionInfo> MissionInfo; // 0x0 (0x28)
	struct FGameplayTagQuery ContextTagQuery; // 0x28 (0x48)
	struct FDataTableRowHandle MinDifficulty; // 0x70 (0x10)
	struct FDataTableRowHandle MaxDifficulty; // 0x80 (0x10)
	bool bSatisfiesCurrentRequirement; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct TArray<int> RequirementIndicesSatisfied; // 0x98 (0x10)
	struct TArray<int> DistributionCategoryIndicesSatisfied; // 0xa8 (0x10)
};

