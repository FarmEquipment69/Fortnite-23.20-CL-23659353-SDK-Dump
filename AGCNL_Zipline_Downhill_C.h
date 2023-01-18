// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C
// Size: 0x998
class AGCNL_Zipline_Downhill_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0x968 (0x8)
	class ULegacyCameraShake* matineeCamShake; // 0x970 (0x8)
	double MinCamShakeAmp; // 0x978 (0x8)
	double MaxCamShakeAmp; // 0x980 (0x8)
	double MinCamShakeFreq; // 0x988 (0x8)
	double MaxCamShakeFreq; // 0x990 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.cameraShakeTimer (Has no native function)
	void cameraShakeTimer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Downhill.GCNL_Zipline_Downhill_C.ExecuteUbergraph_GCNL_Zipline_Downhill (Has no native function)
	void ExecuteUbergraphGCNLZiplineDownhill(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AActor*& K2NodeEventMyTarget2, struct FGameplayCueParameters& K2NodeEventParameters2, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents2, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents2, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, float& CallFuncGetZiplineSpeedFactorReturnValue, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, double& CallFuncAbsReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue, class ULegacyCameraShake*& CallFuncConvLegacyCameraShakeReturnValue, double& CallFuncLerpReturnValue, double& CallFuncLerpReturnValue1, struct FFOscillator& K2NodeMakeStructFOscillator, struct FROscillator& K2NodeMakeStructROscillator, double& CallFuncAbsAImplicitCast, float& K2NodeMakeStructAmplitudeImplicitCast, float& K2NodeMakeStructFrequencyImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

