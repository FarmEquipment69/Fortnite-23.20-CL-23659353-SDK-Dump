// Class /Script/FortniteUI.FortAttributeListItem_NUI
// Size: 0x3b0
class UFortAttributeListItem_NUI : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	bool bHoverEnabled; // 0x298 (0x1)
	unsigned char unreflected_299[0x3]; // 0x299 (0x3) 
	struct FGameplayTag StatTag; // 0x29c (0x4)
	unsigned char padding_2a0[0x110]; // 0x2a0 (0x110)

	/* Functions */

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.ValueChanged (Has no native function)
	void ValueChanged(float& Delta); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.SetPreviewAttribute (Underlying native function: SetPreviewAttribute 0xa8f2264)
	void SetPreviewAttribute(struct FFortDisplayAttribute& InPreviewAttribute); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.SetDisplayAttribute (Underlying native function: SetDisplayAttribute 0xa8f1dc4)
	void SetDisplayAttribute(struct FFortDisplayAttribute& InDisplayAttribute); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.PreviewStarted (Has no native function)
	void PreviewStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.PreviewEnded (Has no native function)
	void PreviewEnded(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.HasPreviewAttribute (Underlying native function: HasPreviewAttribute 0xa8efca0)
	bool HasPreviewAttribute(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.GetDisplayPreviewCopy (Underlying native function: GetDisplayPreviewCopy 0xa8eb624)
	void GetDisplayPreviewCopy(struct FFortDisplayAttribute& OutPreviewAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.GetDisplayAttributeCopy (Underlying native function: GetDisplayAttributeCopy 0xa8eb4d4)
	void GetDisplayAttributeCopy(struct FFortDisplayAttribute& OutDisplayAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.GetCurrentAttributeCopy (Underlying native function: GetCurrentAttributeCopy 0xa8ead98)
	void GetCurrentAttributeCopy(struct FFortDisplayAttribute& OutDisplayAttribute); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.DisplayAttributeChanged (Has no native function)
	void DisplayAttributeChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAttributeListItem_NUI.ClearPreview (Underlying native function: ClearPreview 0xa8ea29c)
	void ClearPreview(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

