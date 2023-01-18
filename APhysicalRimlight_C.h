// BlueprintGeneratedClass /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C
// Size: 0x354
class APhysicalRimlight_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x290 (0x8)
	class USpotLightComponent* RightSideRimLight; // 0x298 (0x8)
	struct FTransform RightSideRimTransform; // 0x2a0 (0x60)
	struct TArray<class UMaterialInstanceDynamic*> PawnMaterialsALL; // 0x300 (0x10)
	double RimlightCvarBoost; // 0x310 (0x8)
	double RimLightPhysicalIntensity; // 0x318 (0x8)
	double RimlightDistanceFromCamera; // 0x320 (0x8)
	double RimlightOffsetFromCamera; // 0x328 (0x8)
	class APlayerPawn_Athena_C* PlayerPawnAthenaRef; // 0x330 (0x8)
	struct FString lcvarName; // 0x338 (0x10)
	class UMaterialParameterCollection* Materialparams; // 0x348 (0x8)
	struct FName ParameterName; // 0x350 (0x4)

	/* Functions */

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.RimlightAttemptValidation (Has no native function)
	void RimlightAttemptValidation(bool& CallFuncArrayIsValidIndexReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.PhysicalRimlight_AutoGenFunc (Has no native function)
	void PhysicalRimlightAutoGenFunc(struct FString& CVarName, float& CallFuncGetConsoleVariableFloatValueReturnValue, bool& CallFuncEqualEqualStrStrReturnValue, bool& CallFuncEqualEqualStrStrReturnValue1, bool& CallFuncEqualEqualStrStrReturnValue2, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, double& K2NodeVariableSetRimlightCvarBoostImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.UpdateRimlight (Has no native function)
	void UpdateRimlight(struct FLinearColor& CallFuncGetVectorParameterValueReturnValue, struct TScriptInterface<class IFortTimeOfDayManagerInterface>& CallFuncGetContextualTimeOfDayManagerReturnValue, enum EFortDayPhase& TempbyteVariable, class UObject*& CallFuncConvInterfaceToObjectReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, enum EFortDayPhase& CallFuncGetCurrentDayPhaseReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& K2NodeSelectDefault, class APawn*& CallFuncGetPlayerPawnReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue2, struct FVector& CallFuncK2GetActorLocationReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, bool& CallFuncIsValidReturnValue2, struct FVector& CallFuncMakeVectorReturnValue, bool& CallFuncIsValidReturnValue3, class APlayerCameraManager*& CallFuncGetPlayerCameraManagerReturnValue, struct FRotator& CallFuncGetCameraRotationReturnValue, struct FVector& CallFuncGetCameraLocationReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, struct FVector& CallFuncTransformLocationReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, struct FRotator& CallFuncFindLookAtRotationReturnValue, struct FHitResult& CallFuncK2SetWorldRotationSweepHitResult, float& CallFuncSetIntensityNewIntensityImplicitCast, float& CallFuncSetIntensityNewIntensityImplicitCast1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.ValidateRimlight (Has no native function)
	void ValidateRimlight(int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& TempintLoopCounterVariable2, int& CallFuncAddIntIntReturnValue2, int& TempintArrayIndexVariable2, int& TempintArrayIndexVariable3, int& TempintLoopCounterVariable3, int& CallFuncAddIntIntReturnValue3, int& TempintArrayIndexVariable4, int& TempintLoopCounterVariable4, int& CallFuncAddIntIntReturnValue4, bool& CallFuncIsValidReturnValue, bool& CallFuncIsLocallyControlledReturnValue, float& CallFuncGetConsoleVariableFloatValueReturnValue, float& CallFuncGetConsoleVariableFloatValueReturnValue1, float& CallFuncGetConsoleVariableFloatValueReturnValue2, int& TempintLoopCounterVariable5, int& CallFuncAddIntIntReturnValue5, int& CallFuncArrayLengthReturnValue, class UMaterialInstanceDynamic*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncGetConsoleVariableBoolValueReturnValue, bool& CallFuncLessIntIntReturnValue1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue2, int& CallFuncArrayLengthReturnValue3, bool& CallFuncLessIntIntReturnValue2, bool& CallFuncLessIntIntReturnValue3, bool& CallFuncGetConsoleVariableBoolValueReturnValue1, class UMaterialInstanceDynamic*& CallFuncArrayGetItem3, int& CallFuncArrayLengthReturnValue4, bool& CallFuncLessIntIntReturnValue4, class UMaterialInstanceDynamic*& CallFuncArrayGetItem4, int& CallFuncArrayLengthReturnValue5, bool& CallFuncLessIntIntReturnValue5, bool& CallFuncIsValidReturnValue1, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncGetConsoleVariableBoolValueReturnValue2, int& TempintArrayIndexVariable5, class UMaterialInstanceDynamic*& CallFuncArrayGetItem5, class USpotLightComponent*& CallFuncAddComponentReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class AStaticMeshActor*& CallFuncFinishSpawningActorReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.InitRim (Has no native function)
	void InitRim(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Characters/Player/Common/PhysicalRimlight/PhysicalRimlight.PhysicalRimlight_C.ExecuteUbergraph_PhysicalRimlight (Has no native function)
	void ExecuteUbergraphPhysicalRimlight(int& EntryPoint, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, bool& CallFuncHasAuthorityReturnValue, float& K2NodeEventDeltaSeconds, class UDataDrivenCVarEngineSubsystem*& CallFuncGetEngineSubsystemReturnValue, float& CallFuncGetConsoleVariableFloatValueReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& K2NodeVariableSetRimlightCvarBoostImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

