// WidgetBlueprintGeneratedClass /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C
// Size: 0x408
class UCorrectiveActionDateOfBirthScreen_C : public UFortCorrectiveActionDateOfBirthScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3f8 (0x8)
	class UCommonTextBlock* TextAgeEntryChallengeError; // 0x400 (0x8)

	/* Functions */

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowFailureReason (Has no native function)
	void OnShowFailureReason(struct FText& FailureReason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.OnShowCorrectiveActionProcessing (Has no native function)
	void OnShowCorrectiveActionProcessing(bool& bShowProcessing); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDateOfBirthScreen.CorrectiveActionDateOfBirthScreen_C.ExecuteUbergraph_CorrectiveActionDateOfBirthScreen (Has no native function)
	void ExecuteUbergraphCorrectiveActionDateOfBirthScreen(int& EntryPoint, class UWBP_InputField_C*& K2NodeDynamicCastAsWBPInputField, bool& K2NodeDynamicCastbSuccess, bool& K2NodeEventbShowProcessing, struct FText& K2NodeEventFailureReason); // (Final | 0x00008000 | HasDefaults)
};

