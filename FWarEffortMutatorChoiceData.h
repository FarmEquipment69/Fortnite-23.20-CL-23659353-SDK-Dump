// ScriptStruct /Script/CorruptionGameplayCodeRuntime.WarEffortMutatorChoiceData
// Size: 0x68
struct FWarEffortMutatorChoiceData
{
	struct FGameplayTag FundingTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> SoftRefsToLoad; // 0x8 (0x10)
	struct TMap<struct FName, struct FScalableFloat> LootTableMods; // 0x18 (0x50)
};

