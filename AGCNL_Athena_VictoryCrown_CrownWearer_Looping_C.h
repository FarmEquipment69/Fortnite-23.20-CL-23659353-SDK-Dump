// BlueprintGeneratedClass /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C
// Size: 0xae0
class AGCNL_Athena_VictoryCrown_CrownWearer_Looping_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	float IntroAmbientFXTimelineAmbientFXVolumeEE4EF3FC4169AF85C3E076ADB15A9FAB; // 0x968 (0x4)
	struct TEnumAsByte<ETimelineDirection> IntroAmbientFXTimelineDirectionEE4EF3FC4169AF85C3E076ADB15A9FAB; // 0x96c (0x1)
	unsigned char unreflected_96d[0x3]; // 0x96d (0x3) 
	class UTimelineComponent* IntroAmbientFXTimeline; // 0x970 (0x8)
	float IntroFlareTimelineFlareFXVolumeDC12FFA64C913C89F456A7BA1F0987D7; // 0x978 (0x4)
	struct TEnumAsByte<ETimelineDirection> IntroFlareTimelineDirectionDC12FFA64C913C89F456A7BA1F0987D7; // 0x97c (0x1)
	unsigned char unreflected_97d[0x3]; // 0x97d (0x3) 
	class UTimelineComponent* IntroFlareTimeline; // 0x980 (0x8)
	struct FScalableFloat AudioVizualizerShownOnWearer; // 0x988 (0x28)
	struct FScalableFloat AudioVizualizerRange; // 0x9b0 (0x28)
	struct FScalableFloat AudioVizualizerPingFrequency; // 0x9d8 (0x28)
	struct FScalableFloat IntroAmbientFXTimelineRate; // 0xa00 (0x28)
	struct FScalableFloat IntroFlareTimlineRate; // 0xa28 (0x28)
	struct FScalableFloat IntroFXVisualVolume; // 0xa50 (0x28)
	struct FScalableFloat 1stPersonFXVisualVolume; // 0xa78 (0x28)
	struct FScalableFloat 3rdPerosnFXVisualVolume; // 0xaa0 (0x28)
	struct FTimerHandle* timerhandle; // 0xac8 (0x8)
	struct TArray<class UFXSystemComponent*> ParticleComponents; // 0xad0 (0x10)

	/* Functions */

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.GetVisualVolume (Has no native function)
	void GetVisualVolume(bool& IsFirstPerson, double& NewParam1, bool& TempboolVariable, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, double& K2NodeSelectDefault, double& K2NodeSelectOption0ImplicitCast, double& K2NodeSelectOption1ImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Ambient FX Timeline__FinishedFunc (Has no native function)
	void IntroAmbientFXTimelineFinishedFunc(); // (BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Ambient FX Timeline__UpdateFunc (Has no native function)
	void IntroAmbientFXTimelineUpdateFunc(); // (BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Flare Timeline__FinishedFunc (Has no native function)
	void IntroFlareTimelineFinishedFunc(); // (BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.Intro Flare Timeline__UpdateFunc (Has no native function)
	void IntroFlareTimelineUpdateFunc(); // (BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.AVIndicatorLoop (Has no native function)
	void AVIndicatorLoop(); // (BlueprintCallable | BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /VictoryCrownsGameplay/GameplayCues/GCNL_Athena_VictoryCrown_CrownWearer_Looping.GCNL_Athena_VictoryCrown_CrownWearer_Looping_C.ExecuteUbergraph_GCNL_Athena_VictoryCrown_CrownWearer_Looping (Has no native function)
	void ExecuteUbergraphGCNLAthenaVictoryCrownCrownWearerLooping(int& EntryPoint, struct TArray<class AFortPlayerController*>& TempobjectVariable, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& K2NodeMakeArrayArray, class AActor*& K2NodeEventMyTarget2, struct FGameplayCueParameters& K2NodeEventParameters2, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents2, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents2, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncK2IsValidTimerHandleReturnValue, float& CallFuncGetValueAtLevelReturnValue, bool& CallFuncGetValueAsBoolReturnValue, float& CallFuncGetValueAtLevelReturnValue1, float& CallFuncGetValueAtLevelReturnValue2, float& CallFuncGetValueAtLevelReturnValue3, float& CallFuncGetValueAtLevelReturnValue4, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, bool& CallFuncArrayContainsReturnValue, double& CallFuncGetVisualVolumeNewParam1, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue2, double& CallFuncMultiplyDoubleDoubleReturnValue3, unsigned char& CallFuncGetActorTeamReturnValue, bool& CallFuncIsPlayingReturnValue, bool& CallFuncIsPlayingReturnValue1, bool& CallFuncArrayIsValidIndexReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, double& CallFuncMultiplyDoubleDoubleAImplicitCast, double& CallFuncMultiplyDoubleDoubleAImplicitCast1, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& CallFuncMultiplyDoubleDoubleBImplicitCast1, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

