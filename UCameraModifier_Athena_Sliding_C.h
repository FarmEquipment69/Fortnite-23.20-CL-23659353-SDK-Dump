// BlueprintGeneratedClass /Game/Abilities/Player/Sliding/CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C
// Size: 0x120
class UCameraModifier_Athena_Sliding_C : public UCameraModifier
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x48 (0x8)
	double RightOffset; // 0x50 (0x8)
	double HeightOffset; // 0x58 (0x8)
	double InterpSpeed; // 0x60 (0x8)
	double CameraOffsetBlendInSeconds; // 0x68 (0x8)
	double CameraOffsetAlpha; // 0x70 (0x8)
	bool BlendIn; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	double MinAdditionalFOV; // 0x80 (0x8)
	double MaxAdditionalFOV; // 0x88 (0x8)
	struct FScalableFloat MaxSlideSpeed; // 0x90 (0x28)
	struct FScalableFloat MinSlideSpeed; // 0xb8 (0x28)
	double CameraOffsetBlendOutSeconds; // 0xe0 (0x8)
	double FovOffsetAlpha; // 0xe8 (0x8)
	double FovOffsetBlendOutSeconds; // 0xf0 (0x8)
	double FovOffsetBlendInSeconds; // 0xf8 (0x8)
	double ForwardOffset; // 0x100 (0x8)
	double TargetingAlpha; // 0x108 (0x8)
	double TargetingBlendInSeconds; // 0x110 (0x8)
	double TargetingBlendOutSeconds; // 0x118 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Sliding/CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.BlueprintModifyCamera (Has no native function)
	void BlueprintModifyCamera(float& DeltaTime, struct FVector& ViewLocation, struct FRotator& ViewRotation, float& FOV, struct FVector& NewViewLocation, struct FRotator& NewViewRotation, float& NewFOV, class APlayerCameraManager*& CallFuncGetPlayerCameraManagerReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue, class APlayerController*& CallFuncGetOwningPlayerControllerReturnValue, struct FVector& CallFuncGetRightVectorReturnValue, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, struct FVector& CallFuncGetUpVectorReturnValue, class AFortPlayerPawn*& CallFuncGetPlayerPawnReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncHasMatchingGameplayTagReturnValue, struct FVector& CallFuncConvDoubleToVectorReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue, double& CallFuncSelectFloatReturnValue, double& CallFuncSelectFloatReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncAddDoubleDoubleReturnValue, float& CallFuncGetValueAtLevelReturnValue1, double& CallFuncFClampReturnValue, float& CallFuncGetValueAtLevelReturnValue2, double& CallFuncSubtractDoubleDoubleReturnValue, class APlayerCameraManager*& CallFuncGetPlayerCameraManagerReturnValue1, int64_t& CallFuncConvDoubleToInt64ReturnValue, class APlayerController*& CallFuncGetOwningPlayerControllerReturnValue1, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController1, bool& K2NodeDynamicCastbSuccess2, class AFortPlayerPawn*& CallFuncGetPlayerPawnReturnValue1, double& CallFuncVSizeReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, bool& CallFuncEqualEqualDoubleDoubleReturnValue, double& CallFuncFClampReturnValue1, int64_t& CallFuncConvDoubleToInt64ReturnValue1, float& CallFuncDivideInt64Int64UsingFloatingPointReturnValue, class APlayerCameraManager*& CallFuncGetPlayerCameraManagerReturnValue2, double& CallFuncLerpReturnValue, bool& CallFuncRemoveCameraModifierReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, struct FVector& CallFuncConvDoubleToVectorReturnValue1, double& CallFuncAddDoubleDoubleReturnValue1, struct FVector& CallFuncMultiplyVectorVectorReturnValue1, struct FVector& CallFuncConvDoubleToVectorReturnValue2, struct FVector& CallFuncConvDoubleToVectorReturnValue3, double& CallFuncSelectFloatReturnValue2, double& CallFuncSelectFloatReturnValue3, double& CallFuncDivideDoubleDoubleReturnValue1, bool& TempboolVariable, double& CallFuncMultiplyDoubleDoubleReturnValue4, double& CallFuncMultiplyDoubleDoubleReturnValue5, double& CallFuncAddDoubleDoubleReturnValue2, bool& CallFuncNotPreBoolReturnValue, double& CallFuncFClampReturnValue2, double& CallFuncSelectFloatReturnValue4, double& CallFuncSelectFloatReturnValue5, double& CallFuncDivideDoubleDoubleReturnValue2, struct FVector& CallFuncConvDoubleToVectorReturnValue4, double& CallFuncMultiplyDoubleDoubleReturnValue6, struct FVector& CallFuncMultiplyVectorVectorReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue7, struct FVector& CallFuncMultiplyVectorVectorReturnValue3, double& CallFuncAddDoubleDoubleReturnValue3, double& CallFuncFClampReturnValue3, struct FVector& CallFuncConvDoubleToVectorReturnValue5, struct FVector& CallFuncMultiplyVectorVectorReturnValue4, struct FVector& CallFuncMultiplyVectorVectorReturnValue5, struct FVector& CallFuncAddVectorVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue2, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, double& CallFuncMultiplyDoubleDoubleAImplicitCast2, double& CallFuncAddDoubleDoubleAImplicitCast, float& K2NodeFunctionResultNewFOVImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast1, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncLerpAlphaImplicitCast); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.BlendOut (Has no native function)
	void BlendOut(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C.ExecuteUbergraph_CameraModifier_Athena_Sliding (Has no native function)
	void ExecuteUbergraphCameraModifierAthenaSliding(int& EntryPoint); // (Final | 0x00008000)
};

