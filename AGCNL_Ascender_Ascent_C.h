// BlueprintGeneratedClass /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C
// Size: 0x9c0
class AGCNL_Ascender_Ascent_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0x968 (0x8)
	double MinCamShakeAmp; // 0x970 (0x8)
	double MaxCamShakeAmp; // 0x978 (0x8)
	double MinCamShakeFreq; // 0x980 (0x8)
	double MaxCamShakeFreq; // 0x988 (0x8)
	class ULegacyCameraShake* matineeCamShake; // 0x990 (0x8)
	struct FScalableFloat MaxAscenderSpeed; // 0x998 (0x28)

	/* Functions */

	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.cameraShakeTimer (Has no native function)
	void cameraShakeTimer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/GameplayCues/GCNL_Ascender_Ascent.GCNL_Ascender_Ascent_C.ExecuteUbergraph_GCNL_Ascender_Ascent (Has no native function)
	void ExecuteUbergraphGCNLAscenderAscent(int& EntryPoint, class AActor*& K2NodeEventMyTarget2, struct FGameplayCueParameters& K2NodeEventParameters2, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents2, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents2, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, class AController*& CallFuncGetControllerReturnValue, struct FVector& CallFuncGetVelocityReturnValue, bool& CallFuncIsLocalPlayerControllerReturnValue, double& CallFuncVSizeReturnValue, class APlayerController*& K2NodeDynamicCastAsPlayerController, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue1, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncFMaxReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue, class ULegacyCameraShake*& CallFuncConvLegacyCameraShakeReturnValue, double& CallFuncDivideDoubleDoubleBImplicitCast, float& CallFuncStartCameraShakeScaleImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

