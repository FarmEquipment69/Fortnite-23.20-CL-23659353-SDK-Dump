// ScriptStruct /Script/GameplayAbilities.GameplayTagReponsePair
// Size: 0x28
struct FGameplayTagReponsePair
{
	struct FGameplayTag tag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UClass* ResponseGameplayEffect; // 0x8 (0x8)
	struct TArray<class UClass*> ResponseGameplayEffects; // 0x10 (0x10)
	int SoftCountCap; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

