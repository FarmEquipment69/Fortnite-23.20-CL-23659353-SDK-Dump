// Class /Script/FortniteUI.FortAttributeListItem
// Size: 0x380
class UFortAttributeListItem : public UUserWidget
{
	bool bHoverEnabled; // 0x268 (0x1)
	unsigned char padding_269[0x117]; // 0x269 (0x117)

	/* Functions */

	// Function /Script/FortniteUI.FortAttributeListItem.ValueChanged (Has no native function)
	void ValueChanged(float& Delta); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem.SetPreviewAttribute (Underlying native function: SetPreviewAttribute 0xa8f21c0)
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeListItem.SetDisplayAttribute (Underlying native function: SetDisplayAttribute 0xa8f1c98)
	bool SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute, struct FFortDisplayAttribute& DeltaAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeListItem.PreviewStarted (Has no native function)
	void PreviewStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem.PreviewEnded (Has no native function)
	void PreviewEnded(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem.GetDisplayPreviewCopy (Underlying native function: GetDisplayPreviewCopy 0xa8eb57c)
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute& OutPreviewAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAttributeListItem.GetDisplayAttributeCopy (Underlying native function: GetDisplayAttributeCopy 0xa8eb42c)
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute& OutDisplayAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAttributeListItem.GetCurrentAttributeCopy (Underlying native function: GetCurrentAttributeCopy 0xa8eacc8)
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute& OutDisplayAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAttributeListItem.DisplayAttributeChanged (Has no native function)
	void DisplayAttributeChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem.ClearPreview (Underlying native function: ClearPreview 0xa8ea288)
	void ClearPreview(); // (Final | Native | Public | BlueprintCallable)
};

