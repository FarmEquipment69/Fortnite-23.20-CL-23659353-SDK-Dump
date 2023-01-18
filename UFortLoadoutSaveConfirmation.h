// Class /Script/FortniteUI.FortLoadoutSaveConfirmation
// Size: 0x568
class UFortLoadoutSaveConfirmation : public UFortActivatablePanel
{
	class UFortCosmeticLoadoutCardButton* ButtonSaveCurrent; // 0x518 (0x8)
	class UFortCosmeticLoadoutCardButton* ButtonSaveAsNew; // 0x520 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x528 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x530 (0x8)
	unsigned char padding_538[0x30]; // 0x538 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.FortLoadoutSaveConfirmation.OnCanSaveAsNew (Has no native function)
	void OnCanSaveAsNew(bool& bCanSaveAsNew); // (Event | Protected | BlueprintEvent)
};

