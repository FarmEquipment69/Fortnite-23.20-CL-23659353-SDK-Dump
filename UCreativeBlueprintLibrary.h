// Class /Script/FortniteGame.CreativeBlueprintLibrary
// Size: 0x28
class UCreativeBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.UpdateInGameMapHeatmapTexture (Underlying native function: UpdateInGameMapHeatmapTexture 0x87862c0)
	static void UpdateInGameMapHeatmapTexture(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.ShouldUseCabinModeLabel (Underlying native function: ShouldUseCabinModeLabel 0x8785be8)
	static bool ShouldUseCabinModeLabel(struct FText& BaseLabel, struct FString& Label); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.SetUserOptionOverrideValue (Underlying native function: SetUserOptionOverrideValue 0x87853fc)
	static void SetUserOptionOverrideValue(struct TArray<struct FString>& MapPaths, struct FString& OptionKey, struct FString& NewValue); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.SetLoopingTimer_MaxOncePerFrame (Underlying native function: SetLoopingTimer_MaxOncePerFrame 0x5d2cef0)
	static struct FTimerHandle* SetLoopingTimerMaxOncePerFrame(struct FDelegate& Delegate, float& Time, float& InitialStartDelay, float& InitialStartDelayVariance); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.SegmentSphereIntersection (Underlying native function: SegmentSphereIntersection 0x8783d18)
	static struct TArray<struct FVector> SegmentSphereIntersection(struct FVector& SegmentStart, struct FVector& SegmentEnd, struct FVector& SphereOrigin, float& SphereRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.SegmentCylinderIntersection (Underlying native function: SegmentCylinderIntersection 0x8783b54)
	static struct TArray<struct FVector> SegmentCylinderIntersection(struct FVector& SegmentStart, struct FVector& SegmentEnd, struct FVector& CylinderOrigin, float& CylinderRadius); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.ResavePIDs (Underlying native function: ResavePIDs 0x82b3d18)
	static void ResavePIDs(struct TArray<struct FString>& PIDPaths); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.LogHUDMessageWarning (Underlying native function: LogHUDMessageWarning 0x87824d8)
	static void LogHUDMessageWarning(struct FString& InString); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.LogCreativeStreamingMessage (Underlying native function: LogCreativeStreamingMessage 0x8782368)
	static void LogCreativeStreamingMessage(struct FString& message); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsWhiteListedItemDefinition (Underlying native function: IsWhiteListedItemDefinition 0x8781d38)
	static bool IsWhiteListedItemDefinition(class UFortItemDefinition*& ItemDefinition, class AActor*& ActorContext); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsValkyrieLink (Underlying native function: IsValkyrieLink 0x8781c74)
	static bool IsValkyrieLink(struct FCreativeLoadedLinkData& InLinkData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsUseRestrictionComponentDebuggingEnabled (Underlying native function: IsUseRestrictionComponentDebuggingEnabled 0x8781c58)
	static bool IsUseRestrictionComponentDebuggingEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsObjectInModeratedIsland (Underlying native function: IsObjectInModeratedIsland 0x5d2c930)
	static bool IsObjectInModeratedIsland(class UObject*& Object); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsLocationRelevantToActor (Underlying native function: IsLocationRelevantToActor 0x87818e8)
	static bool IsLocationRelevantToActor(class AActor*& PrimaryActor, struct FVector& Location); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsIslandCurated (Underlying native function: IsIslandCurated 0x8781450)
	static bool IsIslandCurated(class UWorld*& World, struct FString& IslandMnemonic); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsInCabinMode (Underlying native function: IsInCabinMode 0x87813a4)
	static bool IsInCabinMode(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsDirectBindingEnabled (Underlying native function: IsDirectBindingEnabled 0x5d2c830)
	static bool IsDirectBindingEnabled(struct TScriptInterface<class IFortUserOptionSettings>& UserOptionSettings, enum EFortCreativeEventSystemType& FallbackType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsCreativeDevice (Underlying native function: IsCreativeDevice 0x5d2c790)
	static bool IsCreativeDevice(class ABuildingActor*& BuildingActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsBlockListedItemDefinition (Underlying native function: IsBlockListedItemDefinition 0x878122c)
	static bool IsBlockListedItemDefinition(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsAPreviewActor (Underlying native function: IsAPreviewActor 0x8780f34)
	static bool IsAPreviewActor(class AActor*& Actor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsActorRelevantToActor (Underlying native function: IsActorRelevantToActor 0x87810a0)
	static bool IsActorRelevantToActor(class AActor*& PrimaryActor, class AActor*& ActorToCheckIfRelevant); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsActorLocked (Underlying native function: IsActorLocked 0x5d2c6f0)
	static bool IsActorLocked(class AActor*& ActorToCheck); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsActorInSavableSpace (Underlying native function: IsActorInSavableSpace 0x8780fb4)
	static bool IsActorInSavableSpace(class AActor*& Actor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.IsActorInModeratedIsland (Underlying native function: IsActorInModeratedIsland 0x5d2c650)
	static bool IsActorInModeratedIsland(class AActor*& RelevantActor); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.HasClassesVisibleToUI (Underlying native function: HasClassesVisibleToUI 0x8780c94)
	static bool HasClassesVisibleToUI(class AFortMinigame*& Minigame); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.HandleActorExitedContainer (Underlying native function: HandleActorExitedContainer 0x87805e0)
	static void HandleActorExitedContainer(class AActor*& Actor, class UActorComponent*& ActorComponent, class APawn*& InstigatorPawn, class AActor*& Container); // (Final | Native | Static | Public)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.HandleActorEnteredContainer (Underlying native function: HandleActorEnteredContainer 0x87804ac)
	static void HandleActorEnteredContainer(class AActor*& Actor, class UActorComponent*& ActorComponent, class APawn*& InstigatorPawn, class AActor*& Container); // (Final | Native | Static | Public)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetXpCalibrationPhase (Underlying native function: GetXpCalibrationPhase 0x87803e8)
	static enum EDynamicXpCalibrationPhase GetXpCalibrationPhase(struct FCreativeLoadedLinkData& LinkData); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetPlayerStateFromUniqueNetID (Underlying native function: GetPlayerStateFromUniqueNetID 0x8780044)
	static class AFortPlayerState* GetPlayerStateFromUniqueNetID(class UObject*& WorldContextObject, struct FUniqueNetIdRepl& NetIDToGet); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetNumCuratedIslandCodes (Underlying native function: GetNumCuratedIslandCodes 0x877fd54)
	static int GetNumCuratedIslandCodes(class UWorld*& World); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetNameFromCollisionProfile (Underlying native function: GetNameFromCollisionProfile 0x877fcb8)
	static struct FName GetNameFromCollisionProfile(struct FCollisionProfileName& InCollisionProfile); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetMinigameManager (Underlying native function: GetMinigameManager 0x877fbd8)
	static class UFortMinigameManager* GetMinigameManager(class AController*& Controller, enum ESubGame& SubGame); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetFortLevelSaveComponentForActor (Underlying native function: GetFortLevelSaveComponentForActor 0x877fa20)
	static class UFortLevelSaveComponent* GetFortLevelSaveComponentForActor(class AActor*& ContextActor); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetExperienceType (Underlying native function: GetExperienceType 0x877f9a0)
	static enum EFortVolumeType GetExperienceType(class AActor*& ExperienceContextActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCuratedIslandMnemonicFromMatchAssignment (Underlying native function: GetCuratedIslandMnemonicFromMatchAssignment 0x877f8b4)
	static bool GetCuratedIslandMnemonicFromMatchAssignment(class UObject*& WorldContextObject, struct FOnlineLinkId& OutLinkId); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCuratedIslandMnemonicForLinkCode (Underlying native function: GetCuratedIslandMnemonicForLinkCode 0x877f698)
	static bool GetCuratedIslandMnemonicForLinkCode(class UWorld*& World, int& LinkCodeNumber, bool& bLoadRandomLinkCode, struct FString& OutMnemonic); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCuratedHubMnemonic (Underlying native function: GetCuratedHubMnemonic 0x877f4f4)
	static bool GetCuratedHubMnemonic(class UWorld*& World, struct FString& OutMnemonic); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCreativeIslandMatchmakingMaxPlayers (Underlying native function: GetCreativeIslandMatchmakingMaxPlayers 0x5d2c4e0)
	static int GetCreativeIslandMatchmakingMaxPlayers(class AFortPlayerControllerAthena*& PlayerControllerAthena); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCreativeIslandCode (Underlying native function: GetCreativeIslandCode 0x877f3bc)
	static struct FString GetCreativeIslandCode(class AFortPlayerControllerAthena*& PlayerControllerAthena); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCreativeGeneralThrottleManager (Underlying native function: GetCreativeGeneralThrottleManager 0x877f300)
	static class UFortCreativeGeneralThrottleManager* GetCreativeGeneralThrottleManager(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCreativeBetaPermissionTags (Underlying native function: GetCreativeBetaPermissionTags 0x877f1d8)
	static struct TArray<struct FString> GetCreativeBetaPermissionTags(class UFortItemDefinition*& ItemDefinition); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetCabinModeLabelOverride (Underlying native function: GetCabinModeLabelOverride 0x877f078)
	static struct FText GetCabinModeLabelOverride(struct FText& BaseLabel, int& Number); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.GetActorsRelevantToActorOfType (Underlying native function: GetActorsRelevantToActorOfType 0x877eee8)
	static struct TArray<class AActor*> GetActorsRelevantToActorOfType(class AActor*& PrimaryActor, class UClass*& ActorClass); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.DestroyActorByType (Underlying native function: DestroyActorByType 0x877e994)
	static void DestroyActorByType(class AActor*& InActor); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.BroadcastMissionEvent (Underlying native function: BroadcastMissionEvent 0x877e0fc)
	static void BroadcastMissionEvent(class UObject*& WorldContextObject, enum ECreativeQuestStat& Stat, class UFortMissionEventParams*& Params); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.AnimateFloatCurve (Underlying native function: AnimateFloatCurve 0x877df64)
	static struct FFortCreativeAnimateFloatCurveResult* AnimateFloatCurve(float& DeltaTime, float& CurrentTime, class UCurveFloat*& FCurve, float& TotalAnimationTime, bool& bInvertTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeBlueprintLibrary.ActorVolumeHasBetaKnobPermission (Underlying native function: ActorVolumeHasBetaKnobPermission 0x877dc10)
	static bool ActorVolumeHasBetaKnobPermission(class AActor*& ActorToCheck, struct FString& OptionKey); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

