// Class /Script/FortniteUI.CreativePropertyEditWidgetBase
// Size: 0x540
class UCreativePropertyEditWidgetBase : public UCommonActivatableWidget
{
	class UUserWidget* ExtraContentWidget; // 0x3a8 (0x8)
	class UFortCreativePropertyEditorDialogBase* DialogWidget; // 0x3b0 (0x8)
	unsigned char unreflected_3b8[0xb0]; // 0x3b8 (0xb0) 
	class UClass* ExtraContentWidgetClass; // 0x468 (0x8)
	bool bAutoCreateDialogWidget; // 0x470 (0x1)
	unsigned char unreflected_471[0x7]; // 0x471 (0x7) 
	class UClass* DialogWidgetClass; // 0x478 (0x8)
	float DeviceOptionValueMin; // 0x480 (0x4)
	float DeviceOptionValueMax; // 0x484 (0x4)
	unsigned char unreflected_488[0x18]; // 0x488 (0x18) 
	struct TArray<struct FText> AvailableStepperValueLabels; // 0x4a0 (0x10)
	int CurrentIndexInStepperValue; // 0x4b0 (0x4)
	int StartingIndexInStepperValue; // 0x4b4 (0x4)
	struct FGameplayTagContainer CachedGrantedContextTags; // 0x4b8 (0x20)
	bool bAlwaysShowEditWidget; // 0x4d8 (0x1)
	unsigned char unreflected_4d9[0x37]; // 0x4d9 (0x37) 
	class UCommonButtonLegacy* ButtonCollapse; // 0x510 (0x8)
	unsigned char padding_518[0x28]; // 0x518 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.SetIsModified (Underlying native function: SetIsModified 0xa6db2b8)
	void SetIsModified(bool& bModified); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.SetCurrentIndexInStepperValue (Underlying native function: SetCurrentIndexInStepperValue 0xa6db02c)
	void SetCurrentIndexInStepperValue(int& InStepperValue); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.RequestSelected (Underlying native function: RequestSelected 0xa6dae70)
	void RequestSelected(class UObject*& ObjectToSelect, bool& bNavigateToItem); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.RequestCloseDialog (Underlying native function: RequestCloseDialog 0xa6dac94)
	void RequestCloseDialog(bool& bSetFocusToOptionsList); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.RefreshGrantedContextTags (Underlying native function: RefreshGrantedContextTags 0x900cf54)
	bool RefreshGrantedContextTags(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.OnEditWidgetSelectedChanged (Has no native function)
	void OnEditWidgetSelectedChanged(bool& bSelected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.OnEditDialogOpenStateChanged (Has no native function)
	void OnEditDialogOpenStateChanged(bool& bIsOpen); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.IsDialogOpen (Underlying native function: IsDialogOpen 0xa6d9bfc)
	bool IsDialogOpen(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.GetStepperLabelForIndex (Underlying native function: GetStepperLabelForIndex 0xa6d8c74)
	struct FText GetStepperLabelForIndex(int& Index); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.GetIsModified (Underlying native function: GetIsModified 0x8b2fcf4)
	bool GetIsModified(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.GetEntryDisplayValue (Underlying native function: GetEntryDisplayValue 0xa6d85b0)
	struct FText GetEntryDisplayValue(); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.GetEntryDisplayName (Underlying native function: GetEntryDisplayName 0xa6d8530)
	struct FText GetEntryDisplayName(); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.GetEntryDescriptionText (Underlying native function: GetEntryDescriptionText 0xa6d84b0)
	struct FText GetEntryDescriptionText(); // (Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.BP_PostInitEditWidget (Has no native function)
	void BPPostInitEditWidget(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.BP_OnModified (Has no native function)
	void BPOnModified(bool& bModified); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.CreativePropertyEditWidgetBase.BP_OnEditWidgetClicked (Has no native function)
	void BPOnEditWidgetClicked(); // (Event | Protected | BlueprintEvent)
};

