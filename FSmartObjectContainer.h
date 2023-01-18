// ScriptStruct /Script/SmartObjectsModule.SmartObjectContainer
// Size: 0xb0
struct FSmartObjectContainer
{
	struct FBox Bounds; // 0x0 (0x38)
	struct TArray<struct FSmartObjectCollectionEntry> CollectionEntries; // 0x38 (0x10)
	struct TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap; // 0x48 (0x50)
	struct TArray<class USmartObjectDefinition*> Definitions; // 0x98 (0x10)
	class UObject* Owner; // 0xa8 (0x8)
};

