// Class /Script/FortniteGame.CreativeDynamicXpDataAsset
// Size: 0x108
class UCreativeDynamicXpDataAsset : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x10]; // 0x30 (0x10) 
	struct TArray<struct FSeasonalDynamicXp*> SeasonalDynamicXp; // 0x40 (0x10)
	float CreativeBudgetModifier; // 0x50 (0x4)
	float AggregatedStatsUpdateIntervalMins; // 0x54 (0x4)
	struct FGameplayTag CreatorTuningRoot; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct TMap<struct FGameplayTag, struct FDynamicXpCreatorAccoladeTuning*> CreatorTuning; // 0x60 (0x50)
	struct FDynamicXpCreatorAccoladeTuning* DefaultTuning; // 0xb0 (0x8)
	float CappedSessionLength; // 0xb8 (0x4)
	struct FDynamicXpCircuitBreaker CircuitBreaker; // 0xbc (0x28)
	struct FCreativeAFKDetectionParameters AFKDetectionParameters; // 0xe4 (0x1c)
	float AfkMinRewardMult; // 0x100 (0x4)
	unsigned char padding_104[0x4]; // 0x104 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.CreativeDynamicXpDataAsset.GetXpBudgetPerMinute (Underlying native function: GetXpBudgetPerMinute 0x87b3f2c)
	float GetXpBudgetPerMinute(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeDynamicXpDataAsset.GetCappedSessionLength (Underlying native function: GetCappedSessionLength 0x2d00a0c)
	float GetCappedSessionLength(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeDynamicXpDataAsset.GetAfkMinRewardMult (Underlying native function: GetAfkMinRewardMult 0x6a4ad48)
	float GetAfkMinRewardMult(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeDynamicXpDataAsset.GetAFKDetectionParameters (Underlying native function: GetAFKDetectionParameters 0x87b21e4)
	struct FCreativeAFKDetectionParameters GetAFKDetectionParameters(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

