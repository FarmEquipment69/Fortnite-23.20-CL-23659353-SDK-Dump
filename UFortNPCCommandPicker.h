// Class /Script/FortniteUI.FortNPCCommandPicker
// Size: 0x3f8
class UFortNPCCommandPicker : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x3b0 (0x3)
	unsigned char unreflected_3b3[0x5]; // 0x3b3 (0x5) 
	class UCommonTextBlock* TextItemName; // 0x3b8 (0x8)
	class UCommonTextBlock* TextWheelLabel; // 0x3c0 (0x8)
	class UFortKeybindWidget* KeybindConfirm; // 0x3c8 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x3d0 (0x8)
	class UFortPickerOverlay* PickerOverlayNPCOrder; // 0x3d8 (0x8)
	struct TArray<struct FNPCCommandEntry> NPCCommandOptions; // 0x3e0 (0x10)
	enum PingCommandType PingCommandSelected; // 0x3f0 (0x1)
	unsigned char padding_3f1[0x7]; // 0x3f1 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.FortNPCCommandPicker.PlaySelectionAnimation (Has no native function)
	void PlaySelectionAnimation(); // (Event | Protected | BlueprintEvent)
};

