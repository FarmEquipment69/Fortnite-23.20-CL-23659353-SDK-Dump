// Class /Script/FortniteGame.FortVehicleInterface
// Size: 0x28
class IFortVehicleInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleInterface.WakeUp (Underlying native function: WakeUp 0x6adf948)
	void WakeUp(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.VehicleIsInSkyTube (Underlying native function: VehicleIsInSkyTube 0x89eb510)
	bool VehicleIsInSkyTube(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.VehicleIsInAir (Underlying native function: VehicleIsInAir 0x134a9ec)
	bool VehicleIsInAir(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.VehicleGameplayCue_Damage (Underlying native function: VehicleGameplayCue_Damage 0x89eb414)
	void VehicleGameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.UsesVehicleFuelSystem (Underlying native function: UsesVehicleFuelSystem 0x89eb3ec)
	bool UsesVehicleFuelSystem(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.TryConstructWithModServer (Underlying native function: TryConstructWithModServer 0x89eb278)
	void TryConstructWithModServer(struct FGameplayTagContainer& ForceMods); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ShowVehicleHealthBarOnPlayerHUD (Underlying native function: ShowVehicleHealthBarOnPlayerHUD 0x2e39a4c)
	bool ShowVehicleHealthBarOnPlayerHUD(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.SetVehicleFxMaterial (Underlying native function: SetVehicleFxMaterial 0x89eb0cc)
	void SetVehicleFxMaterial(struct FGameplayTag& FxTag, class UMaterialInterface*& FxMaterial); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetVehicleFx (Underlying native function: SetVehicleFx 0x89eb004)
	void SetVehicleFx(struct FGameplayTag& FxTag, class UFXSystemAsset*& FxSystem); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetShootingCone (Underlying native function: SetShootingCone 0x89eaf28)
	void SetShootingCone(int& SeatIndex, struct FAthenaVehicleShootingCone*& InCone); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetIgnoreNextFallingDamage (Underlying native function: SetIgnoreNextFallingDamage 0x89eaea4)
	void SetIgnoreNextFallingDamage(bool& bInIgnoreNextFallingDamage); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetIgnoreAllFallingDamage (Underlying native function: SetIgnoreAllFallingDamage 0x89eae20)
	void SetIgnoreAllFallingDamage(bool& InIgnoreAllFallingDamage); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetHealthPercent (Underlying native function: SetHealthPercent 0x89ead98)
	void SetHealthPercent(float& Percent); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetFuel (Underlying native function: SetFuel 0x76c8a00)
	void SetFuel(float& NewFuel); // (0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetForcedToAlwaysSpawn (Underlying native function: SetForcedToAlwaysSpawn 0x89ead14)
	void SetForcedToAlwaysSpawn(bool& bSetTo); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetDestroyOnLastExit (Underlying native function: SetDestroyOnLastExit 0x89eac90)
	void SetDestroyOnLastExit(bool& bSetTo); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetCurrentFocusedSocketLocation (Underlying native function: SetCurrentFocusedSocketLocation 0x89eac0c)
	void SetCurrentFocusedSocketLocation(int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetAttachedWheelDataMaterialInstance (Underlying native function: SetAttachedWheelDataMaterialInstance 0x89eab44)
	void SetAttachedWheelDataMaterialInstance(int& TireIndex, class UMaterialInstanceDynamic*& NewValue); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SetActorBase (Underlying native function: SetActorBase 0x89eaa7c)
	void SetActorBase(class AActor*& InActorBase, int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.SeatIsTurret (Underlying native function: SeatIsTurret 0x89ea9e8)
	bool SeatIsTurret(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ResetTrick (Underlying native function: ResetTrick 0x89ea9d0)
	void ResetTrick(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.PlayerIsTryingToMoveForward (Underlying native function: PlayerIsTryingToMoveForward 0x2856674)
	bool PlayerIsTryingToMoveForward(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.OverrideCurrentWrap (Underlying native function: OverrideCurrentWrap 0x89ea94c)
	void OverrideCurrentWrap(class UAthenaItemWrapDefinition*& LoadedWrap); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.NotifyAudioComponentVehicleTriggered (Underlying native function: NotifyAudioComponentVehicleTriggered 0x89ea85c)
	void NotifyAudioComponentVehicleTriggered(class UAudioComponent*& AudioComponent, int& Priority); // (0x00000002 | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.MakeInoperable (Underlying native function: MakeInoperable 0x89ea844)
	void MakeInoperable(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.IsVehicleFuelLow (Underlying native function: IsVehicleFuelLow 0x89ea81c)
	bool IsVehicleFuelLow(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsVehicleFuelEmpty (Underlying native function: IsVehicleFuelEmpty 0x2a31524)
	bool IsVehicleFuelEmpty(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsVehicleAcceleratingWithSpeedThreshold (Underlying native function: IsVehicleAcceleratingWithSpeedThreshold 0x89ea750)
	bool IsVehicleAcceleratingWithSpeedThreshold(float& MinSpeed, float& MaxSpeed); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsTouchingGround (Underlying native function: IsTouchingGround 0x89ea728)
	bool IsTouchingGround(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsTeamRestricted (Underlying native function: IsTeamRestricted 0x89ea694)
	bool IsTeamRestricted(class AFortPlayerPawnAthena*& InteractingPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsPawnInSeatRequiringTargetingForShooting (Underlying native function: IsPawnInSeatRequiringTargetingForShooting 0x89ea600)
	bool IsPawnInSeatRequiringTargetingForShooting(class AFortPlayerPawn*& PawnToCheck); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnSnow (Underlying native function: IsOnSnow 0x5d90710)
	bool IsOnSnow(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnRoad (Underlying native function: IsOnRoad 0x89ea5d8)
	bool IsOnRoad(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnIce (Underlying native function: IsOnIce 0x89ea5b0)
	bool IsOnIce(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnGrass (Underlying native function: IsOnGrass 0x89ea588)
	bool IsOnGrass(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOnDirt (Underlying native function: IsOnDirt 0x89ea560)
	bool IsOnDirt(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsOffroad (Underlying native function: IsOffroad 0x89ea538)
	bool IsOffroad(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsInWater (Underlying native function: IsInWater 0x89ea4e8)
	bool IsInWater(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsInoperable (Underlying native function: IsInoperable 0x89ea510)
	bool IsInoperable(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsIdling (Underlying native function: IsIdling 0x89ea4c0)
	bool IsIdling(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsDriverMinigameClassRestricted (Underlying native function: IsDriverMinigameClassRestricted 0x89ea42c)
	bool IsDriverMinigameClassRestricted(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsDestructible (Underlying native function: IsDestructible 0x89ea408)
	bool IsDestructible(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsBoosting (Underlying native function: IsBoosting 0x89ea3e0)
	bool IsBoosting(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.IsAsleep (Underlying native function: IsAsleep 0x89ea3b8)
	bool IsAsleep(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasVehicleModApplied (Underlying native function: HasVehicleModApplied 0x89ea318)
	bool HasVehicleModApplied(struct FGameplayTag& ModTag); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasTireMod (Underlying native function: HasTireMod 0x2627404)
	bool HasTireMod(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasSeatCollision (Underlying native function: HasSeatCollision 0x89ea284)
	bool HasSeatCollision(int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.HasPermissionToAlterBuildings (Underlying native function: HasPermissionToAlterBuildings 0x8306328)
	bool HasPermissionToAlterBuildings(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasInfiniteFuel (Underlying native function: HasInfiniteFuel 0x756fed4)
	bool HasInfiniteFuel(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasEverContainedPlayers (Underlying native function: HasEverContainedPlayers 0x89ea25c)
	bool HasEverContainedPlayers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.HasDriver (Underlying native function: HasDriver 0x89ea234)
	bool HasDriver(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetWaterDepth (Underlying native function: GetWaterDepth 0x89ea1f4)
	float GetWaterDepth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleVelocity (Underlying native function: GetVehicleVelocity 0x89ea1b8)
	struct FVector GetVehicleVelocity(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleTags (Underlying native function: GetVehicleTags 0x89ea18c)
	struct FGameplayTagContainer GetVehicleTags(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleSecondaryFireActionName (Underlying native function: GetVehicleSecondaryFireActionName 0x89ea15c)
	struct FName GetVehicleSecondaryFireActionName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleSeatComponentPtr (Underlying native function: GetVehicleSeatComponentPtr 0x89ea134)
	class UFortVehicleSeatComponent* GetVehicleSeatComponentPtr(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleSeatChoiceDisplayText (Underlying native function: GetVehicleSeatChoiceDisplayText 0x89ea054)
	struct FText GetVehicleSeatChoiceDisplayText(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleRotation (Underlying native function: GetVehicleRotation 0x89ea018)
	struct FRotator GetVehicleRotation(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleRightVector (Underlying native function: GetVehicleRightVector 0x145f550)
	struct FVector GetVehicleRightVector(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePrimaryFireActionName (Underlying native function: GetVehiclePrimaryFireActionName 0x89e9fe8)
	struct FName GetVehiclePrimaryFireActionName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePrimaryFireAbility (Underlying native function: GetVehiclePrimaryFireAbility 0x89e9fb8)
	class UClass* GetVehiclePrimaryFireAbility(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePontoonsComponent (Underlying native function: GetVehiclePontoonsComponent 0x89e9f90)
	class UFortVehiclePontoonsComponent* GetVehiclePontoonsComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehiclePlayerState (Underlying native function: GetVehiclePlayerState 0x89e9efc)
	class AFortPlayerStateZone* GetVehiclePlayerState(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleFuelPercent (Underlying native function: GetVehicleFuelPercent 0x14613f8)
	float GetVehicleFuelPercent(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleFuelComponent (Underlying native function: GetVehicleFuelComponent 0x89e9df4)
	class UFortVehicleFuelComponent* GetVehicleFuelComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleForwardVector (Underlying native function: GetVehicleForwardVector 0x145f398)
	struct FVector GetVehicleForwardVector(); // (0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleExitActionName (Underlying native function: GetVehicleExitActionName 0x89e9d68)
	struct FName GetVehicleExitActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleController (Underlying native function: GetVehicleController 0x89e9c18)
	class AFortPlayerControllerZone* GetVehicleController(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleConfigs (Underlying native function: GetVehicleConfigs 0x89e9bf0)
	class UFortVehicleConfigs* GetVehicleConfigs(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleChangeSeatActionName (Underlying native function: GetVehicleChangeSeatActionName 0x89e9b64)
	struct FName GetVehicleChangeSeatActionName(class AFortPlayerPawn*& FortPlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleActorPtrConst (Underlying native function: GetVehicleActorPtrConst 0x89e9b3c)
	class AActor* GetVehicleActorPtrConst(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleActorPtr (Underlying native function: GetVehicleActorPtr 0x89e9b14)
	class AActor* GetVehicleActorPtr(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.GetVehicleAbilitySystemComponent (Underlying native function: GetVehicleAbilitySystemComponent 0x251d148)
	class UAbilitySystemComponent* GetVehicleAbilitySystemComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetStandingFiringOffsetForSeat (Underlying native function: GetStandingFiringOffsetForSeat 0x89e99dc)
	struct FVector GetStandingFiringOffsetForSeat(int& SeatIndex); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetSkeletalMeshComponent (Underlying native function: GetSkeletalMeshComponent 0x2f5e970)
	class USkeletalMeshComponent* GetSkeletalMeshComponent(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetShootingCone (Underlying native function: GetShootingCone 0x89e9838)
	bool GetShootingCone(int& SeatIndex, struct FTransform& OutConeTM, struct FAthenaVehicleShootingCone*& OutCone); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetSeatWeaponComponent (Underlying native function: GetSeatWeaponComponent 0x89e97a4)
	class UFortVehicleSeatWeaponComponent* GetSeatWeaponComponent(int& SeatIndex); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetSeatSwitchCooldown (Underlying native function: GetSeatSwitchCooldown 0x89e9710)
	float GetSeatSwitchCooldown(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetPreviousForwardSpeedKmh (Underlying native function: GetPreviousForwardSpeedKmh 0x89e96e4)
	float GetPreviousForwardSpeedKmh(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetPlayerFacingName (Underlying native function: GetPlayerFacingName 0x89e966c)
	struct FString GetPlayerFacingName(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetPawnAtSeat (Underlying native function: GetPawnAtSeat 0x89e95d8)
	class AFortPlayerPawn* GetPawnAtSeat(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetOwnerLocation (Underlying native function: GetOwnerLocation 0x89e959c)
	struct FVector GetOwnerLocation(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetMaxHealth (Underlying native function: GetMaxHealth 0x89e9570)
	float GetMaxHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetIndicatorRelativeOffset (Underlying native function: GetIndicatorRelativeOffset 0x89e9534)
	struct FVector GetIndicatorRelativeOffset(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetHUDTopSpeed (Underlying native function: GetHUDTopSpeed 0x1460174)
	float GetHUDTopSpeed(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetHealth (Underlying native function: GetHealth 0x89e9508)
	float GetHealth(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetGameplayTags (Underlying native function: GetGameplayTags 0x89e94b4)
	struct FGameplayTagContainer GetGameplayTags(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetFuelCapacity (Underlying native function: GetFuelCapacity 0x89e9488)
	float GetFuelCapacity(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetFuel (Underlying native function: GetFuel 0x2cfe730)
	float GetFuel(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetForwardSpeedKmh (Underlying native function: GetForwardSpeedKmh 0x2442e24)
	float GetForwardSpeedKmh(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetForcedToAlwaysSpawn (Underlying native function: GetForcedToAlwaysSpawn 0x27253f4)
	bool GetForcedToAlwaysSpawn(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetExitSocketTransform (Underlying native function: GetExitSocketTransform 0x89e9364)
	struct FTransform GetExitSocketTransform(int& SeatIndex, int& SocketIndex); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetDriver (Underlying native function: GetDriver 0x2355ed0)
	class AFortPlayerPawn* GetDriver(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetDisplayName (Underlying native function: GetDisplayName 0x89e92ec)
	struct FString GetDisplayName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetCrouchingFiringOffsetForSeat (Underlying native function: GetCrouchingFiringOffsetForSeat 0x89e9244)
	struct FVector GetCrouchingFiringOffsetForSeat(int& SeatIndex); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetChildActorByClass (Underlying native function: GetChildActorByClass 0x89e91b0)
	class AActor* GetChildActorByClass(class UClass*& ActorClass); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GetAllNonDriverPassengers (Underlying native function: GetAllNonDriverPassengers 0x89e9138)
	struct TArray<class AFortPlayerPawn*> GetAllNonDriverPassengers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.GasPedalIsDown (Underlying native function: GasPedalIsDown 0x89e9110)
	bool GasPedalIsDown(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ForceDestroyVehicle (Underlying native function: ForceDestroyVehicle 0x89e908c)
	void ForceDestroyVehicle(bool& bInPlayInstantDeathEffects); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.FindSeatIndex (Underlying native function: FindSeatIndex 0x89e8ff8)
	int FindSeatIndex(class AFortPlayerPawn*& PlayerPawn); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ExitReleasedFromSeat (Underlying native function: ExitReleasedFromSeat 0x89e8f74)
	void ExitReleasedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.ExitPressedFromSeat (Underlying native function: ExitPressedFromSeat 0x8414db0)
	void ExitPressedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.ExitActivatedFromSeat (Underlying native function: ExitActivatedFromSeat 0x89e8ef0)
	void ExitActivatedFromSeat(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.EjectSeat (Underlying native function: EjectSeat 0x89e8e5c)
	bool EjectSeat(int& SeatIndex); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.EjectPlayerPawn (Underlying native function: EjectPlayerPawn 0x89e8dc8)
	bool EjectPlayerPawn(class AFortPlayerPawn*& InPlayerPawn); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.EjectAllPlayers (Underlying native function: EjectAllPlayers 0x8287688)
	void EjectAllPlayers(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.DoesVehicleDamageOwnVehicle (Underlying native function: DoesVehicleDamageOwnVehicle 0x89e8da0)
	bool DoesVehicleDamageOwnVehicle(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.DoesVehicleDamageOtherVehicles (Underlying native function: DoesVehicleDamageOtherVehicles 0x89e8d78)
	bool DoesVehicleDamageOtherVehicles(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.DoesVehicleDamageFriendlyVehicles (Underlying native function: DoesVehicleDamageFriendlyVehicles 0x89e8d50)
	bool DoesVehicleDamageFriendlyVehicles(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.DisableTrickCredit (Underlying native function: DisableTrickCredit 0x89e8cc8)
	void DisableTrickCredit(float& Duration); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.DestroyVehicle (Underlying native function: DestroyVehicle 0x7238a20)
	void DestroyVehicle(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ContainsPlayers (Underlying native function: ContainsPlayers 0x89e8c8c)
	bool ContainsPlayers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ClientIsDriver (Underlying native function: ClientIsDriver 0x89e8c64)
	bool ClientIsDriver(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ChangeSeatFromIndex (Underlying native function: ChangeSeatFromIndex 0x856e460)
	void ChangeSeatFromIndex(int& FromSeatIndex); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.ChangeSeat (Underlying native function: ChangeSeat 0x2646488)
	void ChangeSeat(); // (0x00000002 | Native | Public)

	// Function /Script/FortniteGame.FortVehicleInterface.CanTeleport (Underlying native function: CanTeleport 0x89e8c3c)
	bool CanTeleport(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CanShootFromSeat (Underlying native function: CanShootFromSeat 0x89e8ba8)
	bool CanShootFromSeat(int& SeatIndex); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CanContainPlayers (Underlying native function: CanContainPlayers 0x89e8b80)
	bool CanContainPlayers(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CanApplyMod (Underlying native function: CanApplyMod 0x89e8ae0)
	bool CanApplyMod(struct FGameplayTag& InTag); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.CallWeaponFired (Underlying native function: CallWeaponFired 0x89e8a14)
	void CallWeaponFired(class UFortVehicleSeatWeaponComponent*& WeaponComponent, float& Overheat); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.CallGunOverheat (Underlying native function: CallGunOverheat 0x89e8990)
	void CallGunOverheat(class UFortVehicleSeatWeaponComponent*& WeaponComponent); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.BP_GetAllPassengers (Underlying native function: BP_GetAllPassengers 0x1862be8)
	struct TArray<class AFortPlayerPawn*> BPGetAllPassengers(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.BlocksBuilding (Underlying native function: BlocksBuilding 0x89e8968)
	bool BlocksBuilding(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.AreAnyTiresPopped (Underlying native function: AreAnyTiresPopped 0x89e8940)
	bool AreAnyTiresPopped(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.ApplyVehicleMod (Underlying native function: ApplyVehicleMod 0x89e886c)
	void ApplyVehicleMod(struct FGameplayTag& ModTag, class AFortPlayerController*& EventInstigator); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ApplyTireMod (Underlying native function: ApplyTireMod 0x89e8798)
	void ApplyTireMod(struct FGameplayTag& NewTireModTag, class AFortPlayerController*& EventInstigator); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.ApplyMaterialAndUseWrapIfPossible (Underlying native function: ApplyMaterialAndUseWrapIfPossible 0x89e861c)
	class UMaterialInstanceDynamic* ApplyMaterialAndUseWrapIfPossible(class UMaterialInterface*& MaterialToUse, int& SlotIndex, bool& bAlwaysCreateMID); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleInterface.AllowsDamageFromOtherVehicle (Underlying native function: AllowsDamageFromOtherVehicle 0x89e8524)
	bool AllowsDamageFromOtherVehicle(); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleInterface.AddVehicleActionNamesAndLabels (Underlying native function: AddVehicleActionNamesAndLabels 0x89e83dc)
	void AddVehicleActionNamesAndLabels(class AFortPlayerPawn*& FortPlayerPawn, struct TArray<struct FName>& SeatActionNames, struct TArray<struct FText>& SeatActionLabels); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

