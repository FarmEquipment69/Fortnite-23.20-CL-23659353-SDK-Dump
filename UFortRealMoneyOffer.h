// Class /Script/FortniteUI.FortRealMoneyOffer
// Size: 0x1470
class UFortRealMoneyOffer : public UFortStoreFrontOfferWidgetBase
{
	class UClass* PurchaseUnavailableModalClass; // 0x1460 (0x8)
	class UClass* RealMoneyDetailsClass; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortRealMoneyOffer.OnUpdateStorePrice (Has no native function)
	void OnUpdateStorePrice(struct FText& InStorePrice); // (0x00000002 | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortRealMoneyOffer.GetSalePriceFromLastAppStore (Underlying native function: GetSalePriceFromLastAppStore 0xa8edb78)
	bool GetSalePriceFromLastAppStore(int& PriceIndex, struct FText& SalePrice, int& ItemQuantity); // (Final | Native | Protected | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

