// Class /Script/UIFramework.UIFrameworkUserWidget
// Size: 0x1b0
class UUIFrameworkUserWidget : public UUIFrameworkWidget
{
	struct FUIFrameworkUserWidgetSlotList ReplicatedSlotList; // 0x90 (0x120)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkUserWidget.SetWidgetClass (Underlying native function: SetWidgetClass 0x52efd10)
	void SetWidgetClass(struct TWeakObjectPtr<class UClass>& Value); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkUserWidget.SetNamedSlot (Underlying native function: SetNamedSlot 0x52efc20)
	void SetNamedSlot(struct FName& SlotName, class UUIFrameworkWidget*& Widget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

