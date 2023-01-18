// Class /Script/FortniteGame.FortGameStateComponent_MiniMapDataOverride
// Size: 0xc0
class UFortGameStateComponent_MiniMapDataOverride : public UGameStateComponent
{
	struct TArray<struct FMiniMapDataOverride> MiniMapDataOverrides; // 0xa0 (0x10)
	struct TArray<struct FMiniMapDataOverrideRepData> MiniMapDataOverrideRepDatas; // 0xb0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameStateComponent_MiniMapDataOverride.OverrideLocations (Underlying native function: OverrideLocations 0x8460204)
	void OverrideLocations(struct FGameplayTagContainer& ContextTags, struct FGameplayTagContainer& LocationTags); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameStateComponent_MiniMapDataOverride.OnRep_MiniMapDataOverridesRepDatas (Underlying native function: OnRep_MiniMapDataOverridesRepDatas 0x20b9d30)
	void OnRepMiniMapDataOverridesRepDatas(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortGameStateComponent_MiniMapDataOverride.GetContextTagsForLocationTag (Underlying native function: GetContextTagsForLocationTag 0x845d9fc)
	struct FGameplayTagContainer GetContextTagsForLocationTag(struct FGameplayTag& LocationTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

