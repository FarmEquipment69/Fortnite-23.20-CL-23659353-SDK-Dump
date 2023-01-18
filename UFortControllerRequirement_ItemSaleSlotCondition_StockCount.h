// Class /Script/FortniteGame.FortControllerRequirement_ItemSaleSlotCondition_StockCount
// Size: 0xa0
class UFortControllerRequirement_ItemSaleSlotCondition_StockCount : public UFortControllerRequirement
{
	struct FSlotSelectionMethod* SellSlot; // 0x30 (0x8)
	struct FThresholdTestConfig RequiredCurrentStockCount; // 0x38 (0x30)
	bool bCurrentStockCheckOnlyValidIfInitialStockMeetsRequirement; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FThresholdTestConfig RequiredInitialStockCount; // 0x70 (0x30)
};

