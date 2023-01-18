// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C
// Size: 0x990
class AGCN_Loop_PlayerWorldPFX_Persistent_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UNiagaraComponent* NSLoopWorldFXPersistentMotes01; // 0x968 (0x8)
	class UNiagaraComponent* NSLoopWorldFXPersistent; // 0x970 (0x8)
	class AActor* MyTarget; // 0x978 (0x8)
	struct FTimerHandle* Timer; // 0x980 (0x8)
	double LoopingCheckTime; // 0x988 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.SpawnNiagara (Has no native function)
	void SpawnNiagara(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnLoopingStartNiagara (Has no native function)
	void OnLoopingStartNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_PlayerWorldPFX_Persistent.GCN_Loop_PlayerWorldPFX_Persistent_C.ExecuteUbergraph_GCN_Loop_PlayerWorldPFX_Persistent (Has no native function)
	void ExecuteUbergraphGCNLoopPlayerWorldPFXPersistent(int& EntryPoint, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AFortPlayerCameraSpectator*& K2NodeDynamicCastAsFortPlayerCameraSpectator, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncK2AttachToComponentReturnValue, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncBooleanORReturnValue, class AActor*& K2NodeEventMyTarget3, struct FGameplayCueParameters& K2NodeEventParameters3, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents3, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents3, class AActor*& K2NodeEventMyTarget2, struct FGameplayCueParameters& K2NodeEventParameters2, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents2, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents2, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UNiagaraComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, bool& CallFuncK2AttachToComponentReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

