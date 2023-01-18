// Class /Script/FortniteGame.FortCharacterVehicle
// Size: 0x55f0
class AFortCharacterVehicle : public AFortPlayerPawnAthena
{
	unsigned char unreflected_5260[0x8]; // 0x5260 (0x8) 
	bool bDestroyBuildingSMActorOnForceExit; // 0x5268 (0x1)
	bool bDestroyOnLastExit; // 0x5269 (0x1)
	unsigned char unreflected_526a[0x4]; // 0x526a (0x4) 
	unsigned char VTDMode; // 0x526e (0x1)
	unsigned char unreflected_526f[0x11]; // 0x526f (0x11) 
	struct TWeakObjectPtr<class UAthenaItemWrapDefinition> SoftOverrideItemWrap; // 0x5280 (0x28)
	class UAthenaItemWrapDefinition* OverrideItemWrap; // 0x52a8 (0x8)
	struct FVehicleCosmeticInfo VehicleCosmeticInfo; // 0x52b0 (0x38)
	bool bForcedToAlwaysSpawn; // 0x52e8 (0x1)
	bool bAllowInteractBetweenFortVolumes; // 0x52e9 (0x1)
	unsigned char unreflected_52ea[0x6]; // 0x52ea (0x6) 
	class USkeletalMeshComponent* EmoteMesh; // 0x52f0 (0x8)
	struct TArray<class UFortMontageItemDefinitionBase*> SpecialVehicleEmotes; // 0x52f8 (0x10)
	float SpawnPropOnEmoteScalar; // 0x5308 (0x4)
	unsigned char unreflected_530c[0x4]; // 0x530c (0x4) 
	class UFortSkeletalAudioComponent* EmoteFoleyAudioComponent; // 0x5310 (0x8)
	float SeatSwitchCooldown; // 0x5318 (0x4)
	unsigned char unreflected_531c[0x4]; // 0x531c (0x4) 
	struct FMulticastInlineDelegate OnMountedWeaponFiredEvent; // 0x5320 (0x10)
	class UFortVehicleSeatComponent* VehicleSeatComponent; // 0x5330 (0x8)
	class UFortAbilitySystemComponent* OverrideAbilitySystemComponent; // 0x5338 (0x8)
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x5340 (0x8)
	class UClass* DriverAnimClass; // 0x5348 (0x8)
	class UClass* PassengerAnimClass; // 0x5350 (0x8)
	class UFortOstrichSet* OstrichSet; // 0x5358 (0x8)
	struct FGameplayTagContainer VehicleTags; // 0x5360 (0x20)
	class UFortAbilitySet* StartupAbilitySet; // 0x5380 (0x8)
	unsigned char unreflected_5388[0x8]; // 0x5388 (0x8) 
	struct FMulticastInlineDelegate OnHealthChanged; // 0x5390 (0x10)
	class UClass* CameraModeClass; // 0x53a0 (0x8)
	class UClass* PassengerCameraModeClass; // 0x53a8 (0x8)
	float MinBoostDuration; // 0x53b0 (0x4)
	float MaxBoostDuration; // 0x53b4 (0x4)
	float FullyChargedJumpTime; // 0x53b8 (0x4)
	float MinHoldDuration; // 0x53bc (0x4)
	float DriverExitLaunchScale; // 0x53c0 (0x4)
	float PassengerExitLaunchScale; // 0x53c4 (0x4)
	float ExtraInteractTraceRange; // 0x53c8 (0x4)
	float MinDistForInteract; // 0x53cc (0x4)
	float DashMovementLockDuration; // 0x53d0 (0x4)
	float SeatTransitionDuration; // 0x53d4 (0x4)
	float ClearMoveIgnoreActorsDelay; // 0x53d8 (0x4)
	float HealthIndicatorVerticalOffset; // 0x53dc (0x4)
	float SplashDamageMinPercent; // 0x53e0 (0x4)
	float SplashDamageFalloffRange; // 0x53e4 (0x4)
	struct FGameplayTagContainer BlockEntry; // 0x53e8 (0x20)
	struct FGameplayTagContainer IgnoreDamage; // 0x5408 (0x20)
	struct FGameplayTagContainer IgnoreRiderDamageFalloff; // 0x5428 (0x20)
	float JumpPressTime; // 0x5448 (0x4)
	bool bDidChargeJump; // 0x544c (0x1)
	unsigned char unreflected_544d[0x3]; // 0x544d (0x3) 
	struct TWeakObjectPtr<class AFortPlayerController> LastController; // 0x5450 (0x8)
	unsigned char unreflected_5458[0x8]; // 0x5458 (0x8) 
	class UFortOstrichAnimInstance* OstrichAnimInstance; // 0x5460 (0x8)
	struct FMulticastInlineDelegate OnPawnEnteredVehicleAtSeat; // 0x5468 (0x10)
	struct FMulticastInlineDelegate OnPawnEnteredVehicleSeat; // 0x5478 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleSeat; // 0x5488 (0x10)
	struct FMulticastInlineDelegate OnPawnExitedVehicleFromSeat; // 0x5498 (0x10)
	struct FMulticastInlineDelegate OnVehicleOwnerChanged; // 0x54a8 (0x10)
	struct FMulticastInlineDelegate OnSleepStateChangedDelegate; // 0x54b8 (0x10)
	unsigned char unreflected_54c8[0x4]; // 0x54c8 (0x4) 
	struct FGameplayTag SpecialActorTag; // 0x54cc (0x4)
	struct FSlateBrush SpecialActorMinimapIconBrush; // 0x54d0 (0xc0)
	struct FVector2D SpecialActorMinimapIconScale; // 0x5590 (0x10)
	struct FName SpecialActorID; // 0x55a0 (0x4)
	unsigned char unreflected_55a4[0x4]; // 0x55a4 (0x4) 
	struct FScalableFloat ReregisterSpecialActorIconDelay; // 0x55a8 (0x28)
	unsigned char unreflected_55d0[0x8]; // 0x55d0 (0x8) 
	bool bEnableCurieMaterial; // 0x55d8 (0x1)
	unsigned char padding_55d9[0x17]; // 0x55d9 (0x17)

