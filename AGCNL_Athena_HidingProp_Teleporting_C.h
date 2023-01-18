// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C
// Size: 0x9a8
class AGCNL_Athena_HidingProp_Teleporting_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	float Timeline0LerpWhiteWash3C12694840EC8C9B33E562A2C6B279BA; // 0x968 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0Direction3C12694840EC8C9B33E562A2C6B279BA; // 0x96c (0x1)
	unsigned char unreflected_96d[0x3]; // 0x96d (0x3) 
	class UTimelineComponent* Timeline0; // 0x970 (0x8)
	class UAudioComponent* 1PTravelAudio; // 0x978 (0x8)
	struct TScriptInterface<class ICameraLensEffectInterface> LensEffectInterface; // 0x980 (0x10)
	class AActor* LensEffectActor; // 0x990 (0x8)
	class USoundMix* 1pMixMod; // 0x998 (0x8)
	class AFortPlayerPawn* OwningActor; // 0x9a0 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.Timeline_0__DoFlash__EventFunc (Has no native function)
	void Timeline0DoFlashEventFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Teleporting.GCNL_Athena_HidingProp_Teleporting_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Teleporting (Has no native function)
	void ExecuteUbergraphGCNLAthenaHidingPropTeleporting(int& EntryPoint, class UObject*& CallFuncConvInterfaceToObjectReturnValue, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeDynamicCastAsActor, bool& K2NodeDynamicCastbSuccess, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess1, struct TScriptInterface<class ICameraLensEffectInterface>& CallFuncSpawnGenericCameraLensEffectReturnValue, bool& CallFuncIsLocallyControlledReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, class UAudioComponent*& CallFuncSpawnSound2DReturnValue, bool& CallFuncIsValidReturnValue3, class UParticleSystemComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue); // (Final | 0x00008000 | HasDefaults)
};

