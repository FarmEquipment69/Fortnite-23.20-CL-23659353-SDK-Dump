// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C
// Size: 0x9a0
class AGCNL_EnvCampFire_Doused_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	float FadeDousedSmokeFade50A77D974140FDA04967E2BABB987458; // 0x968 (0x4)
	struct TEnumAsByte<ETimelineDirection> FadeDousedSmokeDirection50A77D974140FDA04967E2BABB987458; // 0x96c (0x1)
	unsigned char unreflected_96d[0x3]; // 0x96d (0x3) 
	class UTimelineComponent* FadeDousedSmoke; // 0x970 (0x8)
	struct FScalableFloat RowDuration; // 0x978 (0x28)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__FinishedFunc (Has no native function)
	void FadeDousedSmokeFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.Fade Doused Smoke__UpdateFunc (Has no native function)
	void FadeDousedSmokeUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.DestroyOnDestroy (Has no native function)
	void DestroyOnDestroy(class AActor*& DestroyedActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_EnvCampFire_Doused.GCNL_EnvCampFire_Doused_C.ExecuteUbergraph_GCNL_EnvCampFire_Doused (Has no native function)
	void ExecuteUbergraphGCNLEnvCampFireDoused(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class UParticleSystemComponent*& CallFuncArrayGetItem, class UParticleSystemComponent*& CallFuncArrayGetItem1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, float& CallFuncGetValueAtLevelReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, class AActor*& K2NodeCustomEventDestroyedActor, double& CallFuncDivideDoubleDoubleBImplicitCast, float& CallFuncSetPlayRateNewRateImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

