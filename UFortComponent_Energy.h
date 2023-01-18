// Class /Script/EnergyRuntime.FortComponent_Energy
// Size: 0x2e8
class UFortComponent_Energy : public UPawnComponent
{
	struct FGameplayTagQuery RechargeDisabledQuery; // 0xa0 (0x48)
	unsigned char unreflected_e8[0x10]; // 0xe8 (0x10) 
	struct FGameplayTagQuery EnergyUseDisabledQuery; // 0xf8 (0x48)
	struct FTimerHandle* BeginRechargeTimerHandle; // 0x140 (0x8)
	struct FGameplayTagContainer EnergyTypeIdentifierTagContainer; // 0x148 (0x20)
	float CurrentEnergy; // 0x168 (0x4)
	float NetEnergyDeltaPerSecond; // 0x16c (0x4)
	unsigned char unreflected_170[0x8]; // 0x170 (0x8) 
	struct FScalableFloat MaxEnergy; // 0x178 (0x28)
	struct FScalableFloat MinEnergyForUsing; // 0x1a0 (0x28)
	struct FScalableFloat RechargeAmountPerSecond; // 0x1c8 (0x28)
	struct FScalableFloat RechargeDelayInSeconds; // 0x1f0 (0x28)
	struct FScalableFloat RechargePercentageLimit; // 0x218 (0x28)
	struct TArray<struct FEnergyChannelingData> ActiveEnergyChannels; // 0x240 (0x10)
	struct TArray<struct FEnergyChannelingData> NewActiveEnergyChannels; // 0x250 (0x10)
	struct TArray<struct FEnergyRegenOverrideData> EnergyRegenOverrides; // 0x260 (0x10)
	struct FMulticastInlineDelegate OnCurrentEnergyChanged; // 0x270 (0x10)
	struct FMulticastInlineDelegate OnEnergyCompletelyDrained; // 0x280 (0x10)
	struct FMulticastInlineDelegate OnEnergyRechargeBegun; // 0x290 (0x10)
	struct FMulticastInlineDelegate OnEnergyRechargeInterrupted; // 0x2a0 (0x10)
	struct FMulticastInlineDelegate OnEnergyRechargeComplete; // 0x2b0 (0x10)
	struct FMulticastInlineDelegate OnEnergyReachedMax; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate OnEnergyReachedMinForUsing; // 0x2d0 (0x10)
	unsigned char bRechargingEnabled; // 0x2e0 (0x1)
	unsigned char bIsRecharging; // 0x2e0 (0x1)
	unsigned char bIsUsingEnergy; // 0x2e0 (0x1)
	unsigned char padding_2e1[0x7]; // 0x2e1 (0x7)

	/* Functions */

	// Function /Script/EnergyRuntime.FortComponent_Energy.UseEnergy (Underlying native function: UseEnergy 0x7299388)
	bool UseEnergy(float& OutAmountOfEnergyUsed, float& AmountOfEnergyToUse, bool& bUseEnergyEvenOnFailure, class UObject*& OptionalEnergyUser, bool& bBroadcastEnergyPercentChanged); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.StopUsingEnergy (Underlying native function: StopUsingEnergy 0x72992b0)
	bool StopUsingEnergy(struct FGameplayTag& EnergyUseIdentifier, class UObject*& OptionalEnergyUser); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.StopAddingEnergy (Underlying native function: StopAddingEnergy 0x729919c)
	bool StopAddingEnergy(struct FGameplayTag& EnergyUseIdentifier, class UObject*& OptionalEnergySource); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.StartUsingEnergy (Underlying native function: StartUsingEnergy 0x7299040)
	bool StartUsingEnergy(float& EnergyToUseToStart, float& EnergyToUsePerSecond, struct FGameplayTag& EnergyUseIdentifier, class UObject*& OptionalEnergyUser); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.StartAddingEnergy (Underlying native function: StartAddingEnergy 0x7298f24)
	bool StartAddingEnergy(float& EnergyToAddPerSecond, struct FGameplayTag& EnergySourceIdentifier, class UObject*& OptionalEnergySource); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.SetAllEnergyUsageFree (Underlying native function: SetAllEnergyUsageFree 0x7298eb8)
	bool SetAllEnergyUsageFree(bool& bShouldEnergyUsageBeFree); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.RemoveRegenDataOverride (Underlying native function: RemoveRegenDataOverride 0x7298e10)
	bool RemoveRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.RegisterMutatorUpdatedDelegate (Underlying native function: RegisterMutatorUpdatedDelegate 0x7298ce8)
	void RegisterMutatorUpdatedDelegate(class APawn*& AffectedPawn); // (Final | Native | Private)

	// Function /Script/EnergyRuntime.FortComponent_Energy.OnPlayerStatePawnSet (Underlying native function: OnPlayerStatePawnSet 0x23cedf0)
	void OnPlayerStatePawnSet(class APlayerState*& Player, class APawn*& NewPawn, class APawn*& OldPawn); // (Final | Native | Private)

	// Function /Script/EnergyRuntime.FortComponent_Energy.OnMutatorUpdated (Underlying native function: OnMutatorUpdated 0x133f1e8)
	void OnMutatorUpdated(); // (Final | Native | Private)

	// Function /Script/EnergyRuntime.FortComponent_Energy.HasSufficientEnergy (Underlying native function: HasSufficientEnergy 0x7298c54)
	bool HasSufficientEnergy(float& EnergyAmountToTest); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnergyRuntime.FortComponent_Energy.HandleControllerChanged (Underlying native function: HandleControllerChanged 0x7298b5c)
	void HandleControllerChanged(class APawn*& Pawn, class AController*& OldController, class AController*& NewController); // (Final | Native | Private)

	// Function /Script/EnergyRuntime.FortComponent_Energy.GetCurrentEnergyPercentage (Underlying native function: GetCurrentEnergyPercentage 0x133f8a8)
	float GetCurrentEnergyPercentage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EnergyRuntime.FortComponent_Energy.ApplyRegenDataOverride (Underlying native function: ApplyRegenDataOverride 0x7298a04)
	void ApplyRegenDataOverride(struct FGameplayTag& RegenOverrideIdentifier, float& NewRechargeAmountPerSecond, float& NewRechargeDelayInSeconds, float& NewRechargePercentageLimit); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EnergyRuntime.FortComponent_Energy.AddEnergy (Underlying native function: AddEnergy 0x72988ac)
	bool AddEnergy(float& OutAmountOfEnergyAdded, float& AmountOfEnergyToAdd, class UObject*& OptionalEnergySource, bool& bBroadcastEnergyPercentChanged); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

