// BlueprintGeneratedClass /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C
// Size: 0x978
class AGCNL_Irwin_Slide_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class USoundBase* SlideSound; // 0x968 (0x8)
	class UAudioComponent* SlidingSoundComponent; // 0x970 (0x8)

	/* Functions */

	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Irwin/GameplayCues/GCNL_Irwin_Slide.GCNL_Irwin_Slide_C.ExecuteUbergraph_GCNL_Irwin_Slide (Has no native function)
	void ExecuteUbergraphGCNLIrwinSlide(int& EntryPoint, struct TEnumAsByte<EFortTeamAffiliation>& TempbyteVariable, double& TemprealVariable, double& TemprealVariable1, double& TemprealVariable2, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationForActorToLocalPlayerReturnValue, double& K2NodeSelectDefault, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, float& CallFuncSpawnSoundAttachedVolumeMultiplierImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

