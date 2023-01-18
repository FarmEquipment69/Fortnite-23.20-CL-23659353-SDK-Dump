// Class /Script/FortniteGame.FortCollectionBookData
// Size: 0xa0
class UFortCollectionBookData : public UDataAsset
{
	class UDataTable* PageCategoryData; // 0x30 (0x8)
	class UDataTable* PageData; // 0x38 (0x8)
	class UDataTable* SectionData; // 0x40 (0x8)
	class UDataTable* SlotData; // 0x48 (0x8)
	class UDataTable* SlotSourceData; // 0x50 (0x8)
	class UDataTable* XPWeightData; // 0x58 (0x8)
	class UCurveFloat* SlotRarityFactorData; // 0x60 (0x8)
	class UDataTable* BookXPData; // 0x68 (0x8)
	struct TArray<struct FFortItemQuantityPair> UnslotCost; // 0x70 (0x10)
	struct FGameplayTagContainer UnslotCatalysts; // 0x80 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortCollectionBookData.GetPageIdsFromCategoryId (Underlying native function: GetPageIdsFromCategoryId 0x8e7ea28)
	void GetPageIdsFromCategoryId(struct FName& CategoryId, struct TArray<struct FName>& PageIds); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

