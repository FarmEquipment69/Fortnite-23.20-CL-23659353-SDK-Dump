// Class /Script/FortniteConversationUI.FortConversationOption
// Size: 0x1550
class UFortConversationOption : public UFortRadialPickerEntry
{
	class USoundBase* OnOptionConfirmedSound; // 0x1490 (0x8)
	class USoundBase* OnOptionHoveredSound; // 0x1498 (0x8)
	class UCommonVisibilitySwitcher* SwitcherDisplayAsset; // 0x14a0 (0x8)
	struct TWeakObjectPtr<class UObject> DefaultSoftTaskIcon; // 0x14a8 (0x28)
	struct TWeakObjectPtr<class USoundBase> DefaultConfirmChoiceSound; // 0x14d0 (0x28)
	struct TWeakObjectPtr<class USoundBase> DefaultHoverChoiceSound; // 0x14f8 (0x28)
	unsigned char padding_1520[0x30]; // 0x1520 (0x30)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation (Has no native function)
	void OnSetupPivotFromRadialInformation(int& NumElements, int& ItemIndex); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromItemDef (Has no native function)
	void OnSetupFromItemDef(class UFortItem*& Item); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset (Has no native function)
	void OnSetupFromDisplayAsset(class UObject*& DisplayAsset); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationOption.OnOptionConfirmed (Has no native function)
	void OnOptionConfirmed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationOption.IsAvailable (Underlying native function: IsAvailable 0x7172310)
	bool IsAvailable(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

