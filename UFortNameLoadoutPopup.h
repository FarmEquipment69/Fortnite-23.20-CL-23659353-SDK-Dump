// Class /Script/FortniteUI.FortNameLoadoutPopup
// Size: 0x560
class UFortNameLoadoutPopup : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x10]; // 0x518 (0x10) 
	class UFortCosmeticLockerItem* TargetLoadout; // 0x528 (0x8)
	unsigned char unreflected_530[0x10]; // 0x530 (0x10) 
	class UFortEditableFilteredCountedTextBox* TextEditableLoadoutName; // 0x540 (0x8)
	class UCommonButtonBase* ButtonAccept; // 0x548 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x550 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x558 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortNameLoadoutPopup.OnAcceptFailed (Has no native function)
	void OnAcceptFailed(); // (Event | Protected | BlueprintEvent)
};

