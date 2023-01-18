// WidgetBlueprintGeneratedClass /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C
// Size: 0x518
class ULoginScreen_C : public UFortUIStateWidget_Login
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4c8 (0x8)
	class UConsoleProfileWidget_C* ConsoleProfileWidget; // 0x4d0 (0x8)
	class UImage* DarkBacking; // 0x4d8 (0x8)
	class UOverlay* KeyArtGroup; // 0x4e0 (0x8)
	class UImage* KeyArtBackground; // 0x4e8 (0x8)
	class UImage* KeyArtBackgroundForBlur; // 0x4f0 (0x8)
	class USafeZone* SafeZone; // 0x4f8 (0x8)
	class UCommonTextBlock* TextVersion; // 0x500 (0x8)
	class UBuildWatermark_C* WidgetBuildWatermark; // 0x508 (0x8)
	class UWidget* PlatformSpecificBackBorder; // 0x510 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.BndEvt__LoginScreen_Splash_Screen_K2Node_ComponentBoundEvent_0_OnWidgetActivationChanged__DelegateSignature (Has no native function)
	void BndEvtLoginScreenSplashScreenK2NodeComponentBoundEvent0OnWidgetActivationChangedDelegateSignature(); // (BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.SetKeyArtVisibility (Has no native function)
	void SetKeyArtVisibility(int& NewActiveWidgetIndex); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Foundation/StateLayouts/LoginScreen.LoginScreen_C.ExecuteUbergraph_LoginScreen (Has no native function)
	void ExecuteUbergraphLoginScreen(int& EntryPoint, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, class UFortRuntimeOptions*& CallFuncGetRuntimeOptionsReturnValue, struct FString& CallFuncGetGameVersionReturnValue, struct FText& CallFuncConvStringToTextReturnValue, int& K2NodeEventNewActiveWidgetIndex, bool& TempboolVariable, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue2, bool& CallFuncEqualEqualIntIntReturnValue3, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, class UFortFrontEndContext*& CallFuncGetContextReturnValue1, bool& CallFuncIsMobileGameReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanORReturnValue2, enum ESlateVisibility& K2NodeSelectDefault); // (Final | 0x00008000 | HasDefaults)
};

