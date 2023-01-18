// WidgetBlueprintGeneratedClass /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C
// Size: 0x288
class UWB_AudioAnalysis_UI_C : public UFortAudioAnalysisDebugWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UVerticalBox* GraphBox; // 0x270 (0x8)
	struct TArray<class UWB_AudioAnalysis_FloatGraph_C*> Widgets; // 0x278 (0x10)

	/* Functions */

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddScalarParameter (Has no native function)
	void AddScalarParameter(struct FAudioAnalysisParameterScalar& Param); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.AddVectorParameter (Has no native function)
	void AddVectorParameter(struct FAudioAnalysisParameterVector& Param); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ClearParameters (Has no native function)
	void ClearParameters(); // (Event | Public | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_UI.WB_AudioAnalysis_UI_C.ExecuteUbergraph_WB_AudioAnalysis_UI (Has no native function)
	void ExecuteUbergraphWBAudioAnalysisUI(int& EntryPoint, int& TempintLoopCounterVariable, int& TempintArrayIndexVariable, int& CallFuncAddIntIntReturnValue, int& TempintVariable, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, struct FAudioAnalysisParameterScalar& K2NodeEventParam1, class UWB_AudioAnalysis_FloatGraph_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, struct FAudioAnalysisParameterVector& K2NodeEventParam, bool& CallFuncLessIntIntReturnValue, class UWB_AudioAnalysis_FloatGraph_C*& CallFuncCreateReturnValue, class UWB_AudioAnalysis_FloatGraph_C*& CallFuncCreateReturnValue1, class UVerticalBoxSlot*& CallFuncAddChildToVerticalBoxReturnValue, int& CallFuncArrayAddReturnValue, int& CallFuncArrayAddReturnValue1, class UVerticalBoxSlot*& CallFuncAddChildToVerticalBoxReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

