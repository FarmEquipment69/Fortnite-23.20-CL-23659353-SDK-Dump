// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C
// Size: 0xa38
class AGCNL_AthenaAI_NonParticipant_AlertState_C : public AFortGameplayCueNotifyAthena_AIAlertState
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	struct FLinearColor IconColorAlert; // 0x9f8 (0x10)
	struct FLinearColor IconColorThreatend; // 0xa08 (0x10)
	double AnimationLength; // 0xa18 (0x8)
	struct FLinearColor IconColorAlertInner; // 0xa20 (0x10)
	class USoundBase* sound; // 0xa30 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.PlayAlertSound (Has no native function)
	void PlayAlertSound(class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, float& CallFuncConvIntToFloatReturnValue, bool& CallFuncEqualEqualDoubleDoubleReturnValue, double& CallFuncEqualEqualDoubleDoubleAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.OnApplication (Has no native function)
	void OnApplication(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_AthenaAI_NonParticipant_AlertState.GCNL_AthenaAI_NonParticipant_AlertState_C.ExecuteUbergraph_GCNL_AthenaAI_NonParticipant_AlertState (Has no native function)
	void ExecuteUbergraphGCNLAthenaAINonParticipantAlertState(int& EntryPoint, float& CallFuncConvIntToFloatReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast, float& CallFuncSetCustomPrimitiveDataFloatValueImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

