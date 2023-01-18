// Class /Script/StoreSelectionUI.FortStoreSelectionScreen
// Size: 0x900
class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x8]; // 0x4e0 (0x8) 
	class UCommonButtonGroupLegacy* EntryBoxButtonGroup; // 0x4e8 (0x8)
	class UFortRealMoneyOffer* StoreOffer; // 0x4f0 (0x8)
	class UCommonLoadGuard* StoreOfferLoadGuard; // 0x4f8 (0x8)
	class UCommonTextBlock* TextHeader; // 0x500 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxOptions; // 0x508 (0x8)
	class UCommonButtonLegacy* ButtonContinue; // 0x510 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x518 (0x8)
	class UCommonRichTextBlock* RichTextInitiallySelectedHint; // 0x520 (0x8)
	struct TScriptInterface<class IPurchaseChoiceRequesterInterface> PurchaseChoiceOwner; // 0x528 (0x10)
	struct TArray<struct FItemData> StoreOptions; // 0x538 (0x10)
	struct TWeakObjectPtr<class UFortMtxOfferData> SoftDisplayAsset; // 0x548 (0x28)
	struct FItemData ItemData[0xc]; // 0x570 (0x48) (ARRAY) 
	struct FText OptionalLabels[0x2]; // 0x8d0 (0x18) (ARRAY) 
};

