// Class /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent
// Size: 0x1e0
class USpecialEventStatComponent : public UActorComponent
{
	struct FMulticastInlineDelegate OnValueChangedDelegate; // 0xa0 (0x10)
	struct TArray<struct FSpecialEventStatDefinition> StatDefinitions; // 0xb0 (0x10)
	struct FSpecialEventStatArray StatFastArray; // 0xc0 (0x120)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetStat (Underlying native function: GetStat 0x76c3320)
	struct FSpecialEventStatArrayEntry GetStat(bool& bOutValid, struct FGameplayTag& LookupTag); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.GetSpecialEventStat (Underlying native function: GetSpecialEventStat 0x76c3204)
	static struct FSpecialEventStatArrayEntry GetSpecialEventStat(bool& bOutValid, class AActor*& Actor, struct FGameplayTag& LookupTag); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustStat (Underlying native function: AdjustStat 0x76c01f4)
	bool AdjustStat(struct FGameplayTag& LookupTag, float& Adjustment, bool& bLogError); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.SpecialEventStatComponent.AdjustSpecialEventStat (Underlying native function: AdjustSpecialEventStat 0x76c00f8)
	static void AdjustSpecialEventStat(class AActor*& Actor, struct FGameplayTag& LookupTag, float& Adjustment); // (Final | Native | Static | Public | BlueprintCallable)
};

