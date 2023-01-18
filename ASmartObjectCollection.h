// Class /Script/SmartObjectsModule.SmartObjectCollection
// Size: 0x338
class ASmartObjectCollection : public AActor
{
	struct FBox Bounds; // 0x288 (0x38)
	struct TArray<struct FSmartObjectCollectionEntry> CollectionEntries; // 0x2c0 (0x10)
	struct TMap<struct FSmartObjectHandle, struct FSoftObjectPath> RegisteredIdToObjectMap; // 0x2d0 (0x50)
	struct TArray<class USmartObjectDefinition*> Definitions; // 0x320 (0x10)
	unsigned char padding_330[0x8]; // 0x330 (0x8)
};

