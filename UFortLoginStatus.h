// Class /Script/FortniteUI.FortLoginStatus
// Size: 0x580
class UFortLoginStatus : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x40]; // 0x518 (0x40) 
	class UCommonButtonLegacy* ButtonContinue; // 0x558 (0x8)
	class UCommonButtonLegacy* ButtonQuit; // 0x560 (0x8)
	class UCommonTextBlock* TextTitle; // 0x568 (0x8)
	class UCommonTextBlock* TextStatus; // 0x570 (0x8)
	class UCommonButtonLegacy* ButtonStatus; // 0x578 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLoginStatus.SetContinueButtonText (Has no native function)
	void SetContinueButtonText(struct FText& ContinueText); // (Event | Protected | HasOutParms | BlueprintEvent)
};

