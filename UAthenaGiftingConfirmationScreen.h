// Class /Script/GiftingUI.AthenaGiftingConfirmationScreen
// Size: 0x500
class UAthenaGiftingConfirmationScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x30]; // 0x3a8 (0x30) 
	class UFortStoreFrontOfferInfo* PresentedGiftableOfferInfo; // 0x3d8 (0x8)
	class UFortStoreFrontOfferInfo* PresentedOptionalTokenOfferInfo; // 0x3e0 (0x8)
	unsigned char unreflected_3e8[0xbc]; // 0x3e8 (0xbc) 
	float MinGiftSubmissionDelay; // 0x4a4 (0x4)
	float MaxGiftSubmissionDelay; // 0x4a8 (0x4)
	unsigned char unreflected_4ac[0x14]; // 0x4ac (0x14) 
	class UCommonButtonLegacy* ButtonWrapOptions; // 0x4c0 (0x8)
	class UCommonButtonLegacy* ButtonBack; // 0x4c8 (0x8)
	class UCommonButtonLegacy* ButtonMobileClose; // 0x4d0 (0x8)
	class UCommonButtonLegacy* ButtonMtxWallet; // 0x4d8 (0x8)
	class UAthenaGiftingPurchasePanel* PanelGiftingPurchase; // 0x4e0 (0x8)
	class UAthenaGiftingWrapOptionsPanel* PanelWrapOptions; // 0x4e8 (0x8)
	class UAthenaGiftConfirmedPanel* PanelGiftConfirmed; // 0x4f0 (0x8)
	class UAthenaGiftingErrorsPanel* PanelGiftingErrors; // 0x4f8 (0x8)

	/* Functions */

	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.OnPresentationModeChanged (Has no native function)
	void OnPresentationModeChanged(enum EGiftingPresentationMode& NewMode); // (Event | Protected | BlueprintEvent)

	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleTokenOfferPurchaseComplete (Underlying native function: HandleTokenOfferPurchaseComplete 0x744964c)
	void HandleTokenOfferPurchaseComplete(bool& bSuccess, struct TArray<struct FPurchasedItemInfo>& PurchasedItems); // (Final | Native | Private | HasOutParms)

	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.HandleGiftSent (Underlying native function: HandleGiftSent 0x7449270)
	void HandleGiftSent(bool& bSuccess, struct TArray<struct FString>& IneligibleAccounts, struct TArray<struct FString>& ErrorCodes); // (Final | Native | Private | HasOutParms)

	// Function /Script/GiftingUI.AthenaGiftingConfirmationScreen.Dismiss (Underlying native function: Dismiss 0x74491d4)
	void Dismiss(bool& bGiftConfirmed); // (Final | Native | Private | BlueprintCallable)
};

