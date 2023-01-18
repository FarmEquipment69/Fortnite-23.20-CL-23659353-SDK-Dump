// BlueprintGeneratedClass /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C
// Size: 0x980
class AGCNL_Riding_Sprint_CameraShake_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class AFortPlayerController* FortPlayerController; // 0x968 (0x8)
	class UCameraShakeBase* FOVFlare; // 0x970 (0x8)
	class UCameraShakeBase* ShakeNoise; // 0x978 (0x8)

	/* Functions */

	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_Riding_Sprint_CameraShake.GCNL_Riding_Sprint_CameraShake_C.ExecuteUbergraph_GCNL_Riding_Sprint_CameraShake (Has no native function)
	void ExecuteUbergraphGCNLRidingSprintCameraShake(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, bool& CallFuncIsValidReturnValue1, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue1, bool& CallFuncIsValidReturnValue2); // (Final | 0x00008000 | HasDefaults)
};

