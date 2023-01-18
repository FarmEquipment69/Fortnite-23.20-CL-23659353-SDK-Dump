// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C
// Size: 0xb20
class AGCN_Loop_SpookyMist_C : public AFortGameplayCueNotifyLoop_SpookyMist
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb00 (0x8)
	class UPostProcessComponent* PostProcess; // 0xb08 (0x8)
	float TimelineInteractionFadeInOutVisbility5529D6B24898E091AFB4668B43CFAB50; // 0xb10 (0x4)
	struct TEnumAsByte<ETimelineDirection> TimelineInteractionFadeInOutDirection5529D6B24898E091AFB4668B43CFAB50; // 0xb14 (0x1)
	unsigned char unreflected_b15[0x3]; // 0xb15 (0x3) 
	class UTimelineComponent* TimelineInteractionFadeInOut; // 0xb18 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__FinishedFunc (Has no native function)
	void TimelineInteractionFadeInOutFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.Timeline Interaction Fade In Out__UpdateFunc (Has no native function)
	void TimelineInteractionFadeInOutUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.StartedInteract (Has no native function)
	void StartedInteract(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.EndedInteract (Has no native function)
	void EndedInteract(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_SpookyMist.GCN_Loop_SpookyMist_C.ExecuteUbergraph_GCN_Loop_SpookyMist (Has no native function)
	void ExecuteUbergraphGCNLoopSpookyMist(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue); // (Final | 0x00008000 | HasDefaults)
};

