// ScriptStruct /Script/FortniteGame.TeamBucketCosmeticLoadoutContainer
// Size: 0xa8
struct FTeamBucketCosmeticLoadoutContainer
{
	struct FScalableFloat bEnabled; // 0x0 (0x28)
	struct FGameplayTagContainer SkinMetaTagsToSkip; // 0x28 (0x20)
	struct TArray<class UCustomCharacterPart*> PartsToSwapInToRemoveExtras; // 0x48 (0x10)
	struct FGameplayTagContainer SpecialTags; // 0x58 (0x20)
	struct FGameplayTagContainer ExtraSpecialTags; // 0x78 (0x20)
	struct TArray<struct FTeamBucketPartOverrideData> PartOverrides; // 0x98 (0x10)
};

