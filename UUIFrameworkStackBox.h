// Class /Script/UIFramework.UIFrameworkStackBox
// Size: 0x1b8
class UUIFrameworkStackBox : public UUIFrameworkWidget
{
	struct TEnumAsByte<EOrientation> Orientation; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	struct FUIFrameworkStackBoxSlotList ReplicatedSlotList; // 0x98 (0x120)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkStackBox.RemoveWidget (Underlying native function: RemoveWidget 0x70c59a8)
	void RemoveWidget(class UUIFrameworkWidget*& Widget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/UIFramework.UIFrameworkStackBox.OnRep_Orientation (Underlying native function: OnRep_Orientation 0x70c5744)
	void OnRepOrientation(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkStackBox.AddWidget (Underlying native function: AddWidget 0x70c550c)
	void AddWidget(struct FUIFrameworkStackBoxSlot& Widget); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

