// Class /Script/FortniteGame.FortMissionLibrary
// Size: 0x28
class UFortMissionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortMissionLibrary.UnregisterForMissionEvents (Underlying native function: UnregisterForMissionEvents 0x8b316b8)
	static bool UnregisterForMissionEvents(class AActor*& ActorToUnregister, struct FGuid& MissionGuid); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.TeleportPlayerPawn (Underlying native function: TeleportPlayerPawn 0x8b31520)
	static bool TeleportPlayerPawn(class UObject*& WorldContextObject, class AFortPlayerPawn*& PlayerPawn, struct FVector& DestLocation, struct FRotator& DestRotation, bool& bIgnoreCollision, bool& bIgnoreSupplementalKillVolumeSweep); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.TeleportPawnNearLocation (Underlying native function: TeleportPawnNearLocation 0x8b31440)
	static void TeleportPawnNearLocation(class UObject*& WorldContextObject, class AFortPawn*& Pawn, struct FVector& DestLocation); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.StopAIEncounterAgainstActor (Underlying native function: StopAIEncounterAgainstActor 0x8b31374)
	static void StopAIEncounterAgainstActor(class UObject*& WorldContextObject, class AActor*& TargetActor); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.StopAIEncounter (Underlying native function: StopAIEncounter 0x8b31268)
	static void StopAIEncounter(class UObject*& WorldContextObject, class UFortAIEncounterInfo*& ActiveEncounter, enum EFortObjectiveStatus& ObjectiveStatus); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.StartPlayingMission (Underlying native function: StartPlayingMission 0x8b31170)
	static void StartPlayingMission(class UObject*& WorldContextObject, struct FGuid& MissionGuid); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.StartAIEncounterWithEnvironmentQuery (Underlying native function: StartAIEncounterWithEnvironmentQuery 0x8b30d20)
	static class UFortAIEncounterInfo* StartAIEncounterWithEnvironmentQuery(class UObject*& WorldContextObject, struct FString& AssociatedMissionName, class UClass*& EncounterTemplate, class AActor*& TargetActor, struct FEncounterEnvironmentQueryInfo& EnvironmentQueryInfo, class AActor*& QueryActor, struct FGameplayTagContainer& InjectedTags, struct FFortEncounterSettings& EncounterSettings, int& ActivationDelay); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.StartAIEncounter (Underlying native function: StartAIEncounter 0x8b30988)
	static class UFortAIEncounterInfo* StartAIEncounter(class UObject*& WorldContextObject, struct FString& AssociatedMissionName, class UClass*& EncounterTemplate, class AActor*& TargetActor, struct FGameplayTagContainer& InjectedTags, struct FFortEncounterSettings& EncounterSettings, int& ActivationDelay); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.SpawnPlacementMissionActor (Underlying native function: SpawnPlacementMissionActor 0x8b306dc)
	static bool SpawnPlacementMissionActor(class UObject*& WorldContextObject, class UClass*& ActorToSpawn, struct FVector& SpawnLocation, struct FRotator& SpawnRotation, class AActor*& PlacementLocationActor, class AActor*& OutSpawnedActor); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.SpawnMissionItemPickupInWorld (Underlying native function: SpawnMissionItemPickupInWorld 0x8b30504)
	static class AFortPickup* SpawnMissionItemPickupInWorld(class UObject*& WorldContextObject, struct FGuid& MissionGuid, class UFortWorldItemDefinition*& ItemDefinition, int& NumberToSpawn, struct FVector& Position, struct FVector& Direction, int& OverrideMaxStackCount); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.SpawnMissionItemPickup (Underlying native function: SpawnMissionItemPickup 0x8b30360)
	static class AFortPickup* SpawnMissionItemPickup(class UObject*& WorldContextObject, struct FGuid& MissionGuid, class UFortMissionItemDefinition*& MissionItemDefinition, struct FVector& StartPosition, class AFortPawn*& TargetPawn); // (Final | Native | Static | Public | HasDefaults)

	// Function /Script/FortniteGame.FortMissionLibrary.SpawnBuildingActorAtTransform (Underlying native function: SpawnBuildingActorAtTransform 0x8b301a4)
	static class ABuildingActor* SpawnBuildingActorAtTransform(class UObject*& WorldContextObject, struct FGuid& MissionGuid, class UClass*& BuildingClass, struct FTransform& Transform); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.SpawnAtPlacementActorsHelper (Underlying native function: SpawnAtPlacementActorsHelper 0x8b2fe8c)
	static struct TArray<class AActor*> SpawnAtPlacementActorsHelper(class UObject*& WorldContextObject, class UClass*& Entries, bool& bSucceeded); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.SpawnAndCollectPlayerPickups (Underlying native function: SpawnAndCollectPlayerPickups 0x8b2fd30)
	static void SpawnAndCollectPlayerPickups(class UObject*& WorldContextObject, class AFortPlayerController*& PlayerController, struct FVector& StartPosition, struct FName& LootTierGroup, int& LootTier); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.ShouldUseAlternateAIDirectorBalance (Underlying native function: ShouldUseAlternateAIDirectorBalance 0x8b2fd0c)
	static bool ShouldUseAlternateAIDirectorBalance(); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.SetWorldSavingEnabled (Underlying native function: SetWorldSavingEnabled 0x8b2fc28)
	static void SetWorldSavingEnabled(class UObject*& WorldContextObject, bool& bEnabled); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.SetOnlinePresenceDoNotDisturb (Underlying native function: SetOnlinePresenceDoNotDisturb 0x8b2e5a0)
	static void SetOnlinePresenceDoNotDisturb(class UObject*& WorldContextObject, bool& bDoNotDisturb, class AFortPlayerController*& SpecificPlayer); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.RegisterMissionInfoUIActor (Underlying native function: RegisterMissionInfoUIActor 0x8b2e288)
	static bool RegisterMissionInfoUIActor(class AActor*& AttachmentActor, struct FGuid& MissionGuid, struct FVector& AttachementOffset, float& MaxVisibleDistance); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.RegisterForMissionEvents (Underlying native function: RegisterForMissionEvents 0x8b2e17c)
	static bool RegisterForMissionEvents(class AActor*& ActorToRegister, struct FGuid& MissionGuid); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.PollActorsInVolume (Underlying native function: PollActorsInVolume 0x8b2dc40)
	static int PollActorsInVolume(class UObject*& WorldContextObject, class UBoxComponent*& VolumeBoxComponent, struct TEnumAsByte<EPollActorsInVolumeTypes>& PollBuildingTypes, class UClass*& ActorClassToPoll); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.PingMinimap (Underlying native function: PingMinimap 0x8b2daec)
	static void PingMinimap(class UObject*& WorldContextObject, struct FVector& WorldLocation, struct FLinearColor& PingColor, struct TEnumAsByte<EFortTeam>& RequiredTeam); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.NumBluGloFromPlayerState (Underlying native function: NumBluGloFromPlayerState 0x8b2d6ec)
	static int NumBluGloFromPlayerState(class AFortPlayerStateZone*& PlayerState); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.NumBluGloFromPlayerPawn (Underlying native function: NumBluGloFromPlayerPawn 0x8b2d628)
	static int NumBluGloFromPlayerPawn(class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.LoadMission (Underlying native function: LoadMission 0x8b2d36c)
	static void LoadMission(class UObject*& WorldContextObject, class UFortMissionInfo*& MissionInfo); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.IsUsingNewMissionGeneration (Underlying native function: IsUsingNewMissionGeneration 0x8b2d2e4)
	static bool IsUsingNewMissionGeneration(class UObject*& WorldContextObject); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.HasTags (Underlying native function: HasTags 0x8b2cf80)
	static bool HasTags(struct FGameplayTagContainer& ContainerToCheck, struct FGameplayTagContainer& TagsToCheck, bool& bRequireAll, bool& bCountEmptyAsMatch); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GiveMissionSchematicItemDirectlyToPlayer (Underlying native function: GiveMissionSchematicItemDirectlyToPlayer 0x8b2c5d0)
	static bool GiveMissionSchematicItemDirectlyToPlayer(class UObject*& WorldContextObject, class AFortPlayerController*& TargetPlayer, struct FGuid& MissionGuid, class UFortSchematicItemDefinition*& SchematicDefinition); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GiveMissionRewardsToPlayerAsPickups (Underlying native function: GiveMissionRewardsToPlayerAsPickups 0x8b2c3f4)
	static void GiveMissionRewardsToPlayerAsPickups(class UObject*& WorldContextObject, struct FGuid& MissionGuid, class AFortPlayerController*& PlayerController, struct FVector& StartPosition, float& Radius, struct FName& LootTierGroup, int& LootTier); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GiveMissionRewardsToPlayer (Underlying native function: GiveMissionRewardsToPlayer 0x8b2c164)
	static void GiveMissionRewardsToPlayer(class UObject*& WorldContextObject, struct FGuid& EventGuid, class AFortPlayerController*& PlayerController, struct FText& TitleText, struct FText& DescriptionText, struct FName& LootTierGroup, int& LootTier, float& RewardDisplayTime); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetTieredWaveSet (Underlying native function: GetTieredWaveSet 0x8b2be34)
	static void GetTieredWaveSet(struct FName& TieredWaveCollectionName, int& Tier, struct FTieredWaveSetCollectionData& WaveCollectionInfo, struct TArray<struct FTieredWaveSetData>& OutWaveData); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetTieredWaveBaseWaveLength (Underlying native function: GetTieredWaveBaseWaveLength 0x8b2bcf0)
	static void GetTieredWaveBaseWaveLength(class UObject*& WorldContextObject, struct FName& BaseWaveLengthRowName, float& OverrideDifficulty, float& OutBaseWaveLength); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetTieredWaveBaseNumKills (Underlying native function: GetTieredWaveBaseNumKills 0x8b2bcf0)
	static void GetTieredWaveBaseNumKills(class UObject*& WorldContextObject, struct FName& BaseNumOfKillsRowName, float& OverrideDifficulty, float& OutBaseNumKills); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetTieredWaveBaseNumKillPoints (Underlying native function: GetTieredWaveBaseNumKillPoints 0x8b2bcf0)
	static void GetTieredWaveBaseNumKillPoints(class UObject*& WorldContextObject, struct FName& BaseNumOfKillPointsRowName, float& OverrideDifficulty, float& OutBaseNumKillPoints); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetPrimaryMission (Underlying native function: GetPrimaryMission 0x8b2b760)
	static class AFortMission* GetPrimaryMission(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetMissionHUDTextLineHeightEstimate (Underlying native function: GetMissionHUDTextLineHeightEstimate 0x8b2b62c)
	static float GetMissionHUDTextLineHeightEstimate(struct FText& Text); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetMissionFromGuid (Underlying native function: GetMissionFromGuid 0x8b2b558)
	static class AFortMission* GetMissionFromGuid(class UObject*& WorldContextObject, struct FGuid& MissionGuid); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetMissionActorsInVectorDirection (Underlying native function: GetMissionActorsInVectorDirection 0x8b2b340)
	static struct TArray<class AActor*> GetMissionActorsInVectorDirection(class UObject*& WorldContextObject, class UClass*& ActorSubclass, struct FVector& StartLocation, struct FVector& DirectionToLookForActors, float& Angle, float& MaxDistance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMissionLibrary.GetMissionActorsInEncounterDirection (Underlying native function: GetMissionActorsInEncounterDirection 0x8b2b138)
	static struct TArray<class AActor*> GetMissionActorsInEncounterDirection(class UObject*& WorldContextObject, class UClass*& ActorSubclass, struct FVector& StartLocation, struct TEnumAsByte<EFortEncounterDirection>& DirectionToLookForActors, float& Angle, float& MaxDistance); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMissionLibrary.GetLowestPlayerAccountLevel (Underlying native function: GetLowestPlayerAccountLevel 0x8b2aff0)
	static int GetLowestPlayerAccountLevel(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetLocalPlayerAccountLevel (Underlying native function: GetLocalPlayerAccountLevel 0x8b2af70)
	static int GetLocalPlayerAccountLevel(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetIronCityWorldDifficulty (Underlying native function: GetIronCityWorldDifficulty 0x8b2aed8)
	static float GetIronCityWorldDifficulty(int& AccountLevel); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetIronCityMinMaxPowerLevels (Underlying native function: GetIronCityMinMaxPowerLevels 0x8b2adcc)
	static bool GetIronCityMinMaxPowerLevels(int& DifficultyLevel, float& MinPowerLevel, float& MaxPowerLevel); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetBluGloManager (Underlying native function: GetBluGloManager 0x8b2ad0c)
	static class AFortBluGloManager* GetBluGloManager(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetAveragePlayerAccountLevel (Underlying native function: GetAveragePlayerAccountLevel 0x8b2ac8c)
	static int GetAveragePlayerAccountLevel(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.GetAllLoadedMissions (Underlying native function: GetAllLoadedMissions 0x8b2abd0)
	static struct TArray<class AFortMission*> GetAllLoadedMissions(class UObject*& WorldContextObject); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.FindOriginatingPlacementActor (Underlying native function: FindOriginatingPlacementActor 0x8b2ab48)
	static class AFortPlacementActor* FindOriginatingPlacementActor(class ABuildingActor*& BuildingActor); // (Final | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.FindActorsWithTags (Underlying native function: FindActorsWithTags 0x8b2aa44)
	static struct TArray<class ABuildingActor*> FindActorsWithTags(class UObject*& WorldContextObject, struct FGameplayTagContainer& Tags); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.ExecuteMissionEventEx (Underlying native function: ExecuteMissionEventEx 0x8b2a5c4)
	static void ExecuteMissionEventEx(class UObject*& WorldContextObject, struct FFortMissionEventName*& EventType, struct FGuid& MissionGuid, struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams*& Params, bool& DONOTUSETHISORVARIABLESBELOW, class UObject*& EventFocus, class UDataAsset*& EventContent, class AActor*& EventInstigator, int& GenericInt, float& GenericFloat, struct FText& GenericText, struct FGameplayTagContainer& GameplayTags); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.ExecuteMissionEvent (Underlying native function: ExecuteMissionEvent 0x8b2a114)
	static void ExecuteMissionEvent(class UObject*& WorldContextObject, struct FName& EventType, struct FGuid& MissionGuid, struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams*& Params, bool& DONOTUSETHISORVARIABLESBELOW, class UObject*& EventFocus, class UDataAsset*& EventContent, class AActor*& EventInstigator, int& GenericInt, float& GenericFloat, struct FText& GenericText, struct FGameplayTagContainer& GameplayTags); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.CreateMissionEvent (Underlying native function: CreateMissionEvent 0x8b29c3c)
	static struct FFortMissionEvent CreateMissionEvent(class UObject*& WorldContextObject, struct FName& EventType, struct FGuid& MissionGuid, struct FGameplayTagContainer& ObjectiveHandle, class UFortMissionEventParams*& Params, bool& DONOTUSETHISORVARIABLESBELOW, class UObject*& EventFocus, class UDataAsset*& EventContent, class AActor*& EventInstigator, int& GenericInt, float& GenericFloat, struct FText& GenericText, struct FGameplayTagContainer& GameplayTags); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortMissionLibrary.CreateDynamicBuildingDeconstructor (Underlying native function: CreateDynamicBuildingDeconstructor 0x8b29a98)
	static void CreateDynamicBuildingDeconstructor(class UObject*& WorldContextObject, struct FVector& Origin, struct FVector& BoxExtent, bool& bIgnoreMissionActors, bool& bShrinkAndDestroy); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.AdjustWaveBasedGameDifficulty (Underlying native function: AdjustWaveBasedGameDifficulty 0x8b28b3c)
	static void AdjustWaveBasedGameDifficulty(class UObject*& WorldContextObject, float& fDifficultyAddMod); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.AddCompletionTagToMission (Underlying native function: AddCompletionTagToMission 0x8b288bc)
	static void AddCompletionTagToMission(class UObject*& WorldContextObject, struct FGuid& MissionGuid, struct FGameplayTag& NewCompletionTag); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortMissionLibrary.AddCompletionTagsToMission (Underlying native function: AddCompletionTagsToMission 0x8b289f8)
	static void AddCompletionTagsToMission(class UObject*& WorldContextObject, struct FGuid& MissionGuid, struct FGameplayTagContainer& NewCompletionTagContainer); // (Final | BlueprintAuthorityOnly | Native | Static | Public | HasDefaults | BlueprintCallable)
};

