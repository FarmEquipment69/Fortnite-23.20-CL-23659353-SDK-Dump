// Class /Script/SmartObjectsModule.SmartObjectDefinition
// Size: 0x110
class USmartObjectDefinition : public UDataAsset
{
	struct TArray<struct FSmartObjectSlotDefinition> Slots; // 0x30 (0x10)
	struct TArray<class USmartObjectBehaviorDefinition*> DefaultBehaviorDefinitions; // 0x40 (0x10)
	struct FGameplayTagQuery UserTagFilter; // 0x50 (0x48)
	struct FGameplayTagQuery ObjectTagFilter; // 0x98 (0x48)
	struct FGameplayTagContainer ActivityTags; // 0xe0 (0x20)
	class UClass* WorldConditionSchemaClass; // 0x100 (0x8)
	enum ESmartObjectTagMergingPolicy ActivityTagsMergingPolicy; // 0x108 (0x1)
	enum ESmartObjectTagFilteringPolicy UserTagsFilteringPolicy; // 0x109 (0x1)
	unsigned char padding_10a[0x6]; // 0x10a (0x6)
};

