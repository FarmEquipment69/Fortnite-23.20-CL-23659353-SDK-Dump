// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C
// Size: 0xa20
class AGC_Athena_OutsideSafeZone_Stage03_C : public AGC_Athena_OutsideSafeZone_C
{
	unsigned char unreflected_a11[0x7]; // 0xa11 (0x7) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa18 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.On Distant Lightning Spawn (Has no native function)
	void OnDistantLightningSpawn(struct FName& EventName, float& EmitterTime, struct FVector& Location, struct FVector& Velocity); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GC_Athena_OutsideSafeZone_Stage03.GC_Athena_OutsideSafeZone_Stage03_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone_Stage03 (Has no native function)
	void ExecuteUbergraphGCAthenaOutsideSafeZoneStage03(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UParticleSystemComponent*& CallFuncArrayGetItem, struct FName& K2NodeCustomEventEventName, float& K2NodeCustomEventEmitterTime, struct FVector& K2NodeCustomEventLocation, struct FVector& K2NodeCustomEventVelocity, class UAudioComponent*& CallFuncSpawnSoundAtLocationReturnValue, bool& CallFuncEqualEqualNameNameReturnValue, double& CallFuncRandomFloatInRangeReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue); // (Final | 0x00008000 | HasDefaults)
};

