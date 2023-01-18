// Class /Script/FortniteUI.FortSafeZoneEditor
// Size: 0x528
class UFortSafeZoneEditor : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x10]; // 0x4e0 (0x10) 
	bool bCanCancel; // 0x4f0 (0x1)
	unsigned char unreflected_4f1[0xf]; // 0x4f1 (0xf) 
	class UWidgetSwitcher* SwitcherSafeZoneMessage; // 0x500 (0x8)
	class UCommonRichTextBlock* RichTextDefault; // 0x508 (0x8)
	class UCommonRichTextBlock* RichTextSwitchHandheldWarning; // 0x510 (0x8)
	class UCommonButtonLegacy* ButtonBack; // 0x518 (0x8)
	class UCommonButtonLegacy* ButtonDone; // 0x520 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSafeZoneEditor.SetChildSettingReference (Underlying native function: SetChildSettingReference 0xa8c3f2c)
	void SetChildSettingReference(class UFortSetting*& SettingReference); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortSafeZoneEditor.HandleDoneClicked (Underlying native function: HandleDoneClicked 0xa8c3d14)
	void HandleDoneClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSafeZoneEditor.HandleBackClicked (Underlying native function: HandleBackClicked 0xa8c3d00)
	void HandleBackClicked(); // (Final | Native | Private)
};

