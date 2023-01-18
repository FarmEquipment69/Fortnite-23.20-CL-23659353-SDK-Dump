// ScriptStruct /Script/LagerRuntime.FortAthenaLivingWorldCategory
// Size: 0xd8
struct FFortAthenaLivingWorldCategory : FTableRowBase
{
	struct TWeakObjectPtr<class UDataTable> EventTable; // 0x8 (0x28)
	struct TArray<struct FFortLivingWorldEventTableVariation> EventTableVariations; // 0x30 (0x10)
	int MaxCount; // 0x40 (0x4)
	int MaxSpawnedCount; // 0x44 (0x4)
	int EventInstanceMaxCount; // 0x48 (0x4)
	int EventInstanceMaxSpawnedCount; // 0x4c (0x4)
	float Priority; // 0x50 (0x4)
	bool bExcludeFromGlobalAIBudget; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	struct FGameplayTagQuery RequirePlaylistTagQuery; // 0x58 (0x48)
	struct TArray<struct TWeakObjectPtr<class UFortAthenaLivingWorldEncounter>> Encounters; // 0xa0 (0x10)
	struct FScalableFloat IsEnabled; // 0xb0 (0x28)
};

