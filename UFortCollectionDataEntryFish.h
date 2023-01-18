// Class /Script/FortniteGame.FortCollectionDataEntryFish
// Size: 0x100
class UFortCollectionDataEntryFish : public UFortCollectionDataEntry
{
	struct FGameplayTag EntryTag; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FText EntryName; // 0x38 (0x18)
	struct FText EntryDescription; // 0x50 (0x18)
	struct FText AdditionalEntryDescription; // 0x68 (0x18)
	struct TWeakObjectPtr<class UObject> SmallIcon; // 0x80 (0x28)
	struct TWeakObjectPtr<class UObject> LargeIcon; // 0xa8 (0x28)
	struct FScalableFloat Size; // 0xd0 (0x28)
	bool bNeedsProFishingRod; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)
};

