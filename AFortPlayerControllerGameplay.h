// Class /Script/FortniteGame.FortPlayerControllerGameplay
// Size: 0x3300
class AFortPlayerControllerGameplay : public AFortPlayerController
{
	class UFortAmbientAudioController* FortAmbientAudioController; // 0x2c48 (0x8)
	int16_t PoiTagContainerTableID; // 0x2c50 (0x2)
	unsigned char unreflected_2c52[0x1e]; // 0x2c52 (0x1e) 
	struct FMulticastInlineDelegate OnAddFuel; // 0x2c70 (0x10)
	struct FTimerHandle* VerifyAllowedToFlyTimerHandle; // 0x2c80 (0x8)
	unsigned char unreflected_2c88[0x8]; // 0x2c88 (0x8) 
	struct FMulticastInlineDelegate OnCreativeGhostEnabledDelegate; // 0x2c90 (0x10)
	struct FTimerHandle* VerifyAllowModeratorModeTimerHandle; // 0x2ca0 (0x8)
	struct FTimerHandle* VerifyAllowedToBeInvulnerableTimerHandle; // 0x2ca8 (0x8)
	struct FMulticastInlineDelegate OnCreativeInvulnerableEnabledDelegate; // 0x2cb0 (0x10)
	struct FMulticastInlineDelegate OnCreativeHeatmapToggledDelegate; // 0x2cc0 (0x10)
	struct FMulticastInlineDelegate OnCreativeSwapPhoneAndHarvestHoldChangedDelegate; // 0x2cd0 (0x10)
	struct FMulticastInlineDelegate OnCreativeFlyingSpeedChanged; // 0x2ce0 (0x10)
	struct FMulticastInlineDelegate OnCreativeUIMetricsDisplayChanged; // 0x2cf0 (0x10)
	struct FMulticastInlineDelegate OnShowCreativeGlobalOptions; // 0x2d00 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarEnabledChangedDelegate; // 0x2d10 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickbarComponentLoaded; // 0x2d20 (0x10)
	struct FMulticastInlineDelegate OnCreativeQuickmenuEnabledChangedDelegate; // 0x2d30 (0x10)
	struct FMulticastInlineDelegate OnCreativeModeEnabledChangedDelegate; // 0x2d40 (0x10)
	struct FMulticastInlineDelegate OnCreativePreviewScreenshotActiveChanged; // 0x2d50 (0x10)
	struct FMulticastInlineDelegate OnCreativePreviewScreenshotReset; // 0x2d60 (0x10)
	struct FMulticastInlineDelegate OnCreativePreviewScreenshotAccepted; // 0x2d70 (0x10)
	struct FMulticastInlineDelegate OnCreativePreviewScreenshotCancelled; // 0x2d80 (0x10)
	unsigned char unreflected_2d90[0x48]; // 0x2d90 (0x48) 
	struct FMulticastInlineDelegate OnBalloonMovementChanged; // 0x2dd8 (0x10)
	unsigned char unreflected_2de8[0x18]; // 0x2de8 (0x18) 
	struct FPrimaryAssetId* CreativeMoveToolPrimaryAsset; // 0x2e00 (0x8)
	struct TWeakObjectPtr<class UClass> CreativeQuickbarClass; // 0x2e08 (0x28)
	unsigned char unreflected_2e30[0x10]; // 0x2e30 (0x10) 
	unsigned char CreativeCameraPreviewScreenshotClass_2e40[0x8]; // 0x2e40 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	class UCreativeQuickbarComponent* CreativeQuickbarComponent; // 0x2e48 (0x8)
	struct FVehicleTrickInfo VehicleTrickInfo; // 0x2e50 (0x198)
	struct FGhostModeRepData GhostModeRepData; // 0x2fe8 (0x18)
	struct FMulticastInlineDelegate OnGhostModeChanged; // 0x3000 (0x10)
	struct FMulticastInlineDelegate OnDBNOCarryPlayerChanged; // 0x3010 (0x10)
	struct FMulticastInlineDelegate OnWorldInventoryChangedDelegate; // 0x3020 (0x10)
	struct FMulticastInlineDelegate OnCreativeFlyChangedDelegate; // 0x3030 (0x10)
	struct FMulticastInlineDelegate OnHUDElementVisibilityRefreshedDelegate; // 0x3040 (0x10)
	unsigned char unreflected_3050[0xe]; // 0x3050 (0xe) 
	uint16_t ServerNumNPCs; // 0x305e (0x2)
	uint16_t ServerMaxNumNPCs; // 0x3060 (0x2)
	unsigned char unreflected_3062[0x6]; // 0x3062 (0x6) 
	struct FTimerHandle* AmbientControllerInitializeTimer; // 0x3068 (0x8)
	bool bDisplayNPCNumbers; // 0x3070 (0x1)
	unsigned char unreflected_3071[0x27]; // 0x3071 (0x27) 
	bool bHasSetInitialPoiTags; // 0x3098 (0x1)
	unsigned char unreflected_3099[0x7]; // 0x3099 (0x7) 
	class UInputComponent* CreativeModeFlyingInputComponent; // 0x30a0 (0x8)
	class UInputComponent* CreativeModeInputComponent; // 0x30a8 (0x8)
	class UInputComponent* CreativeGlobalOptionsInputComponent; // 0x30b0 (0x8)
	class UInputComponent* CreativeModePreviewScreenshotInputComponent; // 0x30b8 (0x8)
	class UInputComponent* CreativeModeInGameReadyCheckInputComponent; // 0x30c0 (0x8)
	class UInputComponent* CreativeModeratorModeInputComponent; // 0x30c8 (0x8)
	struct TArray<float> FlyingModifiers; // 0x30d0 (0x10)
	struct TArray<float> AdditionalModeratorFlyingModifiers; // 0x30e0 (0x10)
	int FlyingModifierIndex; // 0x30f0 (0x4)
	int UIMetricsDisplayIndex; // 0x30f4 (0x4)
	int FlightSpeedWhenEnteredSprint; // 0x30f8 (0x4)
	unsigned char unreflected_30fc[0x4]; // 0x30fc (0x4) 
	bool bIsFlightSprinting; // 0x3100 (0x1)
	unsigned char bIsCreativeModeEnabled; // 0x3101 (0x1)
	unsigned char bIsCreativeQuickbarEnabled; // 0x3101 (0x1)
	unsigned char bIsCreativeQuickmenuEnabled; // 0x3101 (0x1)
	unsigned char bCreativeMCPProfileIsMatchamkingEnabled; // 0x3101 (0x1)
	unsigned char bIsCreativeThermometer2Enabled; // 0x3102 (0x1)
	unsigned char bIsCreativeThermometerNewUIEnabled; // 0x3102 (0x1)
	unsigned char bIsCreativeIslandExporterEnabled; // 0x3102 (0x1)
	unsigned char bIsCreativeModeratorModeEnabled; // 0x3102 (0x1)
	unsigned char bIsCreativeModeratorModeActive; // 0x3102 (0x1)
	unsigned char unreflected_3103[0x1d]; // 0x3103 (0x1d) 
	struct TArray<class UClass*> DefaultCameraModifierClasses; // 0x3120 (0x10)
	unsigned char unreflected_3130[0x18]; // 0x3130 (0x18) 
	struct TWeakObjectPtr<class UFortCreativeOptionsBundle> CreativeOptions; // 0x3148 (0x28)
	class UFortCreativeOptionsBundle* CreativeOptionsInternal; // 0x3170 (0x8)
	struct FCreativeOptionVariableBase* WantsToGhostMode; // 0x3178 (0x8)
	class UInputComponent* SocialNotificationInputComponent; // 0x3180 (0x8)
	struct FCreativeOptionVariableBase* WantsToBeInvulnerable; // 0x3188 (0x8)
	struct FCreativeOptionVariableBase* WantedFlightSpeed; // 0x3190 (0x8)
	struct FCreativeOptionVariableBase* WantsToSwapPhoneAndHarvestHold; // 0x3198 (0x8)
	struct FCreativeOptionVariableBase* WantedUIMetricsDisplay; // 0x31a0 (0x8)
	struct TMap<struct FGuid, struct FFortAbilitySetHandle> AppliedInGameModifierAbilitySetHandles; // 0x31a8 (0x50)
	struct TMap<struct FGuid, class UInputComponent*> AbilityActivatedByInputInputComponentMap; // 0x31f8 (0x50)
	unsigned char unreflected_3248[0x50]; // 0x3248 (0x50) 
	struct TMap<struct FGameplayTag, struct FGameplayAbilitySpecHandle> AbilityActivatedByInputSpecHandleMap; // 0x3298 (0x50)
	class UFortControllerComponent_SpawnedVehicle* SpawnedVehicleComponent; // 0x32e8 (0x8)
	class UFortControllerComponent_Swinging* SwingingComponent; // 0x32f0 (0x8)
	unsigned char padding_32f8[0x8]; // 0x32f8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.Validation_IsFlyingPossible (Underlying native function: Validation_IsFlyingPossible 0x8dc1d94)
	bool ValidationIsFlyingPossible(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.StartGhostMode (Underlying native function: StartGhostMode 0x8dc1c68)
	void StartGhostMode(class UFortWorldItemDefinition*& ItemProvidingGhostMode); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.SpawnVehicleAndEnter (Underlying native function: SpawnVehicleAndEnter 0x8dc1a4c)
	class AFortAthenaVehicle* SpawnVehicleAndEnter(class UClass*& VehicleClass, bool& bHidePawn, bool& bSetPawnAsVehicleOwner, enum EVehicleSeats& SeatToEnter, bool& bIgnoreDBNOCheck, bool& bCheckForNonBlockingSpawnPosition, bool& bForceToWaterSurfaceOnSpawn); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.SimulatedSetCreativeModeratorModeActive (Underlying native function: SimulatedSetCreativeModeratorModeActive 0x8dc1990)
	void SimulatedSetCreativeModeratorModeActive(bool& bActive); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.SetCanStreamBuildingFoundationsIn (Underlying native function: SetCanStreamBuildingFoundationsIn 0x8dc1540)
	void SetCanStreamBuildingFoundationsIn(bool& bCanStream); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerSetCreativeModeratorModeActive (Underlying native function: ServerSetCreativeModeratorModeActive 0x8dc0f9c)
	void ServerSetCreativeModeratorModeActive(bool& bActive); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerRPCSetDisplayNPCNumbers (Underlying native function: ServerRPCSetDisplayNPCNumbers 0x8dc0b3c)
	void ServerRPCSetDisplayNPCNumbers(bool& bEnable); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeToggleFly (Underlying native function: ServerCreativeToggleFly 0x8dc0210)
	void ServerCreativeToggleFly(bool& bEnableOnly); // (Net | NetReliable | Native | Event | Public | NetServer | BlueprintCallable | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStopInvulnerable (Underlying native function: ServerCreativeStopInvulnerable 0x8dc01c4)
	void ServerCreativeStopInvulnerable(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStopGhost (Underlying native function: ServerCreativeStopGhost 0x8dc0178)
	void ServerCreativeStopGhost(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStopFlyUp (Underlying native function: ServerCreativeStopFlyUp 0x8dc012c)
	void ServerCreativeStopFlyUp(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStopFlyDown (Underlying native function: ServerCreativeStopFlyDown 0x8dc00e0)
	void ServerCreativeStopFlyDown(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStopFly (Underlying native function: ServerCreativeStopFly 0x8dc0094)
	void ServerCreativeStopFly(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStartInvulnerable (Underlying native function: ServerCreativeStartInvulnerable 0x8dc0048)
	void ServerCreativeStartInvulnerable(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStartFlyUp (Underlying native function: ServerCreativeStartFlyUp 0x8dbfffc)
	void ServerCreativeStartFlyUp(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeStartFlyDown (Underlying native function: ServerCreativeStartFlyDown 0x8dbffb0)
	void ServerCreativeStartFlyDown(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeSetGhost (Underlying native function: ServerCreativeSetGhost 0x8dbff00)
	void ServerCreativeSetGhost(bool& bWantsToGhost); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeSetFlightSprint (Underlying native function: ServerCreativeSetFlightSprint 0x8dbfe50)
	void ServerCreativeSetFlightSprint(bool& bSprint); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerCreativeSetFlightSpeedIndex (Underlying native function: ServerCreativeSetFlightSpeedIndex 0x8dbfdb4)
	void ServerCreativeSetFlightSpeedIndex(int& Index); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ServerAwardVehicleTrickPoints (Underlying native function: ServerAwardVehicleTrickPoints 0x8dbfa88)
	void ServerAwardVehicleTrickPoints(int& InPoints, int& InAirTimeX1000, int& NumberOfTricks, float& AirDistance, float& AirHeight); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ResetTrick (Underlying native function: ResetTrick 0x8dbf908)
	void ResetTrick(class AActor*& VehicleActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.PushCreativeReadyCheckInputMode (Underlying native function: PushCreativeReadyCheckInputMode 0x8dbf878)
	void PushCreativeReadyCheckInputMode(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.PopCreativeReadyCheckInputMode (Underlying native function: PopCreativeReadyCheckInputMode 0x8dbf844)
	void PopCreativeReadyCheckInputMode(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnWantsToGhostModeChanged (Underlying native function: OnWantsToGhostModeChanged 0x8dbf6d0)
	void OnWantsToGhostModeChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnWantsToBeInvulnerableChanged (Underlying native function: OnWantsToBeInvulnerableChanged 0x8dbf5e0)
	void OnWantsToBeInvulnerableChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnWantedUIMetricsDisplayChanged (Underlying native function: OnWantedUIMetricsDisplayChanged 0x8dbf4ec)
	void OnWantedUIMetricsDisplayChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnWantedToSwapPhoneAndHarvestHoldChanged (Underlying native function: OnWantedToSwapPhoneAndHarvestHoldChanged 0x8dbf410)
	void OnWantedToSwapPhoneAndHarvestHoldChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnWantedFlightSpeedChanged (Underlying native function: OnWantedFlightSpeedChanged 0x8dbf2e0)
	void OnWantedFlightSpeedChanged(class UFortCreativeOption*& CreativeOption, unsigned char& IndexValue); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnVerifyAllowModeratorMode (Underlying native function: OnVerifyAllowModeratorMode 0x26daa0c)
	void OnVerifyAllowModeratorMode(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnVerifyAllowedToFly (Underlying native function: OnVerifyAllowedToFly 0x26daa0c)
	void OnVerifyAllowedToFly(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnVerifyAllowedToBeInvulnerable (Underlying native function: OnVerifyAllowedToBeInvulnerable 0x26daa0c)
	void OnVerifyAllowedToBeInvulnerable(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_UIMetricsDisplayIndex (Underlying native function: OnRep_UIMetricsDisplayIndex 0x8dbf298)
	void OnRepUIMetricsDisplayIndex(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_PoiTagContainerTableID (Underlying native function: OnRep_PoiTagContainerTableID 0x8dbf218)
	void OnRepPoiTagContainerTableID(int16_t& PreviousPoiTagContainerTableID); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_IsFlightSprinting (Underlying native function: OnRep_IsFlightSprinting 0x8dbf204)
	void OnRepIsFlightSprinting(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_IsCreativeQuickbarEnabled (Underlying native function: OnRep_IsCreativeQuickbarEnabled 0x8dbf188)
	void OnRepIsCreativeQuickbarEnabled(bool& bPrevIsEnabled); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_IsCreativeModeratorModeActive (Underlying native function: OnRep_IsCreativeModeratorModeActive 0x8dbf174)
	void OnRepIsCreativeModeratorModeActive(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_IsCreativeModeEnabled (Underlying native function: OnRep_IsCreativeModeEnabled 0x8dbf160)
	void OnRepIsCreativeModeEnabled(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_GhostModeRepData (Underlying native function: OnRep_GhostModeRepData 0x8dbf14c)
	void OnRepGhostModeRepData(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_FlyingModifierIndex (Underlying native function: OnRep_FlyingModifierIndex 0x8dbf0b4)
	void OnRepFlyingModifierIndex(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnRep_CreativeQuickbarComponent (Underlying native function: OnRep_CreativeQuickbarComponent 0x8dbf084)
	void OnRepCreativeQuickbarComponent(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnExitAircraft (Underlying native function: OnExitAircraft 0x8dbefec)
	void OnExitAircraft(class AController*& ExitingController); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.OnEnterAircraft (Underlying native function: OnEnterAircraft 0x8dbef68)
	void OnEnterAircraft(class AController*& EnteringController); // (Native | Protected)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsUsingHideOtherPlayerNames (Underlying native function: IsUsingHideOtherPlayerNames 0x8dbee74)
	bool IsUsingHideOtherPlayerNames(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsInGhostMode (Underlying native function: IsInGhostMode 0x8dbed2c)
	bool IsInGhostMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeThermometerNewUIEnabled (Underlying native function: IsCreativeThermometerNewUIEnabled 0x8dbecec)
	bool IsCreativeThermometerNewUIEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeQuickmenuEnabled (Underlying native function: IsCreativeQuickmenuEnabled 0x8dbecd0)
	bool IsCreativeQuickmenuEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeQuickbarEnabled (Underlying native function: IsCreativeQuickbarEnabled 0x8dbecb4)
	bool IsCreativeQuickbarEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeQuickbarActive (Underlying native function: IsCreativeQuickbarActive 0x8dbec94)
	bool IsCreativeQuickbarActive(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativePreviewScreenshotAvailable (Underlying native function: IsCreativePreviewScreenshotAvailable 0x8dbec70)
	bool IsCreativePreviewScreenshotAvailable(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativePhoneAndHarvestHoldSwapped (Underlying native function: IsCreativePhoneAndHarvestHoldSwapped 0x8dbec54)
	bool IsCreativePhoneAndHarvestHoldSwapped(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeModeratorModeEnabled (Underlying native function: IsCreativeModeratorModeEnabled 0x8dbec30)
	bool IsCreativeModeratorModeEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeModeratorModeAllowed (Underlying native function: IsCreativeModeratorModeAllowed 0x5e61940)
	bool IsCreativeModeratorModeAllowed(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeModeratorModeActive (Underlying native function: IsCreativeModeratorModeActive 0x2d1255c)
	bool IsCreativeModeratorModeActive(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeModeEnabled (Underlying native function: IsCreativeModeEnabled 0x8dbec14)
	bool IsCreativeModeEnabled(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsCreativeIslandExporterEnabled (Underlying native function: IsCreativeIslandExporterEnabled 0x8dbebc0)
	bool IsCreativeIslandExporterEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.IsAllowedToFly (Underlying native function: IsAllowedToFly 0x8dbeb60)
	bool IsAllowedToFly(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.InitializeAmbientAudioController (Underlying native function: InitializeAmbientAudioController 0x8dbeb24)
	void InitializeAmbientAudioController(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.HandlePoiTagContainerTableFinishedReplicating (Underlying native function: HandlePoiTagContainerTableFinishedReplicating 0x8dbe98c)
	void HandlePoiTagContainerTableFinishedReplicating(class AFortPoiManager*& PoiManager); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.GetVehicleTrickInfo (Underlying native function: GetVehicleTrickInfo 0x8dbe7e0)
	struct FVehicleTrickInfo GetVehicleTrickInfo(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.GetSpectatingPlayerName (Underlying native function: GetSpectatingPlayerName 0x8dbe750)
	struct FString GetSpectatingPlayerName(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.GetSettingsFilteredPlayerName (Underlying native function: GetSettingsFilteredPlayerName 0x8dbe55c)
	struct FString GetSettingsFilteredPlayerName(class AFortPlayerState*& OtherPlayerState); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.GetFlyingModifierIndex (Underlying native function: GetFlyingModifierIndex 0x8dbe510)
	int GetFlyingModifierIndex(); // (Final | Native | Private | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.GetAmbientAudioController (Underlying native function: GetAmbientAudioController 0x8dbe4a4)
	class UFortAmbientAudioController* GetAmbientAudioController(); // (Final | Native | Public | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.FollowPlayer (Underlying native function: FollowPlayer 0x2d845b4)
	bool FollowPlayer(enum EPlayerControllerFollow& Follow); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ExitSpawnedVehicle (Underlying native function: ExitSpawnedVehicle 0x8dbdffc)
	void ExitSpawnedVehicle(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.EndGhostMode (Underlying native function: EndGhostMode 0x8dbdfe8)
	void EndGhostMode(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.DisplayNPCNumbers (Underlying native function: DisplayNPCNumbers 0x71a6cc4)
	void DisplayNPCNumbers(bool& bDisplay); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.DisableTrickCredit (Underlying native function: DisableTrickCredit 0x8dbdf64)
	void DisableTrickCredit(float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.CreativeToggleFly (Underlying native function: CreativeToggleFly 0x8dbdea8)
	void CreativeToggleFly(bool& bEnableOnly); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ClientRemoveItemAbilitySet (Underlying native function: ClientRemoveItemAbilitySet 0x8dbd7e8)
	void ClientRemoveItemAbilitySet(class UFortAbilitySet*& AbilitySet, struct FGuid& Guid); // (0x00000002 | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ClientCreativeStopFly (Underlying native function: ClientCreativeStopFly 0x8dbd364)
	void ClientCreativeStopFly(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ClientCreativeSetUIMetricsDisplayIndex (Underlying native function: ClientCreativeSetUIMetricsDisplayIndex 0x8dbd2e0)
	void ClientCreativeSetUIMetricsDisplayIndex(int& Index); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ClientCreativePhoneCreated (Underlying native function: ClientCreativePhoneCreated 0x8dbd2c8)
	void ClientCreativePhoneCreated(); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ClientApplyItemAbilitySet (Underlying native function: ClientApplyItemAbilitySet 0x8dbd1d4)
	void ClientApplyItemAbilitySet(class UFortAbilitySet*& AbilitySet, struct FGuid& Guid); // (0x00000002 | Net | NetReliable | Native | Event | Public | HasDefaults | NetClient)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.CheckGhostModeItemReplicated (Underlying native function: CheckGhostModeItemReplicated 0x8dbd13c)
	void CheckGhostModeItemReplicated(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.CheckGhostModeItemRemoved (Underlying native function: CheckGhostModeItemRemoved 0x8dbd0bc)
	void CheckGhostModeItemRemoved(class UFortWorldItemDefinition*& GhostModeItemDef); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.CanFollowAPlayer (Underlying native function: CanFollowAPlayer 0x8dbcf84)
	bool CanFollowAPlayer(bool& bOnlyCheckTeammates); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerControllerGameplay.ActivateCreativePreviewScreenshot (Underlying native function: ActivateCreativePreviewScreenshot 0x8dbcb90)
	void ActivateCreativePreviewScreenshot(bool& bActivate); // (Final | Native | Public | BlueprintCallable)
};

