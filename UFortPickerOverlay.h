// Class /Script/FortniteUI.FortPickerOverlay
// Size: 0x498
class UFortPickerOverlay : public UCommonActivatableWidget
{
	struct FName GamepadActionName; // 0x3a8 (0x4)
	struct FName KBMActionName; // 0x3ac (0x4)
	struct FName CancelActionName; // 0x3b0 (0x4)
	bool bShouldFlushInputOnActivation; // 0x3b4 (0x1)
	bool bShouldCenterMouseOnActivation; // 0x3b5 (0x1)
	bool bShouldCloseOnEmptySelection; // 0x3b6 (0x1)
	bool bAllowEmptySelection; // 0x3b7 (0x1)
	unsigned char unreflected_3b8[0xa8]; // 0x3b8 (0xa8) 
	bool bRememberLastItem; // 0x460 (0x1)
	unsigned char unreflected_461[0x7]; // 0x461 (0x7) 
	struct FDataTableRowHandle VirtualAcceptInputAction; // 0x468 (0x10)
	class UFortSlottedRadialMenu* RadialMenuPicker; // 0x478 (0x8)
	class UImage* ImageRadialHighlight; // 0x480 (0x8)
	struct FName RadialSelectionMaterialParameterName; // 0x488 (0x4)
	unsigned char unreflected_48c[0x4]; // 0x48c (0x4) 
	class UMaterialInstanceDynamic* RadialHighlightMID; // 0x490 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPickerOverlay.PlaySelectionAnimation (Has no native function)
	void PlaySelectionAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickerOverlay.BP_OnNoItemChosen (Has no native function)
	void BPOnNoItemChosen(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortPickerOverlay.BP_OnItemChosen (Has no native function)
	void BPOnItemChosen(); // (Event | Public | BlueprintEvent)
};

