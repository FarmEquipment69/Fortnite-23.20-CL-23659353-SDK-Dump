// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
// Size: 0x40
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{
	bool bAllowNonNetAuthorityDependencyRegistration; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude (Underlying native function: K2_GetCapturedAttributeMagnitude 0x6b20164)
	float K2GetCapturedAttributeMagnitude(struct FGameplayEffectSpec& EffectSpec, struct FGameplayAttribute& Attribute, struct FGameplayTagContainer& SourceTags, struct FGameplayTagContainer& TargetTags); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags (Underlying native function: GetTargetSpecTags 0x6b20098)
	struct FGameplayTagContainer GetTargetSpecTags(struct FGameplayEffectSpec& EffectSpec); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags (Underlying native function: GetTargetAggregatedTags 0x6b1ff68)
	struct FGameplayTagContainer GetTargetAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags (Underlying native function: GetTargetActorTags 0x6b1fe9c)
	struct FGameplayTagContainer GetTargetActorTags(struct FGameplayEffectSpec& EffectSpec); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags (Underlying native function: GetSourceSpecTags 0x6b1fdd0)
	struct FGameplayTagContainer GetSourceSpecTags(struct FGameplayEffectSpec& EffectSpec); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags (Underlying native function: GetSourceAggregatedTags 0x6b1fca0)
	struct FGameplayTagContainer GetSourceAggregatedTags(struct FGameplayEffectSpec& EffectSpec); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags (Underlying native function: GetSourceActorTags 0x6b1fbd8)
	struct FGameplayTagContainer GetSourceActorTags(struct FGameplayEffectSpec& EffectSpec); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag (Underlying native function: GetSetByCallerMagnitudeByTag 0x6b1fabc)
	float GetSetByCallerMagnitudeByTag(struct FGameplayEffectSpec& EffectSpec, struct FGameplayTag& tag); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName (Underlying native function: GetSetByCallerMagnitudeByName 0x6b1f9a0)
	float GetSetByCallerMagnitudeByName(struct FGameplayEffectSpec& EffectSpec, struct FName& MagnitudeName); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude (Underlying native function: CalculateBaseMagnitude 0x6b1f63c)
	float CalculateBaseMagnitude(struct FGameplayEffectSpec& Spec); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)
};

