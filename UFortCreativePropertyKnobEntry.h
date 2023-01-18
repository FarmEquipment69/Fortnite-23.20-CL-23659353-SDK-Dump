// Class /Script/FortniteUI.FortCreativePropertyKnobEntry
// Size: 0x14b0
class UFortCreativePropertyKnobEntry : public UCommonButtonBase
{
	unsigned char unreflected_13e0[0x8]; // 0x13e0 (0x8) 
	struct FMulticastInlineDelegate OnKnobEntryEditWidgetStateChanged; // 0x13e8 (0x10)
	struct FMulticastInlineDelegate OnKnobEntryEditWidgetContextTagsChanged; // 0x13f8 (0x10)
	class UCreativePropertyEditWidgetBase* EntryEditWidget; // 0x1408 (0x8)
	class UClass* FallbackEditWidget; // 0x1410 (0x8)
	class UClass* FallbackUserOptionEditWidget; // 0x1418 (0x8)
	class UClass* FallbackStringUserOptionEditWidget; // 0x1420 (0x8)
	class UClass* FallbackMusicUserOptionEditWidget; // 0x1428 (0x8)
	class UClass* FallbackMessageComponentEditWidget; // 0x1430 (0x8)
	class UClass* FallbackDeviceButtonComponentEditWidget; // 0x1438 (0x8)
	class UClass* FallbackColorUserOptionEditWidget; // 0x1440 (0x8)
	class UClass* FallbackIconUserOptionEditWidget; // 0x1448 (0x8)
	class UClass* FallbackEventDescriptorUserOptionEditWidget; // 0x1450 (0x8)
	class UClass* FallbackEventFunctionUserOptionEditWidget; // 0x1458 (0x8)
	class UClass* FallbackNumericUserOptionEditWidget; // 0x1460 (0x8)
	class UCommonVisibilitySwitcher* SwitcherContent; // 0x1468 (0x8)
	class UPanelWidget* PanelSummaryBox; // 0x1470 (0x8)
	class UPanelWidget* PanelContentBox; // 0x1478 (0x8)
	class UCommonTextBlock* TextDisplayName; // 0x1480 (0x8)
	class UCommonTextBlock* TextDisplayedValue; // 0x1488 (0x8)
	class UNamedSlot* NamedSlotExtraContent; // 0x1490 (0x8)
	class UPanelWidget* PanelDebugText; // 0x1498 (0x8)
	class UCreativePropertyEditWidgetBase* CustomEditWidgetForSanitizeQuery; // 0x14a0 (0x8)
	unsigned char padding_14a8[0x8]; // 0x14a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePropertyKnobEntry.SetIsModified (Underlying native function: SetIsModified 0xa69381c)
	void SetIsModified(bool& bModified); // (Final | Native | Protected | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.FortCreativePropertyKnobEntry.OnKnobEntryEditWidgetStateChanged__DelegateSignature (Has no native function)
	void OnKnobEntryEditWidgetStateChangedDelegateSignature(bool& bOpened); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.FortCreativePropertyKnobEntry.OnKnobEntryEditWidgetContextTagsChanged__DelegateSignature (Has no native function)
	void OnKnobEntryEditWidgetContextTagsChangedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.FortCreativePropertyKnobEntry.GetIsModified (Underlying native function: GetIsModified 0xa691a58)
	bool GetIsModified(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortCreativePropertyKnobEntry.ForceFocusWidget (Underlying native function: ForceFocusWidget 0xa6916bc)
	void ForceFocusWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePropertyKnobEntry.ClearModified (Underlying native function: ClearModified 0xa691380)
	void ClearModified(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativePropertyKnobEntry.BP_PostInitSummaryData (Has no native function)
	void BPPostInitSummaryData(class UCreativePropertyEditWidgetBase*& CustomEditWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyKnobEntry.BP_OnModified (Has no native function)
	void BPOnModified(bool& bModified); // (Event | Protected | BlueprintEvent)
};

