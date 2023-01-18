// Class /Script/SaveTheWorldUI.FortCollectionBookSectionPanel
// Size: 0x6b0
class UFortCollectionBookSectionPanel : public UCommonActivatablePanelLegacy
{
	struct FMulticastInlineDelegate OnSectionCloseRequest; // 0x4e0 (0x10)
	struct FMulticastInlineDelegate OnPreviewXPChangeEvent; // 0x4f0 (0x10)
	class UCommonTextBlock* SectionNameTextWidget; // 0x500 (0x8)
	class UFortCollectionBookSlotView* SlotViewWidget; // 0x508 (0x8)
	class UFortCollectionBookPicker* SlotItemPicker; // 0x510 (0x8)
	class UWidget* ContextOverlayWidget; // 0x518 (0x8)
	class UTextBlock* ContextTextWidget; // 0x520 (0x8)
	class UFortCollectionBookSectionCompletionRewardWidget* SectionRewardWidget; // 0x528 (0x8)
	class UWidget* ItemAcquisitionSourceContainerWidget; // 0x530 (0x8)
	class UCommonTextBlock* ItemAcquisitionSourceDescWidget; // 0x538 (0x8)
	class UCommonTextBlock* ItemAcquisitionSourceDesc2Widget; // 0x540 (0x8)
	class UWidget* ResearchRecruitUnslotContainerWidget; // 0x548 (0x8)
	class UCommonTextBlock* PersonRecruitUnavailableMessageWidget; // 0x550 (0x8)
	class UCommonTextBlock* ItemResearchUnavailableMessageWidget; // 0x558 (0x8)
	class UCommonTextBlock* UnslotUnavailableMessageWidget; // 0x560 (0x8)
	struct FDataTableRowHandle BackActionRowHandle; // 0x568 (0x10)
	struct FDataTableRowHandle CloseActionRowHandle; // 0x578 (0x10)
	struct FDataTableRowHandle SlotItemActionRowHandle; // 0x588 (0x10)
	struct FDataTableRowHandle InspectItemActionRowHandle; // 0x598 (0x10)
	struct FDataTableRowHandle InspectCollectionBookItemActionRowHandle; // 0x5a8 (0x10)
	struct FDataTableRowHandle InspectPreviewItemActionRowHandle; // 0x5b8 (0x10)
	struct FDataTableRowHandle OpenPickerActionRowHandle; // 0x5c8 (0x10)
	struct FDataTableRowHandle LogAllowedItemsActionRowHandle; // 0x5d8 (0x10)
	struct FDataTableRowHandle ResearchItemActionRowHandle; // 0x5e8 (0x10)
	struct FDataTableRowHandle RecruitActionRowHandle; // 0x5f8 (0x10)
	struct FDataTableRowHandle UnslotItemActionRowHandle; // 0x608 (0x10)
	enum ECollectionBookSectionNavTarget CurrentNavTarget; // 0x618 (0x1)
	unsigned char unreflected_619[0x7]; // 0x619 (0x7) 
	class UFortCollectionBookSection* AssociatedSection; // 0x620 (0x8)
	bool bHasSummonedPanel; // 0x628 (0x1)
	unsigned char unreflected_629[0x3]; // 0x629 (0x3) 
	struct FFortDialogExternalLatentActionHandle SlotConfirmationDialogLatentHandle; // 0x62c (0x4)
	struct FMulticastInlineDelegate OnShowItemDetailEvent; // 0x630 (0x10)
	struct FMulticastInlineDelegate OnSlotItemConfirmEvent; // 0x640 (0x10)
	struct FMulticastInlineDelegate OnResearchItemConfirmEvent; // 0x650 (0x10)
	struct FMulticastInlineDelegate OnUnslotItemConfirmEvent; // 0x660 (0x10)
	struct FMulticastInlineDelegate OnInspectItemEvent; // 0x670 (0x10)
	unsigned char unreflected_680[0x28]; // 0x680 (0x28) 
	class UClass* SlotConfirmationModalClass; // 0x6a8 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemOperationComplete (Underlying native function: OnUnslotItemOperationComplete 0x7571fe0)
	void OnUnslotItemOperationComplete(class UFortAccountItem*& UnslottedItem, class UFortAccountItem*& OldSlottedItem, struct FName& SlotId); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemComplete (Has no native function)
	void OnUnslotItemComplete(class UFortItem*& UnslottedItem, struct FName& SlotId); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemActionExecuted (Underlying native function: OnUnslotItemActionExecuted 0x7571e60)
	void OnUnslotItemActionExecuted(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete (Underlying native function: OnSlottedItemOperationComplete 0x7571cf8)
	void OnSlottedItemOperationComplete(class UFortAccountItem*& SlottedItem, struct FName& SlotId); // (Final | Native | Private)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted (Underlying native function: OnSlotItemActionExecuted 0x7571a38)
	void OnSlotItemActionExecuted(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonSelected (Underlying native function: OnSlotButtonSelected 0x75719b8)
	void OnSlotButtonSelected(class UFortCollectionBookSlotButton*& SlotButton); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonHovered (Underlying native function: OnSlotButtonHovered 0x7571870)
	void OnSlotButtonHovered(int& ButtonIx); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonContextAction (Underlying native function: OnSlotButtonContextAction 0x75717f0)
	void OnSlotButtonContextAction(enum EFortCollectionBookPopupButtonType& ContextAction); // (Final | Native | Protected)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSectionChanged (Underlying native function: OnSectionChanged 0x7570a10)
	void OnSectionChanged(class UFortCollectionBookSection*& Section); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemOperationComplete (Underlying native function: OnResearchItemOperationComplete 0x7571240)
	void OnResearchItemOperationComplete(class UFortAccountItem*& NewItem, struct FString& TemplateId); // (Final | Native | Private)

	// DelegateFunction /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemAction__DelegateSignature (Has no native function)
	void OnResearchItemActionDelegateSignature(class UFortItem*& SelectedItem, struct FFortCollectionBookSlotData& SlotData); // (MulticastDelegate | Public | Delegate)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnPurchaseItemActionExecuted (Underlying native function: OnPurchaseItemActionExecuted 0x75711b8)
	void OnPurchaseItemActionExecuted(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted (Underlying native function: OnOpenPickerActionExecuted 0x7570fbc)
	void OnOpenPickerActionExecuted(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted (Underlying native function: OnLogAllowedItemsActionExecuted 0x7570f48)
	void OnLogAllowedItemsActionExecuted(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// DelegateFunction /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature (Has no native function)
	void OnItemInspectActionDelegateSignature(class UFortItem*& SelectedItem, bool& EnableItemActions, bool& IsPlaceholderItem); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature (Has no native function)
	void OnItemActionDelegateSignature(class UFortItem*& SelectedItem); // (MulticastDelegate | Public | Delegate)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnInspectActionExecuted (Underlying native function: OnInspectActionExecuted 0x7570bd4)
	void OnInspectActionExecuted(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)

	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnBackActionExecuted (Underlying native function: OnBackActionExecuted 0x75705e0)
	void OnBackActionExecuted(bool& bPassThrough); // (Final | Native | Protected | HasOutParms)
};

