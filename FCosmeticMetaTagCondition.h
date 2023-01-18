// ScriptStruct /Script/FortniteGame.CosmeticMetaTagCondition
// Size: 0xb8
struct FCosmeticMetaTagCondition
{
	enum ECosmeticMetaTagRequirementCategory ItemCategory; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition> SpecificItem; // 0x8 (0x28)
	struct FGameplayTagQuery MetaTagQuery; // 0x30 (0x48)
	struct FGameplayTagContainer RequiredMetaTags; // 0x78 (0x20)
	struct FGameplayTagContainer ExcludedMetaTags; // 0x98 (0x20)
};

