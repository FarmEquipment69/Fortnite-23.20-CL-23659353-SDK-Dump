// Class /Script/UMG.PanelWidget
// Size: 0x160
class UPanelWidget : public UWidget
{
	struct TArray<class UPanelSlot*> Slots; // 0x148 (0x10)
	unsigned char padding_158[0x8]; // 0x158 (0x8)

	/* Functions */

	// Function /Script/UMG.PanelWidget.RemoveChildAt (Underlying native function: RemoveChildAt 0x9b0c340)
	bool RemoveChildAt(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.PanelWidget.RemoveChild (Underlying native function: RemoveChild 0x2d05168)
	bool RemoveChild(class UWidget*& Content); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.PanelWidget.HasChild (Underlying native function: HasChild 0x9b0b4b8)
	bool HasChild(class UWidget*& Content); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.PanelWidget.HasAnyChildren (Underlying native function: HasAnyChildren 0x6a4c23c)
	bool HasAnyChildren(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.PanelWidget.GetChildrenCount (Underlying native function: GetChildrenCount 0x239c43c)
	int GetChildrenCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.PanelWidget.GetChildIndex (Underlying native function: GetChildIndex 0x9b0a6a8)
	int GetChildIndex(class UWidget*& Content); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.PanelWidget.GetChildAt (Underlying native function: GetChildAt 0x24e0968)
	class UWidget* GetChildAt(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.PanelWidget.GetAllChildren (Underlying native function: GetAllChildren 0x1511784)
	struct TArray<class UWidget*> GetAllChildren(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/UMG.PanelWidget.ClearChildren (Underlying native function: ClearChildren 0x15de1d4)
	void ClearChildren(); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.PanelWidget.AddChild (Underlying native function: AddChild 0x2769a60)
	class UPanelSlot* AddChild(class UWidget*& Content); // (Final | Native | Public | BlueprintCallable)
};

