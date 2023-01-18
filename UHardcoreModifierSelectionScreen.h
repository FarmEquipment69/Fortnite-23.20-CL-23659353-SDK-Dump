// Class /Script/FortniteUI.HardcoreModifierSelectionScreen
// Size: 0x3d8
class UHardcoreModifierSelectionScreen : public UCommonActivatableWidget
{
	class UCommonTextBlock* TextBlockHeading; // 0x3a8 (0x8)
	class UCommonTextBlock* TextBlockDescription; // 0x3b0 (0x8)
	class UHardcoreModifierListView* ListViewChallenges; // 0x3b8 (0x8)
	class UHardcoreModifierPreviewPane* PreviewPaneModifier; // 0x3c0 (0x8)
	class UCommonButtonLegacy* ButtonSave; // 0x3c8 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x3d0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.HardcoreModifierSelectionScreen.ApplyModifiers (Underlying native function: ApplyModifiers 0xa5091d0)
	void ApplyModifiers(); // (Final | Native | Private)
};

