// Class /Script/FortniteAI.FortAIAssignmentSettings
// Size: 0x90
class UFortAIAssignmentSettings : public UDataAsset
{
	struct TArray<struct FGoalSelectionQueryInfo> GoalSelectionQueryInfos; // 0x30 (0x10)
	bool bGoalLocationsAlwaysKnown; // 0x40 (0x1)
	bool bIsEnemyAssignment; // 0x41 (0x1)
	unsigned char unreflected_42[0x6]; // 0x42 (0x6) 
	struct FGameplayTagContainer RequiredTags; // 0x48 (0x20)
	struct FGameplayTagContainer ProhibitedTags; // 0x68 (0x20)
	float MaxAIAllowedForAssignment; // 0x88 (0x4)
	float MaxAIAllowedPerGoal; // 0x8c (0x4)
};

