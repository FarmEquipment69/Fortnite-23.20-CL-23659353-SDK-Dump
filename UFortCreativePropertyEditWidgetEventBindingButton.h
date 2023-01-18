// Class /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingButton
// Size: 0x13f0
class UFortCreativePropertyEditWidgetEventBindingButton : public UCommonButtonBase
{
	class UCommonTextBlock* TextName; // 0x13e0 (0x8)
	unsigned char padding_13e8[0x8]; // 0x13e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingButton.OnTextSet (Has no native function)
	void OnTextSet(struct FText& Text); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingButton.OnIsDisplayingButtonOptionsSet (Has no native function)
	void OnIsDisplayingButtonOptionsSet(bool& bIsDisplayingButtonOptions); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCreativePropertyEditWidgetEventBindingButton.OnEventReferenceTypeSet (Has no native function)
	void OnEventReferenceTypeSet(enum EFortGameplayEventReferenceType& EventReferenceType); // (Event | Protected | BlueprintEvent)
};

