// ScriptStruct /Script/FortniteGame.MashScoreData
// Size: 0xd8
struct FMashScoreData
{
	class UClass* ActorClass; // 0x0 (0x8)
	struct FGameplayTagContainer Tags; // 0x8 (0x20)
	struct FGameplayTagContainer ExclusionTags; // 0x28 (0x20)
	struct FScalableFloat ScoreValue; // 0x48 (0x28)
	struct FScalableFloat bUsesStreakScoreMultiplier; // 0x70 (0x28)
	struct FScalableFloat bUsesTeamScoreMultiplier; // 0x98 (0x28)
	struct FText ScoreText; // 0xc0 (0x18)
};

