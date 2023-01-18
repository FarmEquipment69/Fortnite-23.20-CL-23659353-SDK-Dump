// Class /Script/FortniteUI.FortItemPairsInspectionScreen
// Size: 0x768
class UFortItemPairsInspectionScreen : public UFortItemPreviewScreen
{
	unsigned char unreflected_668[0x20]; // 0x668 (0x20) 
	class UWidget* ContentPurchasedFocusWidget; // 0x688 (0x8)
	unsigned char unreflected_690[0x80]; // 0x690 (0x80) 
	float DefaultVariantCyclingDelay; // 0x710 (0x4)
	float TimeBetweenVariants; // 0x714 (0x4)
	class UFortItemDefinition* PresentedItemDefinition; // 0x718 (0x8)
	enum EPresentationMode PresentationMode; // 0x720 (0x1)
	unsigned char unreflected_721[0x7]; // 0x721 (0x7) 
	class UCommonButtonBase* ButtonBack; // 0x728 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x730 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherPresentationMode; // 0x738 (0x8)
	class UFortItemListPreviewWidget* WidgetItemList; // 0x740 (0x8)
	class UFortVariantListPreviewWidget* WidgetVariantList; // 0x748 (0x8)
	class UFortItemBaseWidget* WidgetItemInfoHeader; // 0x750 (0x8)
	class UFortStoreSkinDetailsPopup* ItemPopupDetails; // 0x758 (0x8)
	class UAthenaCosmeticUnlockingInfo* UnlockingInfo; // 0x760 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemPairsInspectionScreen.SetupInfoHeader (Has no native function)
	void SetupInfoHeader(bool& bShouldShowCard); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPairsInspectionScreen.PlayIntroAnimation (Has no native function)
	void PlayIntroAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPairsInspectionScreen.GetItemInfoHeader (Underlying native function: GetItemInfoHeader 0xa847624)
	class UFortItemBaseWidget* GetItemInfoHeader(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortItemPairsInspectionScreen.BP_UpdatePresentationMode (Has no native function)
	void BPUpdatePresentationMode(enum EPresentationMode& NewMode); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortItemPairsInspectionScreen.BlockScreenContent (Has no native function)
	void BlockScreenContent(bool& bBlockScreen, struct FText& ContentBlockedText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

