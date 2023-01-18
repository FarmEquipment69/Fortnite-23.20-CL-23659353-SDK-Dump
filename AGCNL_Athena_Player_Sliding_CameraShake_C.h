// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C
// Size: 0x9e1
class AGCNL_Athena_Player_Sliding_CameraShake_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UPostProcessComponent* PostProcess; // 0x968 (0x8)
	float Timeline0BlendWeight11D30796436EDF3C6112C3BD3BA47DBC; // 0x970 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0Direction11D30796436EDF3C6112C3BD3BA47DBC; // 0x974 (0x1)
	unsigned char unreflected_975[0x3]; // 0x975 (0x3) 
	class UTimelineComponent* Timeline0; // 0x978 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0x980 (0x8)
	class ULegacyCameraShake* matineeCamShake; // 0x988 (0x8)
	double MinCamShakeAmp; // 0x990 (0x8)
	double MaxCamShakeAmp; // 0x998 (0x8)
	double MinCamShakeFreq; // 0x9a0 (0x8)
	double MaxCamShakeFreq; // 0x9a8 (0x8)
	struct FScalableFloat MaxSlideSpeed; // 0x9b0 (0x28)
	double CameraShakeSpeed; // 0x9d8 (0x8)
	bool bIsSuperHigh; // 0x9e0 (0x1)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.cameraShakeTimer (Has no native function)
	void cameraShakeTimer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_CameraShake.GCNL_Athena_Player_Sliding_CameraShake_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_CameraShake (Has no native function)
	void ExecuteUbergraphGCNLAthenaPlayerSlidingCameraShake(int& EntryPoint, class AActor*& K2NodeEventMyTarget2, struct FGameplayCueParameters& K2NodeEventParameters2, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents2, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents2, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncVSizeReturnValue, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, int64_t& CallFuncConvDoubleToInt64ReturnValue, bool& CallFuncIsValidReturnValue, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue, class ULegacyCameraShake*& CallFuncConvLegacyCameraShakeReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, float& CallFuncGetValueAtLevelReturnValue, int64_t& CallFuncConvDoubleToInt64ReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, float& CallFuncDivideInt64Int64UsingFloatingPointReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncFClampReturnValue, double& CallFuncLerpReturnValue, double& CallFuncLerpReturnValue1, struct FFOscillator& K2NodeMakeStructFOscillator, struct FROscillator& K2NodeMakeStructROscillator, bool& CallFuncIsLocallyViewedReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncNotPreBoolReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncBooleanORReturnValue, double& CallFuncConvDoubleToInt64InDoubleImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast1, float& K2NodeMakeStructFrequencyImplicitCast, float& K2NodeMakeStructAmplitudeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

