// BlueprintGeneratedClass /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C
// Size: 0x9e8
class AGCNL_Athena_Tether_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UFortLayeredAudioComponent* FortLayeredAudio; // 0x968 (0x8)
	class UNiagaraComponent* LandFX; // 0x970 (0x8)
	class UNiagaraComponent* WaterFX; // 0x978 (0x8)
	class UStaticMeshComponent* RightSki; // 0x980 (0x8)
	class UStaticMeshComponent* LeftSki; // 0x988 (0x8)
	float ScaleInSkisSkiScalar93783D4A4F91BF9F887B16977978DDB4; // 0x990 (0x4)
	struct TEnumAsByte<ETimelineDirection> ScaleInSkisDirection93783D4A4F91BF9F887B16977978DDB4; // 0x994 (0x1)
	unsigned char unreflected_995[0x3]; // 0x995 (0x3) 
	class UTimelineComponent* ScaleInSkis; // 0x998 (0x8)
	class AFortPlayerPawn* OwningFPP; // 0x9a0 (0x8)
	bool IsInWater; // 0x9a8 (0x1)
	unsigned char unreflected_9a9[0x7]; // 0x9a9 (0x7) 
	double NormalizedSpeed; // 0x9b0 (0x8)
	double TurnSpeed; // 0x9b8 (0x8)
	double ForceFeedbackIntensity; // 0x9c0 (0x8)
	struct FTimerHandle* ScaleInSkisTimerHandle; // 0x9c8 (0x8)
	double SkiScaleInDelay; // 0x9d0 (0x8)
	struct TScriptInterface<class ICameraLensEffectInterface> CameraLensEffectInterface; // 0x9d8 (0x10)

	/* Functions */

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.WhileActive (Has no native function)
	bool WhileActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateAudio (Has no native function)
	void UpdateAudio(int& Surface, float& CallFuncConvIntToFloatReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncAbsReturnValue, float& CallFuncSetFloatParameterExtValueImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast, float& CallFuncSetFloatParameterExtValueImplicitCast1, float& CallFuncSetFloatParameterExtValueImplicitCast2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__FinishedFunc (Has no native function)
	void ScaleInSkisFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkis__UpdateFunc (Has no native function)
	void ScaleInSkisUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnApplication (Has no native function)
	void OnApplication(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.BndEvt__FortLayeredAudio_K2Node_ComponentBoundEvent_0_OnLayeredAudioComponentOneshot__DelegateSignature (Has no native function)
	void BndEvtFortLayeredAudioK2NodeComponentBoundEvent0OnLayeredAudioComponentOneshotDelegateSignature(class UAudioComponent*& AudioComponent, struct FName& ParameterName, int& OneshotIndex); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.StartFF (Has no native function)
	void StartFF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.UpdateFF (Has no native function)
	void UpdateFF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.StopFF (Has no native function)
	void StopFF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.InitializeTetherGCNL (Has no native function)
	void InitializeTetherGCNL(class UObject*& Object); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.ScaleInSkisForPlayer (Has no native function)
	void ScaleInSkisForPlayer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C.ExecuteUbergraph_GCNL_Athena_Tether (Has no native function)
	void ExecuteUbergraphGCNLAthenaTether(int& EntryPoint, class UFXSystemComponent*& CallFuncGetPrimaryParticleComponentReturnValue, bool& CallFuncIsValidReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, enum EInterfaceValidResult& CallFuncIsInterfaceValidResult, struct TEnumAsByte<EDynamicForceFeedbackAction>& TempbyteVariable, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, unsigned char& CallFuncMakeLiteralByteReturnValue, float& K2NodeEventDeltaSeconds, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, bool& CallFuncK2AttachToComponentReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue, struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncNormalReturnValue, double& CallFuncDotVectorVectorReturnValue, double& CallFuncVSizeReturnValue, double& CallFuncMapRangeClampedReturnValue, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult1, bool& CallFuncK2AttachToComponentReturnValue1, class UAudioComponent*& K2NodeComponentBoundEventAudioComponent, struct FName& K2NodeComponentBoundEventParameterName, int& K2NodeComponentBoundEventOneshotIndex, int& CallFuncConvBoolToIntReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetIntParameterselfCastInput, bool& CallFuncIsLocallyControlledReturnValue, struct FVector& CallFuncGetActorForwardVectorReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue1, class AActor*& CallFuncGetViewTargetReturnValue, class ANPC_Pawn_Wildlife_Parent_C*& K2NodeDynamicCastAsNPCPawnWildlifeParent, bool& K2NodeDynamicCastbSuccess, struct TScriptInterface<class ICameraLensEffectInterface>& CallFuncAddGenericCameraLensEffectReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, double& CallFuncAbsReturnValue, double& CallFuncFClampReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncAbsReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2, struct FVector& CallFuncGetVelocityReturnValue1, class AFortWaterBodyActor*& CallFuncGetCurrentWaterBodyReturnValue, double& CallFuncVSizeReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncGreaterDoubleDoubleReturnValue1, class UObject*& K2NodeCustomEventObject, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncSetCommonWaterFXParamsReturnValue, bool& CallFuncEqualEqualByteByteReturnValue2, bool& CallFuncBooleanORReturnValue2, bool& CallFuncEqualEqualByteByteReturnValue3, bool& CallFuncBooleanANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncFClampReturnValue1, double& CallFuncAddDoubleDoubleReturnValue1, class AActor*& K2NodeDynamicCastAsActor, bool& K2NodeDynamicCastbSuccess2, double& CallFuncMultiplyDoubleDoubleReturnValue3, class UFXSystemComponent*& CallFuncGetPrimaryParticleComponentReturnValue1, enum EInterfaceValidResult& CallFuncIsInterfaceValidResult1, bool& K2NodeSwitchEnumCmpSuccess1, class AActor*& K2NodeDynamicCastAsActor1, bool& K2NodeDynamicCastbSuccess3, enum EInterfaceValidResult& CallFuncIsInterfaceValidResult2, bool& K2NodeSwitchEnumCmpSuccess2, class UFXSystemComponent*& CallFuncGetPrimaryParticleComponentReturnValue2, class AActor*& K2NodeDynamicCastAsActor2, bool& K2NodeDynamicCastbSuccess4, struct FVector& CallFuncGetForwardVectorReturnValue1, double& CallFuncDotVectorVectorReturnValue1, bool& CallFuncLessDoubleDoubleReturnValue1, float& CallFuncConvBoolToFloatReturnValue, double& CallFuncMultiplyVectorFloatBImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncSetFloatParameterParamImplicitCast2, float& CallFuncSetFloatParameterParamImplicitCast3, float& CallFuncPlayDynamicForceFeedbackIntensityImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

