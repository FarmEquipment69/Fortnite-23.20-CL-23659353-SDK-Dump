// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C
// Size: 0x988
class AGCNL_Athena_ChromeSurface_C : public AGCNL_Athena_Surface_Parent_C
{
	unsigned char unreflected_972[0x6]; // 0x972 (0x6) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x978 (0x8)
	class AFortPlayerPawn* LocalTarget; // 0x980 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C.OnApplicationGeneric (Has no native function)
	void OnApplicationGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_ChromeSurface.GCNL_Athena_ChromeSurface_C.ExecuteUbergraph_GCNL_Athena_ChromeSurface (Has no native function)
	void ExecuteUbergraphGCNLAthenaChromeSurface(int& EntryPoint, class UAmbientAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue, bool& CallFuncIsValidReturnValue, class UAmbientAudioSubsystem*& CallFuncGetWorldSubsystemReturnValue1, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance1, class ADecalActor*& K2NodeEventBurstDecalInstance1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsLocallyViewedReturnValue); // (Final | 0x00008000 | HasDefaults)
};

