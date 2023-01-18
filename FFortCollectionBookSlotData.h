// ScriptStruct /Script/FortniteGame.FortCollectionBookSlotData
// Size: 0x48
struct FFortCollectionBookSlotData : FTableRowBase
{
	struct FName SlotXpWeightName; // 0x8 (0x4)
	struct FName SlotSourceId; // 0xc (0x4)
	struct FName SlotSourceId2; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct TWeakObjectPtr<class UFortItemDefinition>> AllowedItems; // 0x18 (0x10)
	struct TArray<struct FGameplayTag> AllowedWorkerPersonalities; // 0x28 (0x10)
	struct FDataTableRowHandle PurchaseCosts; // 0x38 (0x10)
};

