// Class /Script/ScoutDroneRuntime.FortScoutDrone
// Size: 0x730
class AFortScoutDrone : public ACharacter
{
	unsigned char unreflected_620[0x48]; // 0x620 (0x48) 
	bool bIsDiving; // 0x668 (0x1)
	unsigned char unreflected_669[0x7]; // 0x669 (0x7) 
	struct FScalableFloat DivingEnabled; // 0x670 (0x28)
	bool bIsSpeedBoosting; // 0x698 (0x1)
	unsigned char unreflected_699[0x7]; // 0x699 (0x7) 
	class UNiagaraComponent* NSScoutDroneIdleNative; // 0x6a0 (0x8)
	class UFortScoutDronePickupManager* PickupManagerComponentNative; // 0x6a8 (0x8)
	class UFortAbilitySystemComponent* AbilitySystemComponent; // 0x6b0 (0x8)
	class UFortActorComponent_Affiliation* AffiliationComponent; // 0x6b8 (0x8)
	class UFortAbilitySet* StartupAbilitySet; // 0x6c0 (0x8)
	class AFortPawn* ControllingPlayerPawn; // 0x6c8 (0x8)
	class UFortHealthSet* HealthSet; // 0x6d0 (0x8)
	class UFortChargingSet_ScoutDroneEnergy* EnergySet; // 0x6d8 (0x8)
	float LifespanAfterDeath; // 0x6e0 (0x4)
	struct FFortAttributeInitializationKey* AttributeInitKey; // 0x6e4 (0x8)
	struct TEnumAsByte<EPhysicalSurface> PrimarySurfaceType; // 0x6ec (0x1)
	struct TEnumAsByte<EFortBaseWeaponDamage> WeaponResponseType; // 0x6ed (0x1)
	bool bPlayedDeath; // 0x6ee (0x1)
	unsigned char unreflected_6ef[0x1]; // 0x6ef (0x1) 
	struct FScoutDroneDeferredDestructionData OutOfHealthDismissDelayData; // 0x6f0 (0x10)
	struct FScoutDroneDeferredDestructionData OutOfEnergyDismissDelayData; // 0x700 (0x10)
	struct FMulticastInlineDelegate OnTeamIndexChanged; // 0x710 (0x10)
	class UClass* PawnOverrideComponentClass; // 0x720 (0x8)
	unsigned char padding_728[0x8]; // 0x728 (0x8)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnRep_ControllingPlayerPawn (Underlying native function: OnRep_ControllingPlayerPawn 0x5357e40)
	void OnRepControllingPlayerPawn(); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.OnDamagePlayEffects (Has no native function)
	void OnDamagePlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetHealthPercentage (Underlying native function: GetHealthPercentage 0x5357960)
	float GetHealthPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetForwardAndRightDotProducts_Native (Has no native function)
	void GetForwardAndRightDotProductsNative(float& OutForwardDot, float& OutRightDot); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetDeltaRotator (Underlying native function: GetDeltaRotator 0x53578f0)
	struct FRotator GetDeltaRotator(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GetControllingPlayerPawn (Underlying native function: GetControllingPlayerPawn 0x53578d0)
	class AFortPawn* GetControllingPlayerPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.GameplayCue_Damage (Underlying native function: GameplayCue_Damage 0x5357750)
	void GameplayCueDamage(struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Native | Protected)

	// Function /Script/ScoutDroneRuntime.FortScoutDrone.ChangeMaxSpeedWhenDiving_Native (Has no native function)
	void ChangeMaxSpeedWhenDivingNative(); // (Event | Public | BlueprintEvent)
};

