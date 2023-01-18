// WidgetBlueprintGeneratedClass /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C
// Size: 0x3f0
class UCorrectiveActionDisplayNameScreen_C : public UFortCorrectiveActionDisplayNameScreen
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3d8 (0x8)
	class UImage* ImageDisplayNameEntrySpinner; // 0x3e0 (0x8)
	class UCommonTextBlock* TextDisplayNameEntryError; // 0x3e8 (0x8)

	/* Functions */

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowFailureReason (Has no native function)
	void OnShowFailureReason(struct FText& FailureReason); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowCorrectiveActionProcessing (Has no native function)
	void OnShowCorrectiveActionProcessing(bool& bShowProcessing); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.OnShowDisplayNameDownloading (Has no native function)
	void OnShowDisplayNameDownloading(bool& bShowDownloading); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/CorrectiveAction/CorrectiveActionDisplayNameScreen.CorrectiveActionDisplayNameScreen_C.ExecuteUbergraph_CorrectiveActionDisplayNameScreen (Has no native function)
	void ExecuteUbergraphCorrectiveActionDisplayNameScreen(int& EntryPoint, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, struct FText& K2NodeEventFailureReason, bool& K2NodeEventbShowProcessing, enum ESlateVisibility& K2NodeSelectDefault, bool& K2NodeEventbShowDownloading); // (Final | 0x00008000 | HasDefaults)
};

