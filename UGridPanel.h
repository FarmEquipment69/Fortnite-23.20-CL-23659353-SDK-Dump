// Class /Script/UMG.GridPanel
// Size: 0x190
class UGridPanel : public UPanelWidget
{
	struct TArray<float> ColumnFill; // 0x160 (0x10)
	struct TArray<float> RowFill; // 0x170 (0x10)
	unsigned char padding_180[0x10]; // 0x180 (0x10)

	/* Functions */

	// Function /Script/UMG.GridPanel.SetRowFill (Underlying native function: SetRowFill 0x9b10b08)
	void SetRowFill(int& RowIndex, float& Coefficient); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridPanel.SetColumnFill (Underlying native function: SetColumnFill 0x9b0d4c4)
	void SetColumnFill(int& ColumnIndex, float& Coefficient); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.GridPanel.AddChildToGrid (Underlying native function: AddChildToGrid 0x9b097a8)
	class UGridSlot* AddChildToGrid(class UWidget*& Content, int& InRow, int& InColumn); // (Final | Native | Public | BlueprintCallable)
};

