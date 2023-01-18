// Class /Script/FortniteUI.FortPurchaseOverlayModal
// Size: 0x808
class UFortPurchaseOverlayModal : public UFortStoreFrontOfferDetailsWidgetBase
{
	unsigned char unreflected_7d8[0x20]; // 0x7d8 (0x20) 
	class UHorizontalBox* HBoxSuccessfullyPurchased; // 0x7f8 (0x8)
	class UHorizontalBox* HBoxSuccessfullyRefunded; // 0x800 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.ShouldShowAsRefund (Underlying native function: ShouldShowAsRefund 0xa8f2d20)
	bool ShouldShowAsRefund(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.IsLastItem (Underlying native function: IsLastItem 0xa8f04b0)
	bool IsLastItem(int& ItemIndex); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.InitBundleLayout (Has no native function)
	void InitBundleLayout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.HasMultipleItems (Underlying native function: HasMultipleItems 0xa8efc84)
	bool HasMultipleItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.GetQuantityPurchased (Underlying native function: GetQuantityPurchased 0xa8ed6e0)
	int GetQuantityPurchased(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.GetPurchasedItems (Underlying native function: GetPurchasedItems 0xa8ed6c4)
	struct TArray<struct FPurchasedItemInfo> GetPurchasedItems(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortPurchaseOverlayModal.Dismiss (Underlying native function: Dismiss 0xa554d40)
	void Dismiss(); // (Final | Native | Protected | BlueprintCallable)
};

