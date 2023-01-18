// Class /Script/UIFramework.UIFrameworkCanvasBox
// Size: 0x1b0
class UUIFrameworkCanvasBox : public UUIFrameworkWidget
{
	struct FUIFrameworkCanvasBoxSlotList ReplicatedSlotList; // 0x90 (0x120)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkCanvasBox.RemoveWidget (Underlying native function: RemoveWidget 0x70c58a8)
	void RemoveWidget(class UUIFrameworkWidget*& Widget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkCanvasBox.AddWidget (Underlying native function: AddWidget 0x70c52d4)
	void AddWidget(struct FUIFrameworkCanvasBoxSlot& Widget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

