// BlueprintGeneratedClass /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C
// Size: 0x3a0
class ACameraAnimationTransition_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x290 (0x8)
	float Timeline0NewTrack02750533A46B9AEF2BE294F8153FE4FD4; // 0x298 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0Direction2750533A46B9AEF2BE294F8153FE4FD4; // 0x29c (0x1)
	unsigned char unreflected_29d[0x3]; // 0x29d (0x3) 
	class UTimelineComponent* Timeline0; // 0x2a0 (0x8)
	class AFortnitePartyBackdrop_Camera_C* CameraBR; // 0x2a8 (0x8)
	struct FTransform CameraLocationBR; // 0x2b0 (0x60)
	class AFortnitePartyBackdrop_Camera_C* CameraBR16Player; // 0x310 (0x8)
	class AFortnitePartyBackdrop_Camera_C* CameraCreative; // 0x318 (0x8)
	class AFortnitePartyBackdrop_Camera_C* CameraCreative16Player; // 0x320 (0x8)
	unsigned char unreflected_328[0x8]; // 0x328 (0x8) 
	struct FTransform CameraLocationCreative; // 0x330 (0x60)
	double FOVPostion1; // 0x390 (0x8)
	double FOVPostion2; // 0x398 (0x8)

	/* Functions */

	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, bool& CallFuncBooleanANDReturnValue, struct FTransform& CallFuncGetTransformReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanANDReturnValue2, struct FTransform& CallFuncGetTransformReturnValue1, double& K2NodeVariableSetFOVPostion2ImplicitCast, double& K2NodeVariableSetFOVPostion1ImplicitCast); // (Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraUp (Has no native function)
	void MoveCameraUp(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.MoveCameraDown (Has no native function)
	void MoveCameraDown(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Environments/FrontEnd/Blueprints/CameraAnimationTransition.CameraAnimationTransition_C.ExecuteUbergraph_CameraAnimationTransition (Has no native function)
	void ExecuteUbergraphCameraAnimationTransition(int& EntryPoint, struct FTransform& CallFuncGetTransformReturnValue, struct FTransform& CallFuncTLerpReturnValue, struct FTransform& CallFuncGetTransformReturnValue1, struct FHitResult& CallFuncK2SetActorTransformSweepHitResult, bool& CallFuncK2SetActorTransformReturnValue, struct FTransform& CallFuncTLerpReturnValue1, struct FHitResult& CallFuncK2SetActorTransformSweepHitResult1, bool& CallFuncK2SetActorTransformReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncIsValidReturnValue3, bool& CallFuncBooleanANDReturnValue2, double& CallFuncLerpReturnValue, double& CallFuncLerpAlphaImplicitCast, float& CallFuncSetFieldOfViewInFieldOfViewImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

