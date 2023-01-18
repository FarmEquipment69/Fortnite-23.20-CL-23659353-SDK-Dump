// ScriptStruct /Script/FortniteGame.FortCollectionDataMapping
// Size: 0x40
struct FFortCollectionDataMapping
{
	struct FString CollectionType; // 0x0 (0x10)
	bool bEnsureAllTaggedItemsAreInTheCollection; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct TWeakObjectPtr<class UFortCollectionData> Collection; // 0x18 (0x28)
};

