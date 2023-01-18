// Class /Script/FortniteUI.FortQuickBarSlotBase
// Size: 0x3b0
class UFortQuickBarSlotBase : public UCommonUserWidget
{
	unsigned char unreflected_290[0x18]; // 0x290 (0x18) 
	class UCommonWidgetSwitcherLegacy* SwitcherTopComboSwitcher; // 0x2a8 (0x8)
	class UCommonWidgetSwitcherLegacy* SwitcherBottomComboSwitcher; // 0x2b0 (0x8)
	class UFortKeybindWidget* KeybindTop; // 0x2b8 (0x8)
	class UFortKeybindWidget* KeybindBottom; // 0x2c0 (0x8)
	class UFortKeybindWidget* KeybindBottomCombo1; // 0x2c8 (0x8)
	class UFortKeybindWidget* KeybindBottomCombo2; // 0x2d0 (0x8)
	class UFortKeybindWidget* KeybindTopComboArrow1; // 0x2d8 (0x8)
	class UFortKeybindWidget* KeybindTopComboArrow2; // 0x2e0 (0x8)
	class UFortKeybindWidget* KeybindBottomComboArrow1; // 0x2e8 (0x8)
	class UFortKeybindWidget* KeybindBottomComboArrow2; // 0x2f0 (0x8)
	class UCommonTextBlock* BottomHoldText; // 0x2f8 (0x8)
	class UImage* TopLeftArrowImage; // 0x300 (0x8)
	class UImage* TopLeftArrowImage2; // 0x308 (0x8)
	class UImage* TopRightArrowImage; // 0x310 (0x8)
	class UImage* TopRightArrowImage2; // 0x318 (0x8)
	class UImage* BottomLeftArrowImage; // 0x320 (0x8)
	class UImage* BottomLeftArrowImage2; // 0x328 (0x8)
	class UImage* BottomRightArrowImage; // 0x330 (0x8)
	class UImage* BottomRightArrowImage2; // 0x338 (0x8)
	class UImage* EmptyImage; // 0x340 (0x8)
	class UFortMultiSizeItemCard* ItemCardMaximized; // 0x348 (0x8)
	class UFortMultiSizeItemCard* ItemCardMinimized; // 0x350 (0x8)
	class UFortItemCooldownWidget* QuickbarSlotCooldown; // 0x358 (0x8)
	class UImage* SlotInteraction; // 0x360 (0x8)
	class UAthenaQuickBarNativeCell* NativeCell; // 0x368 (0x8)
	int SlotIndex; // 0x370 (0x4)
	enum EFortQuickBars QuickBarType; // 0x374 (0x1)
	unsigned char unreflected_375[0x7]; // 0x375 (0x7) 
	unsigned char bShowBottomArrows; // 0x37c (0x1)
	unsigned char bShowTopArrows; // 0x37c (0x1)
	unsigned char bHideKeybindsWhenAbilityUnavailable; // 0x37c (0x1)
	unsigned char bShouldCollapseItemWidgetBorder; // 0x37c (0x1)
	unsigned char DoNotPlaySelectionAnimation; // 0x37d (0x1)
	unsigned char bIsAthenaQuickBar; // 0x37d (0x1)
	unsigned char bKeybindsHidden; // 0x37d (0x1)
	enum EFortItemCardSize ItemCardSize; // 0x37e (0x1)
	unsigned char unreflected_37f[0x1]; // 0x37f (0x1) 
	class UFortItem* Item; // 0x380 (0x8)
	class UFortInputData* InputData; // 0x388 (0x8)
	bool bCheckVisibilityBasedOffInventoryCapacity; // 0x390 (0x1)
	unsigned char unreflected_391[0x3]; // 0x391 (0x3) 
	struct TWeakObjectPtr<class UTutorialHighlight> TutorialHighlight; // 0x394 (0x8)
	bool bDragAndDropEnabled; // 0x39c (0x1)
	unsigned char bUseSlotSizeBySlotUsage; // 0x39d (0x1)
	unsigned char unreflected_39e[0x2]; // 0x39e (0x2) 
	struct TArray<struct FVector2D> SlotSizeBySlotUsage; // 0x3a0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortQuickBarSlotBase.UpdateKeyBindingVisibility (Underlying native function: UpdateKeyBindingVisibility 0xa890130)
	void UpdateKeyBindingVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.UpdateKeyBindingText (Underlying native function: UpdateKeyBindingText 0xa89011c)
	void UpdateKeyBindingText(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.UpdateItemCardsVisibility (Underlying native function: UpdateItemCardsVisibility 0xa8900f4)
	void UpdateItemCardsVisibility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.SetTopComboSwitcherVisibility (Underlying native function: SetTopComboSwitcherVisibility 0xa890074)
	void SetTopComboSwitcherVisibility(enum ESlateVisibility& InVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.SetSlotSelected (Has no native function)
	void SetSlotSelected(bool& bSelected); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.SetQuickbarTypeRuntime (Underlying native function: SetQuickbarTypeRuntime 0xa88fb0c)
	void SetQuickbarTypeRuntime(enum EFortQuickBars& NewQuickBarType, bool& bRefresh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.SetQuickbarIndexRuntime (Underlying native function: SetQuickbarIndexRuntime 0xa88fa2c)
	void SetQuickbarIndexRuntime(int& Index, bool& bRefresh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.SetBottomComboSwitcherVisibility_BP (Has no native function)
	void SetBottomComboSwitcherVisibilityBP(enum ESlateVisibility& InVisibility); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.SetBottomComboSwitcherVisibility (Underlying native function: SetBottomComboSwitcherVisibility 0xa88f5dc)
	void SetBottomComboSwitcherVisibility(enum ESlateVisibility& InVisibility); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.Resize (Underlying native function: Resize 0xa88f548)
	void Resize(enum EFortItemCardSize& CardSize); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.RefreshItemIfSlotChanged (Underlying native function: RefreshItemIfSlotChanged 0xa88f44c)
	void RefreshItemIfSlotChanged(enum EFortQuickBars& InQuickBar, struct TArray<int>& InSlot); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.RefreshItem (Underlying native function: RefreshItem 0xa88f438)
	void RefreshItem(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.RefreshInventoryCapacity (Underlying native function: RefreshInventoryCapacity 0xa88f1b4)
	void RefreshInventoryCapacity(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.OnRefreshItem (Has no native function)
	void OnRefreshItem(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.OnMinigameStarted (Underlying native function: OnMinigameStarted 0xa88f1b4)
	void OnMinigameStarted(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.OnMinigameEnded (Underlying native function: OnMinigameEnded 0xa88f19c)
	void OnMinigameEnded(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.MinimizeSlot (Has no native function)
	void MinimizeSlot(bool& bShouldSkipAnimation); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.MaximizeSlot (Has no native function)
	void MaximizeSlot(bool& bShouldSkipAnimation); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.GetSlotSizeForItem (Underlying native function: GetSlotSizeForItem 0xa88d434)
	struct FVector2D GetSlotSizeForItem(class UFortItem*& InItem); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.GetKeyBindingActionKeyboard (Underlying native function: GetKeyBindingActionKeyboard 0xa88d398)
	struct FName GetKeyBindingActionKeyboard(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.GetKeyBindingActionGamepad (Underlying native function: GetKeyBindingActionGamepad 0xa88d36c)
	struct FName GetKeyBindingActionGamepad(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortQuickBarSlotBase.GetKeyBindingAction (Underlying native function: GetKeyBindingAction 0xa88d340)
	struct FName GetKeyBindingAction(); // (Final | Native | Public | BlueprintCallable)
};

