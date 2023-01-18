// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
// Size: 0x40
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{
	bool bRequiresPassedInTags; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute (Underlying native function: Execute 0x6b1f86c)
	void Execute(struct FGameplayEffectCustomExecutionParameters& ExecutionParams, struct FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)
};

