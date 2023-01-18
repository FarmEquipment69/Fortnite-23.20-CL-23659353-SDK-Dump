// ScriptStruct /Script/FortniteAI.PawnGoalSelectionCriteria
// Size: 0x50
struct FPawnGoalSelectionCriteria
{
	struct FGameplayTagContainer IncludeEnemiesWithTags; // 0x0 (0x20)
	struct FGameplayTagContainer ExcludeEnemiesWithTags; // 0x20 (0x20)
	struct TArray<struct FGoalSelectionCriteria> GoalSelectionCriteria; // 0x40 (0x10)
};

