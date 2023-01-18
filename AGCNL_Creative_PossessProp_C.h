// BlueprintGeneratedClass /Game/Abilities/Player/Athena/GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C
// Size: 0x970
class AGCNL_Creative_PossessProp_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class APlayerPawn_Athena_C* PlayerPawnAthena; // 0x968 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Athena/GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.OnActive (Has no native function)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.OnApplication (Has no native function)
	void OnApplication(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCNL_Creative_PossessProp.GCNL_Creative_PossessProp_C.ExecuteUbergraph_GCNL_Creative_PossessProp (Has no native function)
	void ExecuteUbergraphGCNLCreativePossessProp(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1); // (Final | 0x00008000 | HasDefaults)
};

