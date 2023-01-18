// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C
// Size: 0x2b0
class UErrorLlama_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UImage* Image0; // 0x270 (0x8)
	class UMaterialInstanceDynamic* MIDLlama; // 0x278 (0x8)
	bool bFlippedTexture; // 0x280 (0x1)
	unsigned char unreflected_281[0x7]; // 0x281 (0x7) 
	struct FVector2D CurLookAt2D; // 0x288 (0x10)
	enum ECommonInputType CurInputType; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	double EyeInterpSpeed; // 0x2a0 (0x8)
	double MaterialInputScale; // 0x2a8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.HandleInputTypeChanged (Has no native function)
	void HandleInputTypeChanged(enum ECommonInputType& NewInputType); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.Tick (Has no native function)
	void Tick(struct FGeometry& MyGeometry, float& InDeltaTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.RandomizeColor (Has no native function)
	void RandomizeColor(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.HandleNormalizedInputDirection (Has no native function)
	void HandleNormalizedInputDirection(struct FVector2D& 2DInputVec); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Foundation/Modals/ErrorWindow/ErrorLlama.ErrorLlama_C.ExecuteUbergraph_ErrorLlama (Has no native function)
	void ExecuteUbergraphErrorLlama(int& EntryPoint, double& TemprealVariable, double& TemprealVariable1, double& TemprealVariable2, double& TemprealVariable3, double& TemprealVariable4, double& TemprealVariable5, double& TemprealVariable6, double& TemprealVariable7, double& TemprealVariable8, double& TemprealVariable9, bool& TempboolVariable, double& TemprealVariable10, double& TemprealVariable11, class UCommonInputSubsystem*& CallFuncGetContextReturnValue, double& CallFuncBreakVector2DX, double& CallFuncBreakVector2DY, enum ECommonInputType& CallFuncGetCurrentInputTypeReturnValue, struct FLinearColor& K2NodeMakeStructLinearColor, struct FGeometry& K2NodeEventMyGeometry, float& K2NodeEventInDeltaTime, struct FVector2D& CallFuncGetMousePositionOnPlatformReturnValue, struct FVector2D& CallFuncGetLocalSizeReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, struct FVector2D& CallFuncDivideVector2DFloatReturnValue, struct FVector2D& CallFuncLocalToAbsoluteReturnValue, struct FVector2D& CallFuncSubtractVector2DVector2DReturnValue, struct FVector2D& CallFuncNormal2DReturnValue, bool& CallFuncIsValidReturnValue, int& CallFuncRandomIntegerInRangeReturnValue, double& K2NodeSelectDefault, double& CallFuncGetWorldDeltaSecondsReturnValue, class APlayerController*& CallFuncGetPlayerControllerReturnValue, int& TempintVariable, float& CallFuncGetInputAnalogStickStateStickX, float& CallFuncGetInputAnalogStickStateStickY, double& CallFuncMultiplyDoubleDoubleReturnValue, double& K2NodeSelectDefault1, struct FVector2D& CallFuncMakeVector2DReturnValue, struct FVector2D& CallFuncMultiplyVector2DFloatReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FVector2D& K2NodeCustomEvent2DInputVec, bool& K2NodeSwitchEnumCmpSuccess, double& CallFuncBreakVector2DX1, double& CallFuncBreakVector2DY1, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FVector& CallFuncMakeVectorReturnValue, struct FVector2D& CallFuncMultiplyVector2DFloatReturnValue1, struct FVector& CallFuncRotateAngleAxisReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector2D& CallFuncMakeVector2DReturnValue1, struct FVector2D& CallFuncVector2DInterpToReturnValue, float& K2NodeMakeStructRImplicitCast, float& K2NodeMakeStructGImplicitCast, float& CallFuncVector2DInterpToDeltaTimeImplicitCast, double& CallFuncMakeVector2DXImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncVector2DInterpToInterpSpeedImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

