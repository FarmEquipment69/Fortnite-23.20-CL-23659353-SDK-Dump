// Class /Script/FortniteUI.AthenaMtxOfferButtonBaseLegacy
// Size: 0x1480
class UAthenaMtxOfferButtonBaseLegacy : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UFortStoreFrontOfferInfo* OfferData; // 0x1438 (0x8)
	class UCommonTextBlock* TextMtxAmount; // 0x1440 (0x8)
	class UCommonTextBlock* TextRealMoneyPrice; // 0x1448 (0x8)
	class UCommonVisibilitySwitcher* OptionalSwitcherCurrencyIcons; // 0x1450 (0x8)
	class UImage* OptionalIMGStarterKit; // 0x1458 (0x8)
	class UCommonLoadGuard* LoadGuardCurrencySpinner; // 0x1460 (0x8)
	unsigned char padding_1468[0x18]; // 0x1468 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMtxOfferButtonBaseLegacy.HandleMtxPurchaseComplete (Underlying native function: HandleMtxPurchaseComplete 0xa57defc)
	void HandleMtxPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // (Final | Native | Private | HasOutParms)
};

