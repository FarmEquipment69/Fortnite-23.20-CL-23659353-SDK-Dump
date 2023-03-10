// Class /Script/FortniteGame.FortGameData
// Size: 0x4d98
class UFortGameData : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x28]; // 0x30 (0x28) 
	float PickupSplineOffsetRange[0x2]; // 0x58 (0x4) (ARRAY) 
	float PickupSplineRandomMax; // 0x60 (0x4)
	float PickupSplineDropToGroundLength; // 0x64 (0x4)
	float PickupMaxCollectionTime; // 0x68 (0x4)
	float PickupMaxDelayPerItem; // 0x6c (0x4)
	struct FGameplayTagContainer AutoEquipTagContainer; // 0x70 (0x20)
	struct FLinearColor BuildingFullHealthFlashColor; // 0x90 (0x10)
	struct FLinearColor InvalidEditPatternColor; // 0xa0 (0x10)
	struct TArray<struct FFortHighlightParamProfile> HighlightParamProfiles; // 0xb0 (0x10)
	struct FFortHighlightColorsContainer HighlightColors[0x5]; // 0xc0 (0x64) (ARRAY) 
	int VehicleDepthStencilValue; // 0x2b4 (0x4)
	int VehicleDepthStencilValueForHighlightedVehicle; // 0x2b8 (0x4)
	struct FGameplayTag VehicleGameplayTag; // 0x2bc (0x4)
	struct FVector MobileInteractionIconScale; // 0x2c0 (0x18)
	struct FLinearColor MobileRarityColor[0x8]; // 0x2d8 (0x10) (ARRAY) 
	struct FCurveTableRowHandle CritRatingTable; // 0x358 (0x10)
	struct FCurveTableRowHandle ArmorToDamageResistanceTable; // 0x368 (0x10)
	float DefaultLootInstancingRange; // 0x378 (0x4)
	unsigned char unreflected_37c[0x4]; // 0x37c (0x4) 
	struct TArray<struct FFortQuestPackInfo> QuestPackInfos; // 0x380 (0x10)
	struct FGameplayTagContainer DamageDoneTargetQuestAllowedTags; // 0x390 (0x20)
	struct FGameplayTagContainer DamageDoneQuestAllowedTags; // 0x3b0 (0x20)
	struct TArray<struct FDamageDistanceTagEval*> DamageDoneQuestDistanceTags; // 0x3d0 (0x10)
	class UFortQuestIndicatorData* QuestIndicatorData; // 0x3e0 (0x8)
	class UFortSeasonItemIndicatorData* SeasonItemIndicatorData; // 0x3e8 (0x8)
	struct FOnlineAccountTexts OnlineAccountTexts; // 0x3f0 (0x9d8)
	struct TArray<struct FName> ServerOnlyAssetTypes; // 0xdc8 (0x10)
	struct TWeakObjectPtr<class UFortLoadingConfig> LoadingConfig; // 0xdd8 (0x28)
	struct TWeakObjectPtr<class UClass> DefaultCameraManager; // 0xe00 (0x28)
	struct TWeakObjectPtr<class UFortAnalyticsData> AnalyticsData; // 0xe28 (0x28)
	struct TWeakObjectPtr<class UFortGameplayTagData> GameplayTagData; // 0xe50 (0x28)
	struct TWeakObjectPtr<class UFortGameplayEffectData> GameplayEffectData; // 0xe78 (0x28)
	struct TWeakObjectPtr<class UFortTooltipMap> ObjClassToTooltipClassMap; // 0xea0 (0x28)
	struct TWeakObjectPtr<class UFortTokenToTextTable> TooltipTokenToTextTable; // 0xec8 (0x28)
	struct TWeakObjectPtr<class UFortTokenToAttributeTable> TooltipTokenToAttributeTable; // 0xef0 (0x28)
	float AutoPickupViewAngle; // 0xf18 (0x4)
	unsigned char unreflected_f1c[0x4]; // 0xf1c (0x4) 
	struct TWeakObjectPtr<class UCurveVector> PickupSplineCurve; // 0xf20 (0x28)
	struct TWeakObjectPtr<class USoundBase> PickupLandedSound; // 0xf48 (0x28)
	struct TWeakObjectPtr<class UFortRarityData> RarityData; // 0xf70 (0x28)
	struct TWeakObjectPtr<class UFortItemCategory> ItemCategories; // 0xf98 (0x28)
	struct TWeakObjectPtr<class UClass> AppActivationSoundMixManager; // 0xfc0 (0x28)
	struct TWeakObjectPtr<class USoundMix> LoadingScreenSoundMix; // 0xfe8 (0x28)
	struct TWeakObjectPtr<class USoundMix> BaseSoundMix; // 0x1010 (0x28)
	struct TWeakObjectPtr<class UClass> AbilityTargetingActorBlueprintClass; // 0x1038 (0x28)
	struct TWeakObjectPtr<class UClass> DefaultCooldownGameplayEffect; // 0x1060 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> MobileInteractionMaterial; // 0x1088 (0x28)
	struct TWeakObjectPtr<class UStaticMesh> MobileInteractionMesh; // 0x10b0 (0x28)
	struct TWeakObjectPtr<class UTexture2D> MobileInteractionIcons[0x4]; // 0x10d8 (0x28) (ARRAY) 
	class UClass* DoorSoundIndicatorClass; // 0x1178 (0x8)
	struct FSubGameInfo SubGameInfo[0x2]; // 0x1180 (0x10) (ARRAY) 
	struct FGameplayTagContainer PlacementActorUsedTags; // 0x11a0 (0x20)
	float QueuedAnnouncementPauseTimes[0x3]; // 0x11c0 (0x4) (ARRAY) 
	unsigned char unreflected_11cc[0x4]; // 0x11cc (0x4) 
	struct FCurveTableRowHandle WeakSpotEnabledTimeoutHandle; // 0x11d0 (0x10)
	float BuildingRetestSupportedByWorldDelay; // 0x11e0 (0x4)
	float BuildingStructuralCollapseDelay; // 0x11e4 (0x4)
	float BuildingStructuralCollapseDelayVariance; // 0x11e8 (0x4)
	float BuildingStructuralCollapseCellDistAdditiveDelay; // 0x11ec (0x4)
	float BuildingStructuralCollapseCellDistAdditiveDelayVariance; // 0x11f0 (0x4)
	float EditModeCancelDistance; // 0x11f4 (0x4)
	struct FCurveTableRowHandle BuildingCostHandles[0x6]; // 0x11f8 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingDeconCostMultHandles[0x6]; // 0x1258 (0x10) (ARRAY) 
	struct FCurveTableRowHandle PlayerBuildingDeconCostMultHandles[0x6]; // 0x12b8 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingInitialHealthPercentHandles[0x6]; // 0x1318 (0x10) (ARRAY) 
	struct FCurveTableRowHandle AthenaBuildingInitialHealthPercentHandles[0x6]; // 0x1378 (0x10) (ARRAY) 
	struct FCurveTableRowHandle AthenaBuildingDropPercentHandles[0x6]; // 0x13d8 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingRepairCostMultiplierHandles[0x6]; // 0x1438 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingBreakAnimDurationHandles[0x6]; // 0x1498 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingDestroyAnimDurationHandles[0x6]; // 0x14f8 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingPlacementAnimDurationHandles[0x6]; // 0x1558 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingCritDamagePctHandles[0x6]; // 0x15b8 (0x10) (ARRAY) 
	struct FCurveTableRowHandle BuildingCritDestroyAnimScaleCapHandles[0x6]; // 0x1618 (0x10) (ARRAY) 
	struct TWeakObjectPtr<class UFortBuildingAudioBank> BuildingAudioBank; // 0x1678 (0x28)
	struct TWeakObjectPtr<class UMaterialParameterCollection> StencilDefinitionCollection; // 0x16a0 (0x28)
	struct FText ResourceNames[0x6]; // 0x16c8 (0x18) (ARRAY) 
	struct FText BuildingTypeNames[0xc]; // 0x1758 (0x18) (ARRAY) 
	uint32_t LowOnBuildingResourcesWarningThreshold; // 0x1878 (0x4)
	unsigned char unreflected_187c[0x4]; // 0x187c (0x4) 
	struct TWeakObjectPtr<class UFortResourceItemDefinition> StoneItemDefinition; // 0x1880 (0x28)
	struct TWeakObjectPtr<class UFortResourceItemDefinition> WoodItemDefinition; // 0x18a8 (0x28)
	struct TWeakObjectPtr<class UFortResourceItemDefinition> MetalItemDefinition; // 0x18d0 (0x28)
	struct TWeakObjectPtr<class UFortResourceItemDefinition> GoldCurrencyItemDefinition; // 0x18f8 (0x28)
	struct TWeakObjectPtr<class UFortAmmoItemDefinition> PistolAmmoItemDefinition; // 0x1920 (0x28)
	struct TWeakObjectPtr<class UFortResourceItemDefinition> PermaniteItemDefinition; // 0x1948 (0x28)
	struct TWeakObjectPtr<class UFortAmmoItemDefinition> ShotgunAmmoItemDefinition; // 0x1970 (0x28)
	struct TWeakObjectPtr<class UFortAmmoItemDefinition> RifleAmmoItemDefinition; // 0x1998 (0x28)
	struct TWeakObjectPtr<class UFortAmmoItemDefinition> AssaultAmmoItemDefinition; // 0x19c0 (0x28)
	struct TWeakObjectPtr<class UFortAmmoItemDefinition> EnergyAmmoItemDefinition; // 0x19e8 (0x28)
	struct TWeakObjectPtr<class UFortInputData> FortInputData; // 0x1a10 (0x28)
	struct TWeakObjectPtr<class UFortMissionGenerationData> MissionGenerationData; // 0x1a38 (0x28)
	struct TWeakObjectPtr<class UFortMissionCSVEventMap> MissionCSVEventMap; // 0x1a60 (0x28)
	struct TWeakObjectPtr<class UFortPreferredItemSlotSettings> PreferredItemSlotSettings; // 0x1a88 (0x28)
	struct TWeakObjectPtr<class UFortGamepadSettings> GamepadSettingsDefault; // 0x1ab0 (0x28)
	struct TWeakObjectPtr<class UFortGamepadSettings> GamepadSettingsSony; // 0x1ad8 (0x28)
	struct TWeakObjectPtr<class UFortGamepadSettings> GamepadSettingsXboxOne; // 0x1b00 (0x28)
	struct TWeakObjectPtr<class UFortGamepadSettings> GamepadSettingsSwitch; // 0x1b28 (0x28)
	struct TWeakObjectPtr<class UFortGamepadSettingsV2> GamepadSettingsV2; // 0x1b50 (0x28)
	struct TWeakObjectPtr<class UFortTouchInputSettings> TouchInputSettings; // 0x1b78 (0x28)
	struct TMap<enum ECommonInputType, class UTexture2D*> InputTypeIcons; // 0x1ba0 (0x50)
	struct TWeakObjectPtr<class UDataTable> LootQuotaData; // 0x1bf0 (0x28)
	struct TWeakObjectPtr<class UDataTable> LootLevelData; // 0x1c18 (0x28)
	struct TWeakObjectPtr<class UClass> TeamIdentifications[0xff]; // 0x1c40 (0x28) (ARRAY) 
	struct FDataRegistryType SurfaceRatioByAffiliationRegistryType; // 0x4418 (0x4)
	struct FDataRegistryType SurfaceRatioBySurfaceCategoryRegistryType; // 0x441c (0x4)
	struct TArray<struct TWeakObjectPtr<class UClass>> MinigameTeamIdentifications; // 0x4420 (0x10)
	struct TWeakObjectPtr<class UDataTable> StatNamesToTrackTable; // 0x4430 (0x28)
	struct TWeakObjectPtr<class UFortAttributeLookupTable> AttributeLookupTable; // 0x4458 (0x28)
	struct TWeakObjectPtr<class UFortAttributeCategory> AttributeCategories; // 0x4480 (0x28)
	struct TWeakObjectPtr<class UClass> DamageNumbersActorClass; // 0x44a8 (0x28)
	struct TWeakObjectPtr<class UClass> WeakSpotBlueprintClass; // 0x44d0 (0x28)
	struct TWeakObjectPtr<class UPhysicalMaterial> WeakSpotWoodPhysicalMaterial; // 0x44f8 (0x28)
	struct TWeakObjectPtr<class UPhysicalMaterial> WeakSpotStonePhysicalMaterial; // 0x4520 (0x28)
	struct TWeakObjectPtr<class UPhysicalMaterial> WeakSpotMetalPhysicalMaterial; // 0x4548 (0x28)
	struct TWeakObjectPtr<class UFortTagUIDataLookupTable> UITagDataTable; // 0x4570 (0x28)
	struct TWeakObjectPtr<class UClass> PickupEffectBlueprintClass; // 0x4598 (0x28)
	struct TWeakObjectPtr<class UGameplayTagTableManager> TagTableManager; // 0x45c0 (0x28)
	struct TWeakObjectPtr<class UFortEditToolItemDefinition> EditToolItem; // 0x45e8 (0x28)
	struct TWeakObjectPtr<class UClass> BuildingToolClass; // 0x4610 (0x28)
	struct TWeakObjectPtr<class UClass> EditToolClass; // 0x4638 (0x28)
	struct TWeakObjectPtr<class UFortAbilitySet> GenericTrapAbilitySet; // 0x4660 (0x28)
	struct TWeakObjectPtr<class UFortAbilitySet> GenericVehicleAbilitySet; // 0x4688 (0x28)
	struct TWeakObjectPtr<class UFortAbilityTagRelationshipMapping> AbilityTagRelationshipMapping; // 0x46b0 (0x28)
	struct TWeakObjectPtr<class UFortWeaponRechargeAmmoItemMapping> WeaponRechargeAmmoItemMapping; // 0x46d8 (0x28)
	struct TWeakObjectPtr<class UFortDeathCauseFromTagMapping> FortDeathCauseFromTagMapping; // 0x4700 (0x28)
	struct TWeakObjectPtr<class UFortDeathCauseData> FortDeathCauseData; // 0x4728 (0x28)
	class UFortDeathCauseData* CompositeDeathCauseData; // 0x4750 (0x8)
	struct TWeakObjectPtr<class UFortSurfaceTypeToSurfaceTypeTagMapping> SurfaceTypeToSurfaceTypeTagMapping; // 0x4758 (0x28)
	struct TWeakObjectPtr<class UFortBakedPropertyMetadataCache> BakedPropertyMetadata; // 0x4780 (0x28)
	struct TWeakObjectPtr<class UClass> EnvironmentDamageTemplateGE; // 0x47a8 (0x28)
	struct TWeakObjectPtr<class UClass> FallingDamageTemplateGE; // 0x47d0 (0x28)
	struct TWeakObjectPtr<class UClass> VehicleImpactDamageTemplateGE; // 0x47f8 (0x28)
	struct TWeakObjectPtr<class UClass> HealingTemplateGE; // 0x4820 (0x28)
	struct TWeakObjectPtr<class UClass> FatalDamageTemplateGE; // 0x4848 (0x28)
	struct TWeakObjectPtr<class UClass> BasicNotificationClass; // 0x4870 (0x28)
	struct TWeakObjectPtr<class UClass> FriendNotificationClass; // 0x4898 (0x28)
	struct TWeakObjectPtr<class UClass> BattlePassPageUnlockNotificationClass; // 0x48c0 (0x28)
	struct TWeakObjectPtr<class UClass> TwitchNotificationClass; // 0x48e8 (0x28)
	struct TWeakObjectPtr<class UClass> ZoneModifiersAnnouncementClass; // 0x4910 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> HealthScreenDamagePostProcessMat; // 0x4938 (0x28)
	struct FScalableFloat bShowTrapInfoUiInAthena; // 0x4960 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> FallbackDeathParticles; // 0x4988 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> MobileOverrideDeathParticles; // 0x49b0 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> WallFallbackDeathParticles; // 0x49d8 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> FallbackConstructedEffect; // 0x4a00 (0x28)
	struct TWeakObjectPtr<class UParticleSystem> RepairEffect; // 0x4a28 (0x28)
	struct TWeakObjectPtr<class USoundBase> ConstructionCompleteSound; // 0x4a50 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> DamageMaterial; // 0x4a78 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> BounceCurve; // 0x4aa0 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> BlueprintParentMaterial; // 0x4ac8 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> EditCurve; // 0x4af0 (0x28)
	struct TWeakObjectPtr<class UCurveVector> BlueprintDamageCurve; // 0x4b18 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> FullHealthAnimCurve; // 0x4b40 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> RepairAnimCurve; // 0x4b68 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> DynamicLODEffectCurve; // 0x4b90 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> InteractFullBounceCurve; // 0x4bb8 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> InteractFullBounceNormalCurve; // 0x4be0 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> InteractEmptyBounceCurve; // 0x4c08 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> InteractEmptyBounceNormalCurve; // 0x4c30 (0x28)
	struct FFortReleaseVersion DynamicBuildingDestructionMinVersion; // 0x4c58 (0x4)
	unsigned char unreflected_4c5c[0x4]; // 0x4c5c (0x4) 
	struct TWeakObjectPtr<class UMaterialInterface> DynamicBuildingDestructionMaterial; // 0x4c60 (0x28)
	struct FDynamicBuildingDestructionParamNamesConfig DynamicBuildingDestructionParamNamesConfig; // 0x4c88 (0x60)
	struct FDynamicBuildingDestructionConfig* DynamicBuildingDestructionConfig; // 0x4ce8 (0x8)
	struct TWeakObjectPtr<class UNiagaraSystem> DynamicBuildingDestructionNiagaraSystem; // 0x4cf0 (0x28)
	float ConversationSoundRange; // 0x4d18 (0x4)
	unsigned char unreflected_4d1c[0x4]; // 0x4d1c (0x4) 
	struct TWeakObjectPtr<class UWorld> DefaultLobbyBackgroundLevel; // 0x4d20 (0x28)
	struct TWeakObjectPtr<class UFortPhysicsObjectAssetSetupData> PhysicsObjectAssetSetupData; // 0x4d48 (0x28)
	struct TWeakObjectPtr<class UClass> PhysicsObjectImpactDamageTemplateGE; // 0x4d70 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortGameData.GetHighlightStencilParamNames (Underlying native function: GetHighlightStencilParamNames 0x88c139c)
	static struct TArray<struct FName> GetHighlightStencilParamNames(); // (Final | Native | Static | Public)

	// Function /Script/FortniteGame.FortGameData.GetHighlightParamProfileNames (Underlying native function: GetHighlightParamProfileNames 0x88c1328)
	static struct TArray<struct FName> GetHighlightParamProfileNames(); // (Final | Native | Static | Public)
};

