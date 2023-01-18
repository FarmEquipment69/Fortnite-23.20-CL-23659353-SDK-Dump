// WidgetBlueprintGeneratedClass /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C
// Size: 0x3e8
class UCorrectiveActionGuardianEmailScreen_C : public UFortCorrectiveActionGuardianEmailScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3d8 (0x8)
	class UCommonTextBlock* TextEmailEntryChallengeError; // 0x3e0 (0x8)

	/* Functions */

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowFailureReason (Has no native function)
	void OnShowFailureReason(struct FText& FailureReason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.OnShowCorrectiveActionProcessing (Has no native function)
	void OnShowCorrectiveActionProcessing(bool& bShowProcessing); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionGuardianEmailScreen.CorrectiveActionGuardianEmailScreen_C.ExecuteUbergraph_CorrectiveActionGuardianEmailScreen (Has no native function)
	void ExecuteUbergraphCorrectiveActionGuardianEmailScreen(int& EntryPoint, struct FText& K2NodeEventFailureReason, bool& K2NodeEventbShowProcessing, class UWBP_InputField_C*& K2NodeDynamicCastAsWBPInputField, bool& K2NodeDynamicCastbSuccess); // (Final | 0x00008000 | HasDefaults)
};

