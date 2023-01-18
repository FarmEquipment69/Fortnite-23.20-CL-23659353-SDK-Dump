// Class /Script/FortniteGame.FortGameFeatureData
// Size: 0x520
class UFortGameFeatureData : public UGameFeatureData
{
	struct FString EncryptionOverrideName; // 0x50 (0x10)
	struct TArray<struct FUIExtension> UIExtensions; // 0x60 (0x10)
	struct TWeakObjectPtr<class UFortWeaponReticleExtensionData> WeaponReticleExtensions; // 0x70 (0x28)
	struct TWeakObjectPtr<class UClass> DynamicUIDirectorClass; // 0x98 (0x28)
	struct TWeakObjectPtr<class UClass> UIMapManagerOverrideClass; // 0xc0 (0x28)
	struct TWeakObjectPtr<class UFortMobileHUDWidgetRegistryBase> MobileHUDWidgetRegistry; // 0xe8 (0x28)
	struct TWeakObjectPtr<class UFortMobileHUDPresetExtensionContainer> MobileHUDPresetExtensionContainer; // 0x110 (0x28)
	class UFortGameSettingRegistryExtensionBase* GameSettingRegistryExtensionClass; // 0x138 (0x8)
	struct TArray<struct FString> GameplayCueNotifyPaths; // 0x140 (0x10)
	struct TArray<struct FFortGameFeatureDataBaseCurveTableOverrides> PlaylistBaseCurveTableOverrides; // 0x150 (0x10)
	struct TArray<struct FFortGameFeatureDataBaseDataTableOverrides> PlaylistBaseDataTableOverrides; // 0x160 (0x10)
	struct FFortGameFeatureLootTableData DefaultLootTableData; // 0x170 (0x50)
	struct TMap<struct FGameplayTag, struct FFortGameFeatureLootTableData> PlaylistOverrideLootTableData; // 0x1c0 (0x50)
	struct TWeakObjectPtr<class UDataTable> DefaulAILootOnDeathDataTable; // 0x210 (0x28)
	struct TWeakObjectPtr<class UCurveTable> DefaultGameData; // 0x238 (0x28)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UCurveTable>> PlaylistOverrideGameData; // 0x260 (0x50)
	struct TArray<struct FFortGameFeatureGameDataMapping> PlaylistOverrideGameDataMappings; // 0x2b0 (0x10)
	struct TWeakObjectPtr<class UDataTable> DefaultRangedWeapons; // 0x2c0 (0x28)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UDataTable>> PlaylistOverrideRangedWeapons; // 0x2e8 (0x50)
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UDataTable>> PlaylistOverrideAILootOnDeathDataTable; // 0x338 (0x50)
	struct TWeakObjectPtr<class UFortLevelOverlayConfig> LevelOverlayConfig; // 0x388 (0x28)
	struct TArray<struct TWeakObjectPtr<class UWorld>> AdditionalLevels; // 0x3b0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UWorld>> AdditionalLevelsServerOnly; // 0x3c0 (0x10)
	struct TWeakObjectPtr<class UFortAbilitySet> PlayerAbilitySet; // 0x3d0 (0x28)
	struct TWeakObjectPtr<class UFortDeathCauseData> FortDeathCauseData; // 0x3f8 (0x28)
	struct TArray<struct TWeakObjectPtr<class UFortContextualTutorialDefinition>> ContextualTutorials; // 0x420 (0x10)
	struct TWeakObjectPtr<class UFortFactionMapping> FactionMapping; // 0x430 (0x28)
	struct TWeakObjectPtr<class UDataTable> WeaponUpgradesDataTable; // 0x458 (0x28)
	struct TArray<struct FPawnGoalSelectionTableEntry> PawnGoalSelectionTable; // 0x480 (0x10)
	struct TArray<struct FPrimaryAssetId*> SharedItemIdsToFullyLoad; // 0x490 (0x10)
	struct TArray<struct FFortGameFeatureItemsToFullyLoadData> PlaylistItemsToFullyLoad; // 0x4a0 (0x10)
	struct FVkExperienceData ExperienceData; // 0x4b0 (0x60)
	struct TArray<struct FPluginCheatMenuEntry> PluginCheats; // 0x510 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameFeatureData.GetPluginName (Underlying native function: GetPluginName 0x8a1bf24)
	static void GetPluginName(class UGameFeatureData*& GFD, struct FString& PluginName); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

