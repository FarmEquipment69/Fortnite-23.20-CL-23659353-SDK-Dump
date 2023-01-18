// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C
// Size: 0x9b8
class AGCNL_EnvCampFire_Stoke_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	struct FScalableFloat RowTickInterval; // 0x968 (0x28)
	struct FScalableFloat RowMaxHeals; // 0x990 (0x28)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Stoke.GCNL_EnvCampFire_Stoke_C.ExecuteUbergraph_GCNL_EnvCampFire_Stoke (Has no native function)
	void ExecuteUbergraphGCNLEnvCampFireStoke(int& EntryPoint, int& TempintLoopCounterVariable, int& TempintArrayIndexVariable, int& CallFuncAddIntIntReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, struct TScriptInterface<class ICampfire_Interface_C>& K2NodeDynamicCastAsCampfireInterface, bool& K2NodeDynamicCastbSuccess, class UParticleSystemComponent*& CallFuncArrayGetItem, struct FVector& CallFuncGetLocationToSpawnFireVFXWorldLocation, int& CallFuncArrayLengthReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, bool& CallFuncLessIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

