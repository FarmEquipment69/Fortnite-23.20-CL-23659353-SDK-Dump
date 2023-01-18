// Class /Script/MotorcycleRuntime.FortMotorcycleVehicle
// Size: 0x1ec0
class AFortMotorcycleVehicle : public AFortAthenaSKMotorVehicle
{
	struct FMulticastInlineDelegate OnStartChargingJumpDelegate; // 0x1a40 (0x10)
	struct FMulticastInlineDelegate OnCancelChargingJumpDelegate; // 0x1a50 (0x10)
	struct FMulticastInlineDelegate OnJumpDelegate; // 0x1a60 (0x10)
	struct FMulticastInlineDelegate OnChargingJumpDelegate; // 0x1a70 (0x10)
	struct FMulticastInlineDelegate OnStartAirTrickDelegate; // 0x1a80 (0x10)
	struct FMulticastInlineDelegate OnFinishAirTrickDelegate; // 0x1a90 (0x10)
	struct FMulticastInlineDelegate OnStartWheelieDelegate; // 0x1aa0 (0x10)
	struct FMulticastInlineDelegate OnReleaseWheelieDelegate; // 0x1ab0 (0x10)
	struct FMulticastInlineDelegate OnLandWheelieDelegate; // 0x1ac0 (0x10)
	struct FMulticastInlineDelegate OnFailWheelieDelegate; // 0x1ad0 (0x10)
	struct FMulticastInlineDelegate OnStartStoppieDelegate; // 0x1ae0 (0x10)
	struct FMulticastInlineDelegate OnReleaseStoppieDelegate; // 0x1af0 (0x10)
	struct FMulticastInlineDelegate OnLandStoppieDelegate; // 0x1b00 (0x10)
	struct FMulticastInlineDelegate OnInventoryModeChangedDelegate; // 0x1b10 (0x10)
	class UClass* InventoryCameraModeClass; // 0x1b20 (0x8)
	class UClass* InventoryCameraModeClassADS; // 0x1b28 (0x8)
	class UClass* PassengerCameraModeClass; // 0x1b30 (0x8)
	class UClass* PassengerCameraModeClassADS; // 0x1b38 (0x8)
	class UFortMotorcycleVehicleConfigs* FortMotorcycleVehicleConfigs; // 0x1b40 (0x8)
	struct FName RearAxleSocket; // 0x1b48 (0x4)
	float SwingArmRotation; // 0x1b4c (0x4)
	unsigned char unreflected_1b50[0x78]; // 0x1b50 (0x78) 
	struct TArray<int> BoostShapeIndices; // 0x1bc8 (0x10)
	bool bIsBoostAttacking; // 0x1bd8 (0x1)
	unsigned char unreflected_1bd9[0xf]; // 0x1bd9 (0xf) 
	enum EFortMotorcycleAirTrickType CachedTrickType; // 0x1be8 (0x1)
	bool bHadPassengerAtTrickStart; // 0x1be9 (0x1)
	unsigned char unreflected_1bea[0x26]; // 0x1bea (0x26) 
	struct TArray<struct FName> PassengerADSSockets; // 0x1c10 (0x10)
	struct TArray<struct FVector> PassengerADSRelativeOffsets; // 0x1c20 (0x10)
	class UNiagaraComponent* CachedNiagaraComponentRoadAndExhaust; // 0x1c30 (0x8)
	struct FString RoadAndExhaustNiagaraComponentName; // 0x1c38 (0x10)
	struct FString RoadAndExhaustVehicleSpeedName; // 0x1c48 (0x10)
	struct FString RoadAndExhaustSlideDirectionName; // 0x1c58 (0x10)
	float RoadAndExhaustMinSpeedForDust; // 0x1c68 (0x4)
	unsigned char unreflected_1c6c[0x4]; // 0x1c6c (0x4) 
	struct FString RoadAndExhaustDustRearName; // 0x1c70 (0x10)
	struct FString RoadAndExhaustDustColorLerpName; // 0x1c80 (0x10)
	float RoadAndExhaustDustColorLerp; // 0x1c90 (0x4)
	unsigned char unreflected_1c94[0x4]; // 0x1c94 (0x4) 
	struct FString RoadAndExhaustDustAlphaMultiplierName; // 0x1c98 (0x10)
	float RoadAndExhaustDustAlphaMultiplier; // 0x1ca8 (0x4)
	unsigned char unreflected_1cac[0x4]; // 0x1cac (0x4) 
	struct FString RoadAndExhaustPeelOutColorIndexName; // 0x1cb0 (0x10)
	struct FString RoadAndExhaustPeelOutRearName; // 0x1cc0 (0x10)
	struct FString RoadAndExhaustIsPeelOutOnRoadName; // 0x1cd0 (0x10)
	struct FString RoadAndExhaustIsPeelOutOnRoadRewindName; // 0x1ce0 (0x10)
	struct FString RoadAndExhaustIsInAirName; // 0x1cf0 (0x10)
	struct FGameplayTag RoadAndExhaustCameraDirtGameplayCueTag; // 0x1d00 (0x4)
	struct FGameplayTag RoadAndExhaustCameraWaterGameplayCueTag; // 0x1d04 (0x4)
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> RoadAndExhaustSurfaceTypeArrayForFX; // 0x1d08 (0x10)
	class ULegacyCameraShake* DriverCameraShakeInstance; // 0x1d18 (0x8)
	class ULegacyCameraShake* AcceleratingCameraShakeInstance; // 0x1d20 (0x8)
	unsigned char unreflected_1d28[0x8]; // 0x1d28 (0x8) 
	struct FName RoadAndExhaustHeadlightsName; // 0x1d30 (0x4)
	struct FName RoadAndExhaustBrakelightsName; // 0x1d34 (0x4)
	struct FScalableFloat DoorBashMinSpeed; // 0x1d38 (0x28)
	struct FScalableFloat DoorBashMaxSpeed; // 0x1d60 (0x28)
	struct FScalableFloat DoorBashForwardDistanceMin; // 0x1d88 (0x28)
	struct FScalableFloat DoorBashForwardDistanceMax; // 0x1db0 (0x28)
	struct FGameplayTag DoorBashGameplayCueTag; // 0x1dd8 (0x4)
	unsigned char unreflected_1ddc[0x4]; // 0x1ddc (0x4) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> DoorBashCollisionTypesForDoor; // 0x1de0 (0x10)
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> DoorBashCollisionTypesForPawn; // 0x1df0 (0x10)
	struct FScalableFloat DoorBashSphereRadiusForPawnLaunch; // 0x1e00 (0x28)
	struct FScalableFloat DoorBashScalarForPawnLaunch; // 0x1e28 (0x28)
	struct FGameplayTag DoorBashPawnLaunchGameplayCueTag; // 0x1e50 (0x4)
	unsigned char unreflected_1e54[0x4]; // 0x1e54 (0x4) 
	struct FGameplayTagQuery InventoryModeTagQuery; // 0x1e58 (0x48)
	unsigned char padding_1ea0[0x20]; // 0x1ea0 (0x20)

