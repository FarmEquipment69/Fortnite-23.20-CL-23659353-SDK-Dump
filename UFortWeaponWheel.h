// Class /Script/FortniteUI.FortWeaponWheel
// Size: 0x420
class UFortWeaponWheel : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x34]; // 0x3a8 (0x34) 
	bool bRememberLastItem; // 0x3dc (0x1)
	unsigned char unreflected_3dd[0x3]; // 0x3dd (0x3) 
	int NumOfQuickBarItems; // 0x3e0 (0x4)
	unsigned char unreflected_3e4[0x4]; // 0x3e4 (0x4) 
	struct FDataTableRowHandle VirtualAcceptInputAction; // 0x3e8 (0x10)
	class UFortSlottedRadialMenu* RadialMenuPicker; // 0x3f8 (0x8)
	class UCommonTextBlock* TextItemName; // 0x400 (0x8)
	class UFortKeybindWidget* KeybindConfirm; // 0x408 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x410 (0x8)
	class UImage* ImageRadialHighlight; // 0x418 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortWeaponWheel.PlaySelectionAnimation (Has no native function)
	void PlaySelectionAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortWeaponWheel.BP_OnItemChosen (Has no native function)
	void BPOnItemChosen(); // (Event | Public | BlueprintEvent)
};

