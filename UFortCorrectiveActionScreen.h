// Class /Script/FortniteUI.FortCorrectiveActionScreen
// Size: 0x3d0
class UFortCorrectiveActionScreen : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	class UCommonButtonBase* ButtonContinue; // 0x3b8 (0x8)
	class UCommonButtonBase* ButtonPrivacyPolicy; // 0x3c0 (0x8)
	unsigned char padding_3c8[0x8]; // 0x3c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCorrectiveActionScreen.OnShowFailureReason (Has no native function)
	void OnShowFailureReason(struct FText& FailureReason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortCorrectiveActionScreen.OnShowCorrectiveActionProcessing (Has no native function)
	void OnShowCorrectiveActionProcessing(bool& bShowProcessing); // (Event | Protected | BlueprintEvent)
};

