// Class /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal
// Size: 0x4f0
class UAthenaItemShopPurchaseOverlayModal : public UAthenaItemShopOfferDetailsWidgetBase
{
	unsigned char unreflected_4c0[0x8]; // 0x4c0 (0x8) 
	struct TArray<struct FPurchasedItemInfo> PurchasedItems; // 0x4c8 (0x10)
	unsigned char unreflected_4d8[0x8]; // 0x4d8 (0x8) 
	class UHorizontalBox* HBoxSuccessfullyPurchased; // 0x4e0 (0x8)
	class UHorizontalBox* HBoxSuccessfullyRefunded; // 0x4e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.ShouldShowAsRefund (Underlying native function: ShouldShowAsRefund 0xa557840)
	bool ShouldShowAsRefund(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.IsLastItem (Underlying native function: IsLastItem 0xa55687c)
	bool IsLastItem(int& ItemIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.InitBundleLayout (Has no native function)
	void InitBundleLayout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.HasMultipleItems (Underlying native function: HasMultipleItems 0xa5567bc)
	bool HasMultipleItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.GetQuantityPurchased (Underlying native function: GetQuantityPurchased 0xa5552f0)
	int GetQuantityPurchased(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.GetPurchasedItems (Underlying native function: GetPurchasedItems 0xa5552d4)
	struct TArray<struct FPurchasedItemInfo> GetPurchasedItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaItemShopPurchaseOverlayModal.Dismiss (Underlying native function: Dismiss 0xa554d40)
	void Dismiss(); // (Final | Native | Protected | BlueprintCallable)
};

