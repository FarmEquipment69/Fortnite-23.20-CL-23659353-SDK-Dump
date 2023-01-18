// BlueprintGeneratedClass /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
// Size: 0x408
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x298 (0x8)
	class UAudioComponent* EnterTheStormSound; // 0x2a0 (0x8)
	class UBillboardComponent* Sprite1; // 0x2a8 (0x8)
	float RampUpdownvaluesondeathNewTrack01CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x2b0 (0x4)
	struct TEnumAsByte<ETimelineDirection> RampUpdownvaluesondeathDirection1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x2b4 (0x1)
	unsigned char unreflected_2b5[0x3]; // 0x2b5 (0x3) 
	class UTimelineComponent* RampUpdownvaluesondeath; // 0x2b8 (0x8)
	struct FMulticastInlineDelegate NewEventDispatcher; // 0x2c0 (0x10)
	struct FMulticastInlineDelegate NewEventDispatcher0; // 0x2d0 (0x10)
	struct TArray<struct FVector> ArrayofCloudPositions; // 0x2e0 (0x10)
	int RecalculateTimer; // 0x2f0 (0x4)
	bool IsAlive; // 0x2f4 (0x1)
	bool IsAliveJustChanged; // 0x2f5 (0x1)
	bool IsAlivePrevious; // 0x2f6 (0x1)
	unsigned char unreflected_2f7[0x1]; // 0x2f7 (0x1) 
	int NumberOfticksbeforecheckingforthenearestcloudagainwhenalive; // 0x2f8 (0x4)
	int NumberOfticksbeforecheckingforthenearestcloudagainwhendead; // 0x2fc (0x4)
	class APostProcessVolume* Materialpost; // 0x300 (0x8)
	double postprocessvolumefalloffaroundthethreatvolume; // 0x308 (0x8)
	bool ShowRainEffect; // 0x310 (0x1)
	unsigned char unreflected_311[0x7]; // 0x311 (0x7) 
	double DeltaTime; // 0x318 (0x8)
	double PostProcessTargetWeight; // 0x320 (0x8)
	double CurrentPostProcessWeight; // 0x328 (0x8)
	double PostProcessFadeinspeed; // 0x330 (0x8)
	bool SoundIsActive; // 0x338 (0x1)
	bool SoundWasPreviouslyActive; // 0x339 (0x1)
	bool isOn; // 0x33a (0x1)
	unsigned char unreflected_33b[0x1]; // 0x33b (0x1) 
	struct FLinearColor ThreatFogPostProcessColorMorning; // 0x33c (0x10)
	struct FLinearColor ThreatFogPostProcessColorDay; // 0x34c (0x10)
	struct FLinearColor ThreatFogPostProcessColorEvening; // 0x35c (0x10)
	struct FLinearColor ThreatFogPostProcessColorNight; // 0x36c (0x10)
	unsigned char unreflected_37c[0x4]; // 0x37c (0x4) 
	struct TArray<struct FBox> ArrayofCloudVolumes; // 0x380 (0x10)
	double PostProcessWeightModulation; // 0x390 (0x8)
	double RampUpAndDownAnimValues; // 0x398 (0x8)
	bool ShowRainOnCameraLens; // 0x3a0 (0x1)
	unsigned char unreflected_3a1[0x7]; // 0x3a1 (0x7) 
	class AEmitterCameraLensEffectBase* RainCameraLensEffect; // 0x3a8 (0x8)
	class UParticleSystemComponent* LocalizedParticleSystem; // 0x3b0 (0x8)
	bool IsWorldReady; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x7]; // 0x3b9 (0x7) 
	double RainTraceTimer; // 0x3c0 (0x8)
	struct FVector RainTraceOffset; // 0x3c8 (0x18)
	double RainMultiplierCurrent; // 0x3e0 (0x8)
	double RainSpawnRateExponent; // 0x3e8 (0x8)
	bool TracePrevious; // 0x3f0 (0x1)
	bool IsAthenaWorld; // 0x3f1 (0x1)
	bool bThreatOverride; // 0x3f2 (0x1)
	bool bForceOff; // 0x3f3 (0x1)
	unsigned char unreflected_3f4[0x4]; // 0x3f4 (0x4) 
	struct TScriptInterface<class ICameraLensEffectInterface> CameraLensEffectInterface; // 0x3f8 (0x10)

	/* Functions */

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.SetForceOff (Has no native function)
	void SetForceOff(bool& bForceOff); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox (Has no native function)
	void CalculatePlayerPositionNearBox(struct FVector& BoxMin, struct FVector& BoxMax, double& VolumePlayerCoveragePercentage, double& SafeZoneRadius, double& DistanceToSafeZone, struct FVector& PlayerCameraLoc, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue, double& CallFuncVSizeReturnValue, double& CallFuncAddDoubleDoubleReturnValue, class APlayerCameraManager*& CallFuncGetPlayerCameraManagerReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetCameraLocationReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue1, double& CallFuncMapRangeClampedReturnValue, struct FVector& CallFuncDivideVectorFloatReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector& CallFuncSubtractVectorVectorReturnValue2, double& CallFuncFClampReturnValue, struct FVector& CallFuncDivideVectorFloatReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncBreakVectorX2, double& CallFuncBreakVectorY2, double& CallFuncBreakVectorZ2, double& CallFuncFClampReturnValue1, double& CallFuncFClampReturnValue2, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue2, double& CallFuncFClampReturnValue3, double& CallFuncFClampReturnValue4, double& CallFuncSubtractDoubleDoubleReturnValue3, double& CallFuncSubtractDoubleDoubleReturnValue4, double& CallFuncFClampReturnValue5, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue5, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, double& CallFuncMultiplyDoubleDoubleReturnValue4, double& CallFuncFClampReturnValue6); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc (Has no native function)
	void RampUpdownvaluesondeathFinishedFunc(); // (BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc (Has no native function)
	void RampUpdownvaluesondeathUpdateFunc(); // (BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged (Has no native function)
	void OnThreatCloudsChanged(struct TArray<struct FThreatLocationInfo>& ThreatLocationInfo); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady (Has no native function)
	void OnWorldReady(); // (Event | Protected | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic (Has no native function)
	void VFXRainTracePeriodic(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer (Has no native function)
	void StartTraceTimer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect (Has no native function)
	void ForceUpdateLensEffect(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatOverrideChanged (Has no native function)
	void OnThreatOverrideChanged(bool& bForceThreatOn); // (Event | Public | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint (Has no native function)
	void ExecuteUbergraphThreatPostProcessManagerAndParticleBlueprint(int& EntryPoint, class UFXSystemComponent*& CallFuncGetPrimaryParticleComponentReturnValue, enum EInterfaceValidResult& CallFuncIsInterfaceValidResult, bool& K2NodeSwitchEnumCmpSuccess, int& TempintArrayIndexVariable, class UFXSystemComponent*& CallFuncGetPrimaryParticleComponentReturnValue1, struct TArray<class AActor*>& TempobjectVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsDedicatedServerReturnValue1, class UGameUserSettings*& CallFuncGetGameUserSettingsReturnValue, bool& CallFuncInEditorOrPIEReturnValue, int& CallFuncGetVisualEffectQualityReturnValue, int& CallFuncGetConsoleVariableIntValueReturnValue, int& TempintVariable, bool& K2NodeSwitchIntegerCmpSuccess, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue1, float& K2NodeEventDeltaSeconds, int& CallFuncSelectIntReturnValue, struct FLinearColor& CallFuncGetVectorParameterValueReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, float& CallFuncBreakColorR, float& CallFuncBreakColorG, float& CallFuncBreakColorB, float& CallFuncBreakColorA, double& CallFuncFInterpToReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, int& CallFuncSelectIntReturnValue1, int& CallFuncAddIntIntReturnValue2, bool& CallFuncGreaterIntIntReturnValue, float& CallFuncBreakColorR1, float& CallFuncBreakColorG1, float& CallFuncBreakColorB1, float& CallFuncBreakColorA1, float& CallFuncBreakColorR2, float& CallFuncBreakColorG2, float& CallFuncBreakColorB2, float& CallFuncBreakColorA2, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, float& CallFuncBreakColorR3, float& CallFuncBreakColorG3, float& CallFuncBreakColorB3, float& CallFuncBreakColorA3, struct FVector& CallFuncAddVectorVectorReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue2, struct FVector& CallFuncMakeVectorReturnValue2, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, float& CallFuncBreakColorR4, float& CallFuncBreakColorG4, float& CallFuncBreakColorB4, float& CallFuncBreakColorA4, struct TArray<struct FThreatLocationInfo>& K2NodeEventThreatLocationInfo, double& CallFuncMultiplyDoubleDoubleReturnValue3, struct FThreatLocationInfo& CallFuncArrayGetItem, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncAddDoubleDoubleReturnValue2, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncNotEqualIntIntReturnValue, struct FVector& CallFuncMakeVectorReturnValue3, struct FVector& CallFuncMultiplyVectorFloatReturnValue3, struct FVector& CallFuncAddVectorVectorReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue2, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FLinearColor& K2NodeMakeStructLinearColor, bool& CallFuncNotEqualBoolBoolReturnValue, struct FBox& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue1, double& CallFuncCalculatePlayerPositionNearBoxVolumePlayerCoveragePercentage, double& CallFuncAddDoubleDoubleReturnValue3, double& CallFuncFClampReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue4, class APlayerCameraManager*& CallFuncGetPlayerCameraManagerReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue5, struct TScriptInterface<class ICameraLensEffectInterface>& CallFuncAddGenericCameraLensEffectReturnValue, int& CallFuncRoundReturnValue, bool& CallFuncConvIntToBoolReturnValue, class APlayerCameraManager*& CallFuncGetPlayerCameraManagerReturnValue1, bool& CallFuncIsValidReturnValue, class APawn*& CallFuncGetPlayerPawnReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncBooleanANDReturnValue2, class APawn*& CallFuncGetPlayerPawnReturnValue1, bool& CallFuncIsValidReturnValue3, bool& CallFuncBooleanANDReturnValue3, struct FTransform& CallFuncMakeTransformReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class AThreat_RainAttachedToPlayer_C*& CallFuncFinishSpawningActorReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class APawn*& CallFuncGetPlayerPawnReturnValue2, bool& CallFuncIsValidReturnValue4, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue3, struct FHitResult& CallFuncLineTraceSingleOutHit, bool& CallFuncLineTraceSingleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue6, bool& CallFuncNotEqualDoubleDoubleReturnValue, bool& CallFuncNotPreBoolReturnValue2, float& CallFuncConvBoolToFloatReturnValue, double& CallFuncMultiplyMultiplyFloatFloatReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue7, bool& CallFuncBooleanANDReturnValue4, bool& CallFuncEqualEqualBoolBoolReturnValue, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AFortGameStateAthena*& K2NodeDynamicCastAsFortGameStateAthena, bool& K2NodeDynamicCastbSuccess, enum ESubGame& CallFuncGetSubGameReturnValue, bool& K2NodeSwitchEnumCmpSuccess1, bool& K2NodeEventbForceThreatOn, bool& CallFuncNotPreBoolReturnValue3, bool& CallFuncBooleanANDReturnValue5, bool& CallFuncBooleanORReturnValue, double& K2NodeVariableSetRampUpAndDownAnimValuesImplicitCast, double& K2NodeVariableSetDeltaTimeImplicitCast, float& CallFuncSetScalarParameterValueParameterValueImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast1, double& CallFuncMultiplyDoubleDoubleBImplicitCast1, double& CallFuncMultiplyVectorFloatBImplicitCast2, double& CallFuncMultiplyDoubleDoubleBImplicitCast2, double& CallFuncMultiplyVectorFloatBImplicitCast3, double& CallFuncMultiplyDoubleDoubleBImplicitCast3, double& CallFuncMakeVectorXImplicitCast, double& CallFuncMakeVectorYImplicitCast, double& CallFuncMakeVectorZImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMakeVectorXImplicitCast1, double& CallFuncMakeVectorYImplicitCast1, double& CallFuncMakeVectorZImplicitCast1, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, double& CallFuncMakeVectorXImplicitCast2, double& CallFuncMakeVectorYImplicitCast2, double& CallFuncMakeVectorZImplicitCast2, double& CallFuncMultiplyDoubleDoubleAImplicitCast2, double& CallFuncMakeVectorXImplicitCast3, double& CallFuncMakeVectorYImplicitCast3, double& CallFuncMakeVectorZImplicitCast3, double& CallFuncMultiplyDoubleDoubleAImplicitCast3, float& K2NodeMakeStructAImplicitCast, float& K2NodeMakeStructRImplicitCast, float& K2NodeMakeStructGImplicitCast, float& K2NodeMakeStructBImplicitCast, float& K2NodeVariableSetBlendWeightImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, double& K2NodeVariableSetRainMultiplierCurrentImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature (Has no native function)
	void NewEventDispatcher0DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature (Has no native function)
	void NewEventDispatcherDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

