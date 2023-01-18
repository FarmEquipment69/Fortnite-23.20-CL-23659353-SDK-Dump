// ScriptStruct /Script/GameplayAbilities.GameplayCueTranslationManager
// Size: 0x80
struct FGameplayCueTranslationManager
{
	struct TArray<struct FGameplayCueTranslatorNode> TranslationLUT; // 0x0 (0x10)
	struct TMap<struct FName, struct FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10 (0x50)
	class UGameplayTagsManager* TagManager; // 0x60 (0x8)
	unsigned char padding_68[0x18]; // 0x68 (0x18)
};

