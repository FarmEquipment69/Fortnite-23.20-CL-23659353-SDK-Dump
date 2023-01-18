// ScriptStruct /Script/SmartObjectsModule.SmartObjectCollectionEntry
// Size: 0xe0
struct FSmartObjectCollectionEntry
{
	struct FGameplayTagContainer Tags; // 0x0 (0x20)
	struct FSoftObjectPath Path; // 0x20 (0x18)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct FTransform Transform; // 0x40 (0x60)
	struct FBox Bounds; // 0xa0 (0x38)
	struct FSmartObjectHandle Handle; // 0xd8 (0x4)
	uint32_t DefinitionIdx; // 0xdc (0x4)
};

