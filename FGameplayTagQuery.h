// ScriptStruct /Script/GameplayTags.GameplayTagQuery
// Size: 0x48
struct FGameplayTagQuery
{
	int TokenStreamVersion; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FGameplayTag> TagDictionary; // 0x8 (0x10)
	struct TArray<unsigned char> QueryTokenStream; // 0x18 (0x10)
	struct FString UserDescription; // 0x28 (0x10)
	struct FString AutoDescription; // 0x38 (0x10)
};

