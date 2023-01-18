// Class /Script/FortniteUI.PerkSelectionEntryWidget
// Size: 0x2d8
class UPerkSelectionEntryWidget : public UCommonUserWidget
{
	struct FMulticastInlineDelegate OnPerkSelected; // 0x290 (0x10)
	int SelectionIndex; // 0x2a0 (0x4)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	class UFortSpyTechItemDefinition* ItemA; // 0x2a8 (0x8)
	class UFortSpyTechItemDefinition* ItemB; // 0x2b0 (0x8)
	struct TArray<class UFortSpyTechItemDefinition*> AllSelectableItems; // 0x2b8 (0x10)
	struct TArray<class UFortSpyTechItemDefinition*> AllSelectablePassives; // 0x2c8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.PerkSelectionEntryWidget.SetItems_BP (Has no native function)
	void SetItemsBP(class UFortSpyTechItemDefinition*& FirstItem, class UFortSpyTechItemDefinition*& SecondItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.PerkSelectionEntryWidget.OnSelectionMade (Underlying native function: OnSelectionMade 0xa57fc28)
	void OnSelectionMade(); // (Final | Native | Protected | BlueprintCallable)

	// DelegateFunction /Script/FortniteUI.PerkSelectionEntryWidget.OnPerkSelected__DelegateSignature (Has no native function)
	void OnPerkSelectedDelegateSignature(class UPerkSelectionEntryWidget*& Widget); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.PerkSelectionEntryWidget.GetTechSelectVerboseModeEnabled (Underlying native function: GetTechSelectVerboseModeEnabled 0xa57d164)
	bool GetTechSelectVerboseModeEnabled(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

