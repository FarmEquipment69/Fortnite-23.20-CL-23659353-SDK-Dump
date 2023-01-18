// WidgetBlueprintGeneratedClass /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C
// Size: 0x2e8
class UQualityLevelSelectTimer_C : public UFortHUDQualityLevelSelectTimer
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2d0 (0x8)
	double TextScaleUnderOneSecond; // 0x2d8 (0x8)
	double TextScaleOverOneSecond; // 0x2e0 (0x8)

	/* Functions */

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.UpdateTextScale (Has no native function)
	void UpdateTextScale(double& TimeRemaining, bool& TempboolVariable, bool& CallFuncGreaterDoubleDoubleReturnValue, double& K2NodeSelectDefault, struct FVector2D& CallFuncMakeVector2DReturnValue, double& CallFuncBreakVector2DX, double& CallFuncBreakVector2DY, bool& CallFuncNotEqualDoubleDoubleReturnValue); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressStarted (Has no native function)
	void OnProgressStarted(float& Duration); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnProgressEnded (Has no native function)
	void OnProgressEnded(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnTimeRemainingChanged (Has no native function)
	void OnTimeRemainingChanged(float& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.OnInitialized (Has no native function)
	void OnInitialized(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Login/QualitySelection/QualityLevelSelectTimer.QualityLevelSelectTimer_C.ExecuteUbergraph_QualityLevelSelectTimer (Has no native function)
	void ExecuteUbergraphQualityLevelSelectTimer(int& EntryPoint, float& K2NodeEventDuration, float& K2NodeEventTimeRemaining, double& CallFuncUpdateTextScaleTimeRemainingImplicitCast, double& CallFuncUpdateTextScaleTimeRemainingImplicitCast1); // (Final | 0x00008000)
};

