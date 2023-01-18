// ScriptStruct /Script/GameplayAbilities.GameplayCueTranslatorNode
// Size: 0x70
struct FGameplayCueTranslatorNode
{
	struct TArray<struct FGameplayCueTranslationLink> Links; // 0x0 (0x10)
	struct FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10 (0x4)
	struct FGameplayTag CachedGameplayTag; // 0x14 (0x4)
	struct FName CachedGameplayTagName; // 0x18 (0x4)
	unsigned char padding_1c[0x54]; // 0x1c (0x54)
};

