// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
// Size: 0x974
class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UNiagaraComponent* ReturnValue; // 0x968 (0x8)
	int NewVar; // 0x970 (0x4)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C.ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara (Has no native function)
	void ExecuteUbergraphGCNLoopSnowFlakesCameraAttachedNiagara(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class UFXSystemComponent*& CallFuncArrayGetItem, class UNiagaraComponent*& K2NodeDynamicCastAsNiagaraParticleSystemComponent, bool& K2NodeDynamicCastbSuccess, class UNiagaraSystem*& CallFuncGetAssetReturnValue, bool& CallFuncIsNiagaraEffectEnabledReturnValue); // (Final | 0x00008000 | HasDefaults)
};

