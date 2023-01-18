// WidgetBlueprintGeneratedClass /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C
// Size: 0x2e8
class UWB_AudioAnalysis_FloatGraph_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UCanvasPanel* CanvasPanel0; // 0x270 (0x8)
	class UTextBlock* Label; // 0x278 (0x8)
	class UProgressBar* ProgressBar; // 0x280 (0x8)
	class UTextBlock* Value; // 0x288 (0x8)
	struct FVector2D Position; // 0x290 (0x10)
	struct FVector2D Size; // 0x2a0 (0x10)
	bool calculated; // 0x2b0 (0x1)
	unsigned char unreflected_2b1[0x3]; // 0x2b1 (0x3) 
	struct FName Parameter; // 0x2b4 (0x4)
	struct TArray<struct FVector2D> Points; // 0x2b8 (0x10)
	int numPoints; // 0x2c8 (0x4)
	struct FLinearColor Color; // 0x2cc (0x10)
	int VectorIndex; // 0x2dc (0x4)
	class UMaterialParameterCollection* Collection; // 0x2e0 (0x8)

	/* Functions */

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.OnPaint (Has no native function)
	void OnPaint(struct FPaintContext& Context); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.calcWidgetSize (Has no native function)
	void calcWidgetSize(struct FGeometry& geom, struct FVector2D& CallFuncGetLocalSizeReturnValue, double& CallFuncBreakVector2DX, double& CallFuncBreakVector2DY, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, struct FVector2D& CallFuncMakeVector2DReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Set Value (Has no native function)
	void SetValue(double& Value, double& CallFuncSubtractDoubleDoubleReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, double& CallFuncBreakVector2DX, double& CallFuncBreakVector2DY, double& CallFuncBreakVector2DX1, double& CallFuncBreakVector2DY1, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FVector2D& CallFuncMakeVector2DReturnValue, float& CallFuncConvIntToFloatReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, float& CallFuncConvIntToFloatReturnValue1, double& CallFuncMultiplyIntFloatReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, struct FVector2D& CallFuncArrayGetItem, int& CallFuncArrayAddReturnValue, double& CallFuncBreakVector2DX2, double& CallFuncBreakVector2DY2, struct FVector2D& CallFuncMakeVector2DReturnValue1, int& CallFuncArrayLengthReturnValue, float& CallFuncConvIntToFloatReturnValue2, bool& CallFuncGreaterIntIntReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FVector2D& CallFuncMakeVector2DReturnValue2, int& CallFuncArrayLengthReturnValue1, int& CallFuncArrayAddReturnValue1, bool& CallFuncLessIntIntReturnValue, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast1, double& CallFuncMultiplyDoubleDoubleAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Tick (Has no native function)
	void Tick(struct FGeometry& MyGeometry, float& InDeltaTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.Initialize MPC (Has no native function)
	void InitializeMPC(struct FName& Parameter, class UMaterialParameterCollection*& Collection, int& VectorIndex); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Sounds/AudioAnalysis/DebugHUD/WB_AudioAnalysis_FloatGraph.WB_AudioAnalysis_FloatGraph_C.ExecuteUbergraph_WB_AudioAnalysis_FloatGraph (Has no native function)
	void ExecuteUbergraphWBAudioAnalysisFloatGraph(int& EntryPoint, bool& CallFuncEqualEqualIntIntReturnValue, struct FName& K2NodeCustomEventParameter, class UMaterialParameterCollection*& K2NodeCustomEventCollection, int& K2NodeCustomEventVectorIndex, struct FGeometry& K2NodeEventMyGeometry, float& K2NodeEventInDeltaTime, float& CallFuncGetScalarParameterValueReturnValue, struct FLinearColor& CallFuncGetVectorParameterValueReturnValue, float& CallFuncBreakColorR, float& CallFuncBreakColorG, float& CallFuncBreakColorB, float& CallFuncBreakColorA, struct FText& CallFuncConvDoubleToTextReturnValue, int& TempintVariable, double& K2NodeSelectDefault, bool& K2NodeEventIsDesignTime, struct FText& CallFuncConvDoubleToTextReturnValue1, bool& CallFuncNotEqualIntIntReturnValue, struct FString& CallFuncConvIntToStringReturnValue, struct FString& CallFuncSelectStringReturnValue, struct FString& CallFuncConvNameToStringReturnValue, struct FString& CallFuncConcatStrStrReturnValue, struct FText& CallFuncConvStringToTextReturnValue, double& CallFuncConvDoubleToTextValueImplicitCast, double& CallFuncSetValuevalueImplicitCast, double& K2NodeSelectOption0ImplicitCast, double& K2NodeSelectOption1ImplicitCast, double& K2NodeSelectOption2ImplicitCast, double& K2NodeSelectOption3ImplicitCast, float& CallFuncSetPercentInPercentImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

