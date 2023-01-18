// Class /Script/FortniteGame.BuildingContainer
// Size: 0x10d0
class ABuildingContainer : public ABuildingTimeOfDayLights
{
	unsigned char unreflected_e00[0x10]; // 0xe00 (0x10) 
	struct FMulticastInlineDelegate OnContainerSearchedStateChangedClient; // 0xe10 (0x10)
	struct FMulticastInlineDelegate OnContainerRandomUpgradeApplied; // 0xe20 (0x10)
	class USoundCue* SearchingSoundCueLoop; // 0xe30 (0x8)
	class USoundCue* LootRepeatSoundCue; // 0xe38 (0x8)
	class USoundCue* OnDamageSoundCue; // 0xe40 (0x8)
	class USoundCue* OnDeathSoundCue; // 0xe48 (0x8)
	class UStaticMesh* SearchedMesh; // 0xe50 (0x8)
	struct FGameplayTagContainer AdditionalPickupTags; // 0xe58 (0x20)
	enum EFortPickupSpawnSource SpawnSourceOverride; // 0xe78 (0x1)
	unsigned char unreflected_e79[0x7]; // 0xe79 (0x7) 
	struct TArray<class UMaterialInterface*> SearchedMaterialOverrides; // 0xe80 (0x10)
	struct TArray<struct FLootTierGroupTagOverride> LootTierGroupTagOverrideData; // 0xe90 (0x10)
	struct FName SearchLootTierGroup; // 0xea0 (0x4)
	struct FName ContainerLootTierKey; // 0xea4 (0x4)
	struct TArray<struct FRandomUpgradeData> PotentialRandomUpgrades; // 0xea8 (0x10)
	struct FChosenQuotaInfo* SearchLootTierChosenQuotaInfo; // 0xeb8 (0x8)
	int ReplicatedLootTier; // 0xec0 (0x4)
	int ChosenRandomUpgrade; // 0xec4 (0x4)
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0xec8 (0x98)
	struct FVector MarkerPositionOffset; // 0xf60 (0x18)
	struct FVector2D NumItemsToDropRange; // 0xf78 (0x10)
	float SearchBounceRadiusOverride; // 0xf88 (0x4)
	float LootNoiseRange; // 0xf8c (0x4)
	class UFortWorldItemDefinition* LootTestingData; // 0xf90 (0x8)
	struct FVector LootSpawnLocation; // 0xf98 (0x18)
	struct FVector LootFinalLocation; // 0xfb0 (0x18)
	struct FVector InstancedLootTossDirection; // 0xfc8 (0x18)
	float InstancedLootTossSpeed; // 0xfe0 (0x4)
	float InstancedLootTossConeHalfAngle; // 0xfe4 (0x4)
	struct FVector LootSpawnLocationAthena; // 0xfe8 (0x18)
	struct FRotator LootTossDirectionAthena; // 0x1000 (0x18)
	float LootTossSpeedAthena; // 0x1018 (0x4)
	float LootTossConeHalfAngleAthena; // 0x101c (0x4)
	enum EFortRarity HighestRarity; // 0x1020 (0x1)
	unsigned char bSpawnedActor; // 0x1021 (0x1)
	unsigned char bCanBeMarked; // 0x1021 (0x1)
	unsigned char bBlockMarking; // 0x1021 (0x1)
	unsigned char bUseLootPropertiesAthena; // 0x1021 (0x1)
	unsigned char bAlwaysShowContainer; // 0x1021 (0x1)
	unsigned char bAlwaysMaintainLoot; // 0x1021 (0x1)
	unsigned char bDestroyContainerOnSearch; // 0x1021 (0x1)
	unsigned char bForceHidePickupMinimapIndicator; // 0x1021 (0x1)
	unsigned char bForceSpawnLootOnDestruction; // 0x1022 (0x1)
	unsigned char bForceTossLootOnSpawn; // 0x1022 (0x1)
	unsigned char bAlreadySearched; // 0x1022 (0x1)
	unsigned char bGivePickupsDirectlyToPlayer; // 0x1022 (0x1)
	unsigned char bDoNotDropLootOnDestruction; // 0x1022 (0x1)
	unsigned char bSkipRollForDestruction; // 0x1022 (0x1)
	unsigned char bBuriedTreasure; // 0x1023 (0x1)
	unsigned char bHasRaisedTreasure; // 0x1023 (0x1)
	unsigned char bStartAlreadySearchedAthena; // 0x1023 (0x1)
	unsigned char bRegenerateLoot; // 0x1023 (0x1)
	unsigned char bUseLocationForDrop; // 0x1023 (0x1)
	float LootedWeaponsDurabilityModifier; // 0x1024 (0x4)
	struct FFortSearchBounceData SearchBounceData; // 0x1028 (0x28)
	struct FCurveTableRowHandle SearchSpeed; // 0x1050 (0x10)
	struct FText SearchText; // 0x1060 (0x18)
	unsigned char unreflected_1078[0x20]; // 0x1078 (0x20) 
	class UCurveFloat* CurrentInteractBounceCurve; // 0x1098 (0x8)
	class UCurveFloat* CurrentInteractBounceNormalCurve; // 0x10a0 (0x8)
	float SavedReservedRandomValueResult; // 0x10a8 (0x4)
	float TimeUntilLootRegenerates; // 0x10ac (0x4)
	unsigned char unreflected_10b0[0x18]; // 0x10b0 (0x18) 
	class UFortSoundIndicatorComponent* SoundIndicatorComponent; // 0x10c8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingContainer.StopAudiovisualIndicator (Underlying native function: StopAudiovisualIndicator 0x1317bf0)
	void StopAudiovisualIndicator(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.StartAudiovisualIndicator (Underlying native function: StartAudiovisualIndicator 0x270b368)
	void StartAudiovisualIndicator(class UAudioComponent*& ForComponent, enum EFortSoundIndicatorTypes& Type, float& Interval); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.SetSearchLootTierGroup (Underlying native function: SetSearchLootTierGroup 0x85befd4)
	void SetSearchLootTierGroup(struct FName& InSearchLootTierGroup, bool& bReRollForLootExistence, bool& bIgnorePotentialRandomUpgrades); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.RaiseTreasure (Underlying native function: RaiseTreasure 0x85be394)
	void RaiseTreasure(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.OnSetSearched (Has no native function)
	void OnSetSearched(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnSearchInterrupted (Has no native function)
	void OnSearchInterrupted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnRep_LootTier (Underlying native function: OnRep_LootTier 0x25a08dc)
	void OnRepLootTier(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingContainer.OnRep_ChosenRandomUpgrade (Underlying native function: OnRep_ChosenRandomUpgrade 0x85be11c)
	void OnRepChosenRandomUpgrade(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingContainer.OnRep_bAlreadySearched (Underlying native function: OnRep_bAlreadySearched 0x1c65b98)
	void OnRepbAlreadySearched(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.BuildingContainer.OnRaiseTreasure (Has no native function)
	void OnRaiseTreasure(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnLootReset (Has no native function)
	void OnLootReset(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnLootRepeat (Has no native function)
	void OnLootRepeat(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnLoot (Has no native function)
	void OnLoot(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnBeginSearch (Has no native function)
	void OnBeginSearch(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.OnAuthorityRandomUpgradeApplied (Has no native function)
	void OnAuthorityRandomUpgradeApplied(struct FName& UpgradeTierGroup); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.GetSearchingPawn (Underlying native function: GetSearchingPawn 0x85bd6cc)
	class AFortPlayerPawn* GetSearchingPawn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.GetOwningControllerForAnalytics (Has no native function)
	class AFortPlayerControllerAthena* GetOwningControllerForAnalytics(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.BuildingContainer.GetLootTier (Underlying native function: GetLootTier 0x85bd5ec)
	int GetLootTier(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.GetChosenRandomUpgrade (Underlying native function: GetChosenRandomUpgrade 0x85bd15c)
	int GetChosenRandomUpgrade(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingContainer.EnableBacchusHighlight (Has no native function)
	void EnableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.DisableBacchusHighlight (Has no native function)
	void DisableBacchusHighlight(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingContainer.BP_SpawnLoot (Underlying native function: BP_SpawnLoot 0x85bc8d0)
	bool BPSpawnLoot(class AFortPlayerPawn*& PlayerPawn); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.BP_SetAlreadySearched (Underlying native function: BP_SetAlreadySearched 0x85bc84c)
	void BPSetAlreadySearched(bool& bInAlreadySearched); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.BP_IsAlreadySearched (Underlying native function: BP_IsAlreadySearched 0x85bc824)
	bool BPIsAlreadySearched(); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.BuildingContainer.BP_FinishSpawning (Underlying native function: BP_FinishSpawning 0x85bc670)
	void BPFinishSpawning(struct FName& InSearchLootTierGroup, struct FGameplayTagContainer& InGameplayTagContainer, struct FTransform& InTransform); // (Final | BlueprintAuthorityOnly | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingContainer.BounceContainer (Underlying native function: BounceContainer 0x197c8dc)
	void BounceContainer(); // (0x00000002 | Native | Public)
};

