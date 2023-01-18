// Class /Script/RockVehicleRuntime.RockVehicle
// Size: 0x1c10
class ARockVehicle : public AFortAthenaSKVehicle
{
	float InputSwivelPitch; // 0x19c8 (0x4)
	float InputSwivelYaw; // 0x19cc (0x4)
	unsigned char bInputReverseCamera; // 0x19d0 (0x1)
	unsigned char bHasDoubleJumped; // 0x19d0 (0x1)
	unsigned char bHasDodged; // 0x19d0 (0x1)
	bool bFreeLookCamera; // 0x19d1 (0x1)
	unsigned char unreflected_19d2[0x6]; // 0x19d2 (0x6) 
	struct FMulticastInlineDelegate OnFreeCamToggled; // 0x19d8 (0x10)
	unsigned char unreflected_19e8[0x1]; // 0x19e8 (0x1) 
	struct FRockRuntimeConfigOverrides RockRuntimeConfigs; // 0x19e9 (0x4)
	unsigned char unreflected_19ed[0x1b]; // 0x19ed (0x1b) 
	struct FMulticastInlineDelegate OnSpringImpact; // 0x1a08 (0x10)
	unsigned char unreflected_1a18[0x78]; // 0x1a18 (0x78) 
	class URockVehicleAnalyticsComponent* RockAnalyticsComp; // 0x1a90 (0x8)
	struct TArray<class URockVehicleAbility*> VehicleAbilities; // 0x1a98 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> VehicleAbilityTickOrder; // 0x1aa8 (0x10)
	class AFortVehicleAudioController* CachedVehicleAudioController; // 0x1ab8 (0x8)
	class URockVehicleAbility_Supersonic* SupersonicAbility; // 0x1ac0 (0x8)
	class URockVehicleAnimInstance* RockAnimInstance; // 0x1ac8 (0x8)
	struct FFortAthenaVehicleInputState PendingDriverInputState; // 0x1ad0 (0x40)
	struct FFortAthenaVehicleInputState PrevDriverInputState; // 0x1b10 (0x40)
	struct FVector EnterExitImpulse; // 0x1b50 (0x18)
	unsigned char padding_1b68[0xa8]; // 0x1b68 (0xa8)

	/* Functions */

	// Function /Script/RockVehicleRuntime.RockVehicle.ServerToggleFreeCam (Underlying native function: ServerToggleFreeCam 0x7544a24)
	void ServerToggleFreeCam(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/RockVehicleRuntime.RockVehicle.ServerSetLegacyDamageValues (Underlying native function: ServerSetLegacyDamageValues 0x75448c4)
	void ServerSetLegacyDamageValues(bool& bDamageFriendlyVehicles, bool& bDamageOtherVehicles, bool& bDamageOwnVehicle, bool& bDamageAllowedFromOtherVehicle); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// DelegateFunction /Script/RockVehicleRuntime.RockVehicle.RockFreeCamToggledDelegate__DelegateSignature (Has no native function)
	void RockFreeCamToggledDelegateDelegateSignature(bool& bFreeCam); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/RockVehicleRuntime.RockVehicle.OnSpringImpact__DelegateSignature (Has no native function)
	void OnSpringImpactDelegateSignature(struct FName& Socket, float& ImpactSpeed, struct FHitResult& OutHit); // (MulticastDelegate | Public | Delegate | HasOutParms)

	// Function /Script/RockVehicleRuntime.RockVehicle.OnRep_FreeLookCamera (Underlying native function: OnRep_FreeLookCamera 0x7544530)
	void OnRepFreeLookCamera(); // (Final | Native | Public)

	// Function /Script/RockVehicleRuntime.RockVehicle.GetThrottleState (Underlying native function: GetThrottleState 0x70f5878)
	float GetThrottleState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RockVehicleRuntime.RockVehicle.GetDriverInput (Underlying native function: GetDriverInput 0x7543f24)
	struct FFortAthenaVehicleInputState GetDriverInput(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RockVehicleRuntime.RockVehicle.GetCurrentRockRuntimeConfigOverrides (Underlying native function: GetCurrentRockRuntimeConfigOverrides 0x7543f0c)
	struct FRockRuntimeConfigOverrides GetCurrentRockRuntimeConfigOverrides(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

