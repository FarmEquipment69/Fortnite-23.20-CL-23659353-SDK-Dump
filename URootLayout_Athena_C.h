// WidgetBlueprintGeneratedClass /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C
// Size: 0x420
class URootLayout_Athena_C : public UFortRootViewportLayout_Athena
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3d0 (0x8)
	class UConfirmationWindow_C* ConfirmationWindow; // 0x3d8 (0x8)
	class UProgressModalWidget_C* ControllerDisconnectedModal; // 0x3e0 (0x8)
	bool bClosingErrorDialog; // 0x3e8 (0x1)
	unsigned char unreflected_3e9[0x7]; // 0x3e9 (0x7) 
	struct FText QuitTitle; // 0x3f0 (0x18)
	struct FText QuitMessage; // 0x408 (0x18)

	/* Functions */

	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.IsConsole (Has no native function)
	bool IsConsole(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419 (Has no native function)
	void DialogResult0099D78247C40A9775C753A2024EA419(enum EFortDialogResult& Result, struct FName& ResultName); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked (Has no native function)
	void OnGameWindowCloseButtonClicked(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.OnModalQueueEmptied_1 (Has no native function)
	void OnModalQueueEmptied1(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena (Has no native function)
	void ExecuteUbergraphRootLayoutAthena(int& EntryPoint, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, enum EFortDialogResult& K2NodeCustomEventResult, struct FName& K2NodeCustomEventResultName, struct FName& TempnameVariable, enum EFortDialogResult& TempbyteVariable, bool& K2NodeSwitchEnumCmpSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UFortAsyncAction_ShowConfirmation_NUI*& CallFuncShowSimpleConfirmationDialogCustomInputReturnValue, bool& CallFuncIsValidReturnValue); // (Final | 0x00008000)
};

