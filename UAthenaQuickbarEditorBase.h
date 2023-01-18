// Class /Script/FortniteUI.AthenaQuickbarEditorBase
// Size: 0x2b8
class UAthenaQuickbarEditorBase : public UCommonUserWidget
{
	class UCommonButtonGroupBase* EquipButtonGroup; // 0x290 (0x8)
	bool bCheckVisibilityBasedOffInventoryCapacity; // 0x298 (0x1)
	enum EFortQuickBars QuickbarIndex; // 0x299 (0x1)
	unsigned char unreflected_29a[0x6]; // 0x29a (0x6) 
	class UClass* QuickBarSlotButtonClass; // 0x2a0 (0x8)
	int FirstQuickBarSlotIndex; // 0x2a8 (0x4)
	int NumQuickBarSlots; // 0x2ac (0x4)
	unsigned char padding_2b0[0x8]; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaQuickbarEditorBase.SelectPreviousQuickBarSlot (Underlying native function: SelectPreviousQuickBarSlot 0xa4b0770)
	void SelectPreviousQuickBarSlot(bool& bSetFocus); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaQuickbarEditorBase.SelectNextQuickBarSlot (Underlying native function: SelectNextQuickBarSlot 0xa4b06c4)
	void SelectNextQuickBarSlot(bool& bSetFocus); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaQuickbarEditorBase.OnQuickBarSlotButtonCreated (Has no native function)
	void OnQuickBarSlotButtonCreated(class UAthenaQuickBarSlotButtonBase*& QuickBarSlotButton); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaQuickbarEditorBase.GetFirstEquipSlotButton (Underlying native function: GetFirstEquipSlotButton 0xa4af578)
	class UWidget* GetFirstEquipSlotButton(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

