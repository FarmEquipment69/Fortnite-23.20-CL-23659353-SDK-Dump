// WidgetBlueprintGeneratedClass /Game/Athena/HUD/Team/RebootCardIndicator.RebootCardIndicator_C
// Size: 0x630
class URebootCardIndicator_C : public UAthenaRebootCardIndicator
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5d8 (0x8)
	class UWidgetAnimation* UpdateTime; // 0x5e0 (0x8)
	class UBorder* BorderNameplate; // 0x5e8 (0x8)
	class UImage* burst; // 0x5f0 (0x8)
	class UImage* ImageRebootIcon; // 0x5f8 (0x8)
	class USpacer* IndicatorSpacer; // 0x600 (0x8)
	class UHorizontalBox* RebootCountdownContainer; // 0x608 (0x8)
	class UCommonTextBlock* TimeText; // 0x610 (0x8)
	double CurTime; // 0x618 (0x8)
	double EndTime; // 0x620 (0x8)
	struct FTimerHandle* TimerHandle; // 0x628 (0x8)

	/* Functions */

	// Function /Game/Athena/HUD/Team/RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText (Has no native function)
	void bpUpdateCountdownText(double& CallFuncSubtractDoubleDoubleReturnValue, int& CallFuncFTruncReturnValue, int& CallFuncMaxReturnValue, struct FText& CallFuncConvIntToTextReturnValue, struct FFormatArgumentData& K2NodeMakeStructFormatArgumentData, struct TArray<struct FFormatArgumentData>& K2NodeMakeArrayArray, struct FText& CallFuncFormatReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Team/RebootCardIndicator.RebootCardIndicator_C.SetupCountdown (Has no native function)
	void SetupCountdown(float& StartTimeLocalWorld, float& EndTimeLocalWorld); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/HUD/Team/RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText (Has no native function)
	void UpdateCountdownText(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Team/RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf (Has no native function)
	void HandleDisplayForSelf(bool& bSelf); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/HUD/Team/RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator (Has no native function)
	void ExecuteUbergraphRebootCardIndicator(int& EntryPoint, enum ESlateVisibility& TempbyteVariable, double& TemprealVariable, bool& TempboolVariable, float& K2NodeEventStartTimeLocalWorld, float& K2NodeEventEndTimeLocalWorld, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, bool& CallFuncLessEqualDoubleDoubleReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& K2NodeEventbSelf, enum ESlateVisibility& TempbyteVariable1, double& CallFuncSubtractDoubleDoubleReturnValue2, enum ESlateVisibility& K2NodeSelectDefault, int& CallFuncFTruncReturnValue, bool& CallFuncLessEqualIntIntReturnValue, double& K2NodeVariableSetCurTimeImplicitCast, double& K2NodeVariableSetEndTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

