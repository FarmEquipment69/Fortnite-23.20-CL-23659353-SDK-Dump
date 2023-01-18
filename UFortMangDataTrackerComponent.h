// Class /Script/FortniteGame.FortMangDataTrackerComponent
// Size: 0x5f8
class UFortMangDataTrackerComponent : public UFortGameplayDataTrackerComponent
{
	struct FGameplayTag NumMangBotsThreatenedEvent; // 0x1a0 (0x4)
	struct FGameplayTag MangBotsTargetedThreatenedEvent; // 0x1a4 (0x4)
	struct FGameplayTag NumMangBotsAlertedEvent; // 0x1a8 (0x4)
	struct FGameplayTag NumMangBotsDBNOEvent; // 0x1ac (0x4)
	struct FGameplayTag NumMangBotsUnawareEvent; // 0x1b0 (0x4)
	struct FGameplayTag NumMangBossesThreatenedEvent; // 0x1b4 (0x4)
	struct FGameplayTag BossIdentifyingTag; // 0x1b8 (0x4)
	struct FGameplayTag NumTurretsThreatenedEvent; // 0x1bc (0x4)
	struct FGameplayTag NumTurretsAlertedEvent; // 0x1c0 (0x4)
	struct FGameplayTag NumTurretsUnawareEvent; // 0x1c4 (0x4)
	struct FGameplayTag NumCamerasThreatenedEvent; // 0x1c8 (0x4)
	struct FGameplayTag NumCamerasAlertedEvent; // 0x1cc (0x4)
	struct FGameplayTag NumCamerasUnawareEvent; // 0x1d0 (0x4)
	unsigned char unreflected_1d4[0x4]; // 0x1d4 (0x4) 
	struct FScalableFloat UnawareNearDistance; // 0x1d8 (0x28)
	struct FScalableFloat UnawareFarDistance; // 0x200 (0x28)
	struct FScalableFloat AlertNearDistance; // 0x228 (0x28)
	struct FScalableFloat AlertFarDistance; // 0x250 (0x28)
	struct FScalableFloat ThreatenedFarDistance; // 0x278 (0x28)
	struct FScalableFloat DistancePercentLerpExponent; // 0x2a0 (0x28)
	struct FScalableFloat ShouldUseDotProductForThreatEvents; // 0x2c8 (0x28)
	struct FScalableFloat ThreatEventsDotProductComparisonValue; // 0x2f0 (0x28)
	struct FScalableFloat ThreatEventsDotProductFailureMultiplier; // 0x318 (0x28)
	struct FScalableFloat TargetedThreatenedGuaranteedRange; // 0x340 (0x28)
	struct FScalableFloat TargetedThreatenedNearComparisonRange; // 0x368 (0x28)
	struct FScalableFloat BotFacingNearTargetedThreatenedDotProductComparisonValue; // 0x390 (0x28)
	struct FScalableFloat BotFacingFarTargetedThreatenedDotProductComparisonValue; // 0x3b8 (0x28)
	struct FScalableFloat PlayerFacingNearTargetedThreatenedDotProductComparisonValue; // 0x3e0 (0x28)
	struct FScalableFloat PlayerFacingFarTargetedThreatenedDotProductComparisonValue; // 0x408 (0x28)
	struct FScalableFloat ShouldUseTargetedThreatenedEvent; // 0x430 (0x28)
	unsigned char unreflected_458[0x20]; // 0x458 (0x20) 
	struct FScalableFloat ShouldTrackPerPlayer; // 0x478 (0x28)
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	struct TArray<class AFortAthenaAIBotController*> MangBotControllers; // 0x4a8 (0x10)
	struct FFortMangBotInfoArray BotInfos; // 0x4b8 (0x120)
	struct TArray<struct FFortMangSentryInfo> CameraInfos; // 0x5d8 (0x10)
	struct TArray<struct FFortMangSentryInfo> TurretInfos; // 0x5e8 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.UpdateTurretAlertState (Underlying native function: UpdateTurretAlertState 0x8a1d83c)
	void UpdateTurretAlertState(class ABuildingGameplayActor*& TurretToUpdate, enum EAlertLevel& NewAlertLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.UpdateCameraAlertState (Underlying native function: UpdateCameraAlertState 0x8a1d764)
	void UpdateCameraAlertState(class ABuildingGameplayActor*& CameraToUpdate, enum EAlertLevel& NewAlertLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.UnRegisterLocalPlayerController (Underlying native function: UnRegisterLocalPlayerController 0x8a1d750)
	void UnRegisterLocalPlayerController(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.RegisterTurretInfos (Underlying native function: RegisterTurretInfos 0x8a1d5dc)
	void RegisterTurretInfos(struct TArray<struct FFortMangSentryInfo>& Turrets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.RegisterMangControllers (Underlying native function: RegisterMangControllers 0x8a1d46c)
	void RegisterMangControllers(struct TArray<class AFortAthenaAIBotController*>& MangControllers); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.RegisterLocalPlayerController (Underlying native function: RegisterLocalPlayerController 0x8a1d128)
	void RegisterLocalPlayerController(class AFortPlayerController*& LocalPlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.RegisterCameraInfos (Underlying native function: RegisterCameraInfos 0x8a1cdcc)
	void RegisterCameraInfos(struct TArray<struct FFortMangSentryInfo>& Cameras); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.OnRep_BotInfos (Underlying native function: OnRep_BotInfos 0x8a1ccc8)
	void OnRepBotInfos(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.OnBotPawnDBNOStatusChanged (Underlying native function: OnBotPawnDBNOStatusChanged 0x8a1cc10)
	void OnBotPawnDBNOStatusChanged(class AFortPawn*& FortPawn, bool& bIsDBNO); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.OnBotDied (Underlying native function: OnBotDied 0x8a1c908)
	void OnBotDied(class AFortAthenaAIBotController*& BotController, class AFortPawn*& FortPawn); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.OnBotDBNOStatusChanged (Underlying native function: OnBotDBNOStatusChanged 0x8a1c840)
	void OnBotDBNOStatusChanged(class AFortAthenaAIBotController*& BotController, bool& bIsDBNO); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.OnBotControllerAlertLevelChanged (Underlying native function: OnBotControllerAlertLevelChanged 0x8a1c748)
	void OnBotControllerAlertLevelChanged(class AFortAthenaAIBotController*& BotController, enum EAlertLevel& OldAlertLevel, enum EAlertLevel& NewAlertLevel); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortMangDataTrackerComponent.IsTrackingPerPlayer (Underlying native function: IsTrackingPerPlayer 0x8a1c70c)
	bool IsTrackingPerPlayer(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)
};

