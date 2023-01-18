// BlueprintGeneratedClass /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C
// Size: 0x9f0
class AGCN_Athena_Bush_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UStaticMeshComponent* OwningPlayerBushMesh; // 0x968 (0x8)
	class UArrowComponent* Arrow2; // 0x970 (0x8)
	class UArrowComponent* Arrow1; // 0x978 (0x8)
	class UStaticMeshComponent* BushMesh; // 0x980 (0x8)
	class UArrowComponent* Arrow; // 0x988 (0x8)
	class UParticleSystemComponent* TrailLeaves; // 0x990 (0x8)
	float OpacityFadeOpacityFadeOutB989988545DAA0B2E69D77AE069A4437; // 0x998 (0x4)
	struct TEnumAsByte<ETimelineDirection> OpacityFadeDirectionB989988545DAA0B2E69D77AE069A4437; // 0x99c (0x1)
	unsigned char unreflected_99d[0x3]; // 0x99d (0x3) 
	class UTimelineComponent* OpacityFade; // 0x9a0 (0x8)
	class AActor* PlayerPawn; // 0x9a8 (0x8)
	class UMaterialInstanceDynamic* MIDBush; // 0x9b0 (0x8)
	bool IsActive; // 0x9b8 (0x1)
	unsigned char unreflected_9b9[0x7]; // 0x9b9 (0x7) 
	class UMaterialInstanceDynamic* MIDOwningClientBush; // 0x9c0 (0x8)
	struct FCurveTableRowHandle ClientBushOpacity; // 0x9c8 (0x10)
	double TargetOpacity; // 0x9d8 (0x8)
	class UParticleSystem* BushDestructionVFX; // 0x9e0 (0x8)
	class USoundBase* BushDestructionSFX; // 0x9e8 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__FinishedFunc (Has no native function)
	void OpacityFadeFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.OpacityFade__UpdateFunc (Has no native function)
	void OpacityFadeUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step (Has no native function)
	void OnPlayerStep(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush (Has no native function)
	void ExecuteUbergraphGCNAthenaBush(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetVelocityReturnValue, bool& CallFuncBooleanANDReturnValue, double& CallFuncVSizeReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncFClampReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncIsValidReturnValue1, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, struct FVector& CallFuncK2GetActorLocationReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena1, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsLocallyControlledReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena2, bool& K2NodeDynamicCastbSuccess2, struct FHitResult& CallFuncK2SetRelativeRotationSweepHitResult, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, float& CallFuncEvaluateCurveTableRowOutXY, bool& CallFuncEvaluateCurveTableRowReturnValue, double& CallFuncAddDoubleDoubleReturnValue, struct FTransform& CallFuncGetTransformReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncMakeRotatorReturnValue, class USoundBase*& TempobjectVariable, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1, float& K2NodeEventDeltaSeconds, class USoundBase*& TempobjectVariable1, bool& TempboolVariable, class USoundBase*& K2NodeSelectDefault, double& CallFuncAddDoubleDoubleAImplicitCast, double& K2NodeVariableSetTargetOpacityImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

