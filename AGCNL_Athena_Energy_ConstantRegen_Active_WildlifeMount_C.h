// BlueprintGeneratedClass /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C
// Size: 0x978
class AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	struct FGameplayTag TacticalSprintTag; // 0x968 (0x4)
	unsigned char unreflected_96c[0x4]; // 0x96c (0x4) 
	class UFXSystemComponent* MainNS; // 0x970 (0x8)

	/* Functions */

	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Added_7482F31A49360978B87F339D76FC2BB7 (Has no native function)
	void Added7482F31A49360978B87F339D76FC2BB7(); // (BlueprintCallable | BlueprintEvent)

	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Removed_AD34CCD44592FD2F05DB47BDF9413ACC (Has no native function)
	void RemovedAD34CCD44592FD2F05DB47BDF9413ACC(); // (BlueprintCallable | BlueprintEvent)

	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Energy/GameplayCues/GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount (Has no native function)
	void ExecuteUbergraphGCNLAthenaEnergyConstantRegenActiveWildlifeMount(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class UAbilityAsync_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddToActorReturnValue, class UFXSystemComponent*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue, class UAbilityAsync_WaitGameplayTagRemoved*& CallFuncWaitGameplayTagRemoveFromActorReturnValue, bool& CallFuncIsValidReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

