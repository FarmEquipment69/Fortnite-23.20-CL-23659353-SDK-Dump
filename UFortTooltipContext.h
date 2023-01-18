// Class /Script/FortniteGame.FortTooltipContext
// Size: 0x70
class UFortTooltipContext : public UObject
{
	struct TWeakObjectPtr<class UAbilitySystemComponent> SourceAbilitySystem; // 0x28 (0x8)
	struct TWeakObjectPtr<class UAbilitySystemComponent> DestAbilitySystem; // 0x30 (0x8)
	int TreatAsLevel; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FGameplayTagContainer TagContainer; // 0x40 (0x20)
	class UObject* ComparisonObject; // 0x60 (0x8)
	class UFortRegisteredPlayerInfo* PlayerInfo; // 0x68 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortTooltipContext.SpawnTooltipContextWithSource_Advanced (Underlying native function: SpawnTooltipContextWithSource_Advanced 0x8f9bbd8)
	static class UFortTooltipContext* SpawnTooltipContextWithSourceAdvanced(class UClass*& TooltipContextClass, class APlayerController*& SourcePlayerController); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltipContext.SpawnTooltipContextWithSource (Underlying native function: SpawnTooltipContextWithSource 0x8f9bb58)
	static class UFortTooltipContext* SpawnTooltipContextWithSource(class APlayerController*& SourcePlayerController); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltipContext.SpawnTooltipContextWithNetID_Advanced (Underlying native function: SpawnTooltipContextWithNetID_Advanced 0x8f9b9f8)
	static class UFortTooltipContext* SpawnTooltipContextWithNetIDAdvanced(class UClass*& TooltipContextClass, class UObject*& WorldContextObject, struct FUniqueNetIdRepl& UniqueId); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltipContext.SpawnTooltipContextWithNetID (Underlying native function: SpawnTooltipContextWithNetID 0x8f9b8f0)
	static class UFortTooltipContext* SpawnTooltipContextWithNetID(class UObject*& WorldContextObject, struct FUniqueNetIdRepl& UniqueId); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltipContext.SpawnTooltipContext_Advanced (Underlying native function: SpawnTooltipContext_Advanced 0x8f9bca8)
	static class UFortTooltipContext* SpawnTooltipContextAdvanced(class UClass*& TooltipContextClass); // (Final | BlueprintCosmetic | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortTooltipContext.SpawnTooltipContext (Underlying native function: SpawnTooltipContext 0x8f9b8bc)
	static class UFortTooltipContext* SpawnTooltipContext(); // (Final | 0x00000002 | BlueprintCosmetic | Native | Static | Public | BlueprintCallable)
};