	/* Functions */

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ServerEjectAllPlayers (Underlying native function: ServerEjectAllPlayers 0x71a7110)
	void ServerEjectAllPlayers(); // (Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking (Underlying native function: OnRep_IsBoostAttacking 0x738c298)
	void OnRepIsBoostAttacking(); // (Final | Native | Protected)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged (Underlying native function: OnPlayerWeaponChanged 0x738c174)
	void OnPlayerWeaponChanged(class AFortPawn*& InPawn, class AFortWeapon*& InNewWeapon, class AFortWeapon*& InPlayerWeapon); // (Final | Native | Public)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnInventoryModeToggled (Has no native function)
	void OnInventoryModeToggled(bool& bIsInInventoryMode); // (Event | Public | BlueprintEvent)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature (Has no native function)
	void MotorcycleWheelieDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature (Has no native function)
	void MotorcycleStoppieDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature (Has no native function)
	void MotorcycleStartAirTrickDelegateSignature(enum EFortMotorcycleAirTrickType& TrickType); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature (Has no native function)
	void MotorcycleJumpDelegateSignature(float& JumpChargeFactor); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature (Has no native function)
	void MotorcycleInventoryModeDelegateSignature(bool& IsInInventoryMode); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature (Has no native function)
	void MotorcycleChargingJumpDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature (Has no native function)
	void MotorcycleAirTrickDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding (Underlying native function: IsPowerSliding 0x738c128)
	bool IsPowerSliding(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode (Underlying native function: IsInInventoryMode 0x738c104)
	bool IsInInventoryMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn (Underlying native function: GetSurfaceTypeVehicleOn 0x738bfe0)
	struct TEnumAsByte<EPhysicalSurface> GetSurfaceTypeVehicleOn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState (Underlying native function: ChangeBoostAttackState 0x738bea0)
	void ChangeBoostAttackState(bool& bNewIsBoostAttacking); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie (Has no native function)
	void BPOnStartWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie (Has no native function)
	void BPOnStartStoppie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump (Has no native function)
	void BPOnStartChargingJump(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick (Has no native function)
	void BPOnStartAirTrick(enum EFortMotorcycleAirTrickType& TrickType); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie (Has no native function)
	void BPOnReleaseWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie (Has no native function)
	void BPOnReleaseStoppie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie (Has no native function)
	void BPOnLandWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie (Has no native function)
	void BPOnLandStoppie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump (Has no native function)
	void BPOnJump(float& JumpChargeFactor); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick (Has no native function)
	void BPOnFinishAirTrick(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie (Has no native function)
	void BPOnFailWheelie(); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump (Has no native function)
	void BPOnChargingJump(float& JumpChargeFactor); // (Event | Public | BlueprintEvent)

	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump (Has no native function)
	void BPOnCancelChargingJump(); // (Event | Public | BlueprintEvent)
};