	/* Functions */

	// Function /Script/FortniteGame.FortCharacterVehicle.WeaponFired (Has no native function)
	void WeaponFired(class UFortVehicleSeatWeaponComponent*& WeaponComponent, float& Overheat); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.StopEmoting (Underlying native function: StopEmoting 0x832fb40)
	void StopEmoting(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle.SetAllowInteractionBetweenFortVolumes (Underlying native function: SetAllowInteractionBetweenFortVolumes 0x832f34c)
	void SetAllowInteractionBetweenFortVolumes(bool& bInteractBetweenVolumes); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnShutdown (Has no native function)
	void OnShutdown(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnRep_OverrideWrap (Underlying native function: OnRep_OverrideWrap 0x832ee9c)
	void OnRepOverrideWrap(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnRep_OverrideAbilitySystemComponent (Underlying native function: OnRep_OverrideAbilitySystemComponent 0x832ee88)
	void OnRepOverrideAbilitySystemComponent(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnPawnExitVehicle (Underlying native function: OnPawnExitVehicle 0x832e9ac)
	void OnPawnExitVehicle(class AFortPlayerPawn*& PlayerPawn, struct FName& ExitSocketName); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnPawnEnterVehicle (Has no native function)
	void OnPawnEnterVehicle(class AFortPlayerPawn*& PlayerPawn, int& SeatIdx); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnHoldExitStopped (Has no native function)
	void OnHoldExitStopped(class AFortPawn*& ExitingPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.OnHoldExitStarted (Has no native function)
	void OnHoldExitStarted(class AFortPawn*& ExitingPawn, float& ExitDuration); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.K2_ApplyCosmeticWrap (Has no native function)
	void K2ApplyCosmeticWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.GunOverheat (Has no native function)
	void GunOverheat(class UFortVehicleSeatWeaponComponent*& WeaponComponent); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetSkeletalMeshComponent (Underlying native function: GetSkeletalMeshComponent 0x832e22c)
	class USkeletalMeshComponent* GetSkeletalMeshComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetMechMesh (Underlying native function: GetMechMesh 0x832e214)
	class USkeletalMeshComponent* GetMechMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetIsChargedJumpActive (Underlying native function: GetIsChargedJumpActive 0x832e18c)
	bool GetIsChargedJumpActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetHasGunner (Underlying native function: GetHasGunner 0x832e168)
	bool GetHasGunner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetEmoteMesh (Underlying native function: GetEmoteMesh 0x832e0d8)
	class USkeletalMeshComponent* GetEmoteMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.GetAbilitySystemComponent (Underlying native function: GetAbilitySystemComponent 0x832dd58)
	class UAbilitySystemComponent* GetAbilitySystemComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCharacterVehicle.FormatActionLabelText (Has no native function)
	struct FText FormatActionLabelText(struct FName& ActionName, struct FText& InActionLabel); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.DoesDamageCauserPreventDamageFromBeingNulled (Underlying native function: DoesDamageCauserPreventDamageFromBeingNulled 0x832d974)
	bool DoesDamageCauserPreventDamageFromBeingNulled(class AActor*& DamageCauser); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.BP_CanInteract (Underlying native function: BP_CanInteract 0x832d814)
	bool BPCanInteract(class AController*& InController); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortCharacterVehicle.AllowInteractionBetweenFortVolume (Underlying native function: AllowInteractionBetweenFortVolume 0x832d434)
	bool AllowInteractionBetweenFortVolume(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

