// Class /Script/FortniteUI.FortEliminationScreen
// Size: 0x448
class UFortEliminationScreen : public UFortPostGameScreen
{
	float ScreenDuration; // 0x420 (0x4)
	bool bShouldAutoAdvance; // 0x424 (0x1)
	unsigned char unreflected_425[0xb]; // 0x425 (0xb) 
	class UAthenaLastKillerInfoWidget* WidgetKillerInfo; // 0x430 (0x8)
	class UCommonButtonBase* ButtonContinue; // 0x438 (0x8)
	class UCommonButtonBase* ButtonReportPlayer; // 0x440 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortEliminationScreen.SetContinueButtonText (Has no native function)
	void SetContinueButtonText(struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortEliminationScreen.PlayIntroAnimation (Has no native function)
	void PlayIntroAnimation(); // (Event | Protected | BlueprintEvent)
};

