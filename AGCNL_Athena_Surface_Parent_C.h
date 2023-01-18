// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C
// Size: 0x972
class AGCNL_Athena_Surface_Parent_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class AFortPlayerPawn* TargetPawn; // 0x968 (0x8)
	bool Debug; // 0x970 (0x1)
	bool IsinWater; // 0x971 (0x1)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnPlayerFootstep (Has no native function)
	void OnPlayerFootstep(class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Surface_Parent.GCNL_Athena_Surface_Parent_C.ExecuteUbergraph_GCNL_Athena_Surface_Parent (Has no native function)
	void ExecuteUbergraphGCNLAthenaSurfaceParent(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1); // (Final | 0x00008000 | HasDefaults)
};

