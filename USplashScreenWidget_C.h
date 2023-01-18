// WidgetBlueprintGeneratedClass /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C
// Size: 0x550
class USplashScreenWidget_C : public UFortSplashScreenWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x4f0 (0x8)
	class UWBP_UIKit_Button_Loud_C* ButtonPressToStart; // 0x4f8 (0x8)
	class UCommonLazyImage* IFortnite; // 0x500 (0x8)
	struct FText GamepadText; // 0x508 (0x18)
	struct FText MouseText; // 0x520 (0x18)
	struct FText MobileText; // 0x538 (0x18)

	/* Functions */

	// Function /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C.BP_OnActivated (Has no native function)
	void BPOnActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C.OnInputMethodChanged (Has no native function)
	void OnInputMethodChanged(enum ECommonInputType& InputType); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/SplashScreen/SplashScreenWidget.SplashScreenWidget_C.ExecuteUbergraph_SplashScreenWidget (Has no native function)
	void ExecuteUbergraphSplashScreenWidget(int& EntryPoint, class UMusicEventSubsystem*& CallFuncGetGameInstanceSubsystemReturnValue, class UAudioComponent*& CallFuncAddEventReturnValue, enum ECommonInputType& K2NodeEventInputType, bool& CallFuncEqualEqualByteByteReturnValue, class UFortGlobalUIContext*& CallFuncGetContextReturnValue, bool& TempboolVariable, bool& CallFuncIsMobileAppReturnValue, struct FText& K2NodeSelectDefault); // (Final | 0x00008000 | HasDefaults)
};

