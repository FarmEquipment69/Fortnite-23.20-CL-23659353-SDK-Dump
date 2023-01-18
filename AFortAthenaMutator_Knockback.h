// Class /Script/KnockbackRuntime.FortAthenaMutator_Knockback
// Size: 0x570
class AFortAthenaMutator_Knockback : public AFortAthenaMutator
{
	bool bStorePlayerKnockbackData; // 0x330 (0x1)
	bool bReplicatePlayerKnockbackData; // 0x331 (0x1)
	unsigned char unreflected_332[0x6]; // 0x332 (0x6) 
	struct FMulticastInlineDelegate OnPlayerKnockbackDataChanged; // 0x338 (0x10)
	struct FKnockbackMutatorDataArray AllPlayersKnockbackData; // 0x348 (0x120)
	struct FScalableFloat bDisplayKnockbackDamageNumbersAsPercentage; // 0x468 (0x28)
	struct FScalableFloat ConvertToKnockbackDamageMultiplier; // 0x490 (0x28)
	struct FScalableFloat PercentDamageLowMaxThreshold; // 0x4b8 (0x28)
	struct FScalableFloat PercentDamageMediumMaxThreshold; // 0x4e0 (0x28)
	float KnockbackMultiplierInitialValue; // 0x508 (0x4)
	unsigned char padding_50c[0x64]; // 0x50c (0x64)

	/* Functions */

	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.SetPlayersShouldBreakThroughStructures (Underlying native function: SetPlayersShouldBreakThroughStructures 0x747c180)
	void SetPlayersShouldBreakThroughStructures(bool& bActive, class AFortPlayerPawn*& PlayerPawn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.HandleBlockedCharacterMovement (Underlying native function: HandleBlockedCharacterMovement 0x747c00c)
	void HandleBlockedCharacterMovement(struct FHitResult& InOutImpact, class AFortPawn*& FortPawn); // (Final | Native | Private | HasOutParms)

	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageMediumMaxThreshold (Underlying native function: GetPercentDamageMediumMaxThreshold 0x747bfd8)
	float GetPercentDamageMediumMaxThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetPercentDamageLowMaxThreshold (Underlying native function: GetPercentDamageLowMaxThreshold 0x747bfa4)
	float GetPercentDamageLowMaxThreshold(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetKnockbackMultiplierInitialValue (Underlying native function: GetKnockbackMultiplierInitialValue 0x747bf8c)
	float GetKnockbackMultiplierInitialValue(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/KnockbackRuntime.FortAthenaMutator_Knockback.GetAllPlayersKnockbackData (Underlying native function: GetAllPlayersKnockbackData 0x747bee8)
	struct TArray<struct FKnockbackMutatorData> GetAllPlayersKnockbackData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

