// Class /Script/FortniteUI.FortActorCanvasSlot
// Size: 0x50
class UFortActorCanvasSlot : public UPanelSlot
{
	struct TEnumAsByte<EHorizontalAlignment> HorizontalAlignment; // 0x38 (0x1)
	struct TEnumAsByte<EVerticalAlignment> VerticalAlignment; // 0x39 (0x1)
	bool bCanAutoRemove; // 0x3a (0x1)
	unsigned char padding_3b[0x15]; // 0x3b (0x15)

	/* Functions */

	// Function /Script/FortniteUI.FortActorCanvasSlot.SetVerticalAlignment (Underlying native function: SetVerticalAlignment 0x2ab3fd0)
	void SetVerticalAlignment(struct TEnumAsByte<EVerticalAlignment>& InVerticalAlignment); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActorCanvasSlot.SetHorizontalAlignment (Underlying native function: SetHorizontalAlignment 0x2a04b28)
	void SetHorizontalAlignment(struct TEnumAsByte<EHorizontalAlignment>& InHorizontalAlignment); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortActorCanvasSlot.SetCanAutoRemove (Underlying native function: SetCanAutoRemove 0x289e360)
	void SetCanAutoRemove(bool& bAllowAutoRemove); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

