// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C
// Size: 0x968
class AGCNL_Athena_HidingProp_Collision_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_HidingProp_Collision.GCNL_Athena_HidingProp_Collision_C.ExecuteUbergraph_GCNL_Athena_HidingProp_Collision (Has no native function)
	void ExecuteUbergraphGCNLAthenaHidingPropCollision(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, float& CallFuncPlayAnimMontageReturnValue); // (Final | 0x00008000 | HasDefaults)
};

