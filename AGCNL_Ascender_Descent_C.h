// BlueprintGeneratedClass /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C
// Size: 0x988
class AGCNL_Ascender_Descent_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	struct FTimerHandle* SoundVisualizerHandle; // 0x968 (0x8)
	class AActor* MyTarget; // 0x970 (0x8)
	class UAudioComponent* AudioComponent; // 0x978 (0x8)
	class UTexture* OverrideIcon; // 0x980 (0x8)

	/* Functions */

	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.VisualizeAudio (Has no native function)
	void VisualizeAudio(); // (BlueprintCallable | BlueprintEvent)

	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Ascender/GameplayCues/GCNL_Ascender_Descent.GCNL_Ascender_Descent_C.ExecuteUbergraph_GCNL_Ascender_Descent (Has no native function)
	void ExecuteUbergraphGCNLAscenderDescent(int& EntryPoint, struct TArray<class AFortPlayerController*>& TempobjectVariable, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class UAudioComponent*& CallFuncArrayGetItem, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct TArray<struct TEnumAsByte<EFortTeamAffiliation>>& K2NodeMakeArrayArray, unsigned char& CallFuncGetActorTeamReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance); // (Final | 0x00008000 | HasDefaults)
};

