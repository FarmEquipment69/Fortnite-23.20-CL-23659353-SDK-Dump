// Class /Script/UMG.DynamicEntryBox
// Size: 0x230
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
	class UClass* EntryWidgetClass; // 0x228 (0x8)

	/* Functions */

	// Function /Script/UMG.DynamicEntryBox.Reset (Underlying native function: Reset 0x265f5e4)
	void Reset(bool& bDeleteWidgets); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBox.RemoveEntry (Underlying native function: RemoveEntry 0x9aed1fc)
	void RemoveEntry(class UUserWidget*& EntryWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntryOfClass (Underlying native function: BP_CreateEntryOfClass 0x9aeba7c)
	class UUserWidget* BPCreateEntryOfClass(class UClass*& EntryClass); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/UMG.DynamicEntryBox.BP_CreateEntry (Underlying native function: BP_CreateEntry 0x2618d38)
	class UUserWidget* BPCreateEntry(); // (Final | Native | Private | BlueprintCallable)
};

