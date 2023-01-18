// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C
// Size: 0x988
class AGCNL_Athena_UnderwaterDamage_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	double Intensity; // 0x968 (0x8)
	class USoundBase* DamageTickSound; // 0x970 (0x8)
	class USoundMix* DrownSoundMix; // 0x978 (0x8)
	class AActor* LocalTargetPawn; // 0x980 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.OnRecurring (Has no native function)
	void OnRecurring(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_UnderwaterDamage.GCNL_Athena_UnderwaterDamage_C.ExecuteUbergraph_GCNL_Athena_UnderwaterDamage (Has no native function)
	void ExecuteUbergraphGCNLAthenaUnderwaterDamage(int& EntryPoint, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncMapRangeClampedReturnValue, double& CallFuncFClampReturnValue, class AActor*& K2NodeEventMyTarget2, struct FGameplayCueParameters& K2NodeEventParameters2, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents2, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents2, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, struct TScriptInterface<class ICameraLensEffectInterface>& CallFuncSpawnGenericCameraLensEffectReturnValue, class UFXSystemComponent*& CallFuncGetPrimaryParticleComponentReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn2, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncIsLocallyControlledReturnValue1, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, class UAudioComponent*& CallFuncSpawnSound2DReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput, bool& CallFuncEqualEqualObjectObjectReturnValue, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterInFloatImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast1, float& CallFuncClientStartCameraShakeScaleImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

