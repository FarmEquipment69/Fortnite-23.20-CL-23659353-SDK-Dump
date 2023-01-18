// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Travel.GCNL_Zipline_Travel_C
// Size: 0xa60
class AGCNL_Zipline_Travel_C : public AFortGameplayCueNotifyLoop_ZiplineTravel
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xa40 (0x8)
	class UAudioComponent* AttachSoundAudioComp; // 0xa48 (0x8)
	struct TArray<bool> NewVar0; // 0xa50 (0x10)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Zipline_Travel.GCNL_Zipline_Travel_C.ExecuteUbergraph_GCNL_Zipline_Travel (Has no native function)
	void ExecuteUbergraphGCNLZiplineTravel(int& EntryPoint, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class UAudioComponent*& CallFuncArrayGetItem, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2AttachToComponentReturnValue); // (Final | 0x00008000 | HasDefaults)
};

