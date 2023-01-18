// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C
// Size: 0xa5c
class AGCNL_Athena_Player_Sliding_Player_C : public AFortGameplayCueNotifyLoop_Sliding
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x9f0 (0x8)
	class UFortCollisionAudioComponent* FortCollisionAudio; // 0x9f8 (0x8)
	bool bUpdateAudioParams; // 0xa00 (0x1)
	unsigned char unreflected_a01[0x7]; // 0xa01 (0x7) 
	double VelocityLengthAudioParam; // 0xa08 (0x8)
	double ZVelocityAudioParam; // 0xa10 (0x8)
	class USoundBase* StopSlideSound; // 0xa18 (0x8)
	class UAudioComponent* StopSlideAudio; // 0xa20 (0x8)
	struct FTimerHandle* SlidingFailsafeTimerHandle; // 0xa28 (0x8)
	class USoundBase* StartSlideSound; // 0xa30 (0x8)
	class UFortMovementComp_Character* CachedMovementComponentRef; // 0xa38 (0x8)
	class UFXSystemComponent* DustFX; // 0xa40 (0x8)
	bool bIsGraceFalling; // 0xa48 (0x1)
	unsigned char unreflected_a49[0x7]; // 0xa49 (0x7) 
	struct FTimerHandle* SpeedLineTimerHandle; // 0xa50 (0x8)
	int SurfaceTypeInt; // 0xa58 (0x4)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.CheckSurfaceType (Has no native function)
	void CheckSurfaceType(class AFortPawn*& Pawn, int& SurfaceTypeInt, struct TEnumAsByte<EFortFootstepSurfaceType>& CallFuncGetFootstepSurfaceTypeReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue2); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ToggleLoopingSoundIndicator (Has no native function)
	void ToggleLoopingSoundIndicator(bool& bEnableSoundIndicator, struct FVector& CallFuncK2GetActorLocationReturnValue); // (Private | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.On Target Pawn Actor Hit (Has no native function)
	void OnTargetPawnActorHit(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncGetVelocityReturnValue, bool& CallFuncOnCollisionOutResult, float& CallFuncOnCollisionOutMagnitude); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSoundComponentParameters (Has no native function)
	void UpdateSoundComponentParameters(class AFortPlayerPawn*& PlayerPawn, class UAudioComponent*& AudioComponent, bool& CallFuncIsLocallyViewedReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationForActorToLocalPlayerReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.StopSlideAudio (Has no native function)
	void StopSlideAudio(bool& CallFuncIsValidReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSlideAudio (Has no native function)
	void UpdateSlideAudio(bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetLastUpdateVelocityReturnValue, double& CallFuncVSizeReturnValue, double& CallFuncMapRangeClampedReturnValue, double& CallFuncMapRangeClampedReturnValue1, float& CallFuncSetFloatParameterExtValueImplicitCast, float& CallFuncSetFloatParameterExtValueImplicitCast1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.StartSlideAudio (Has no native function)
	void StartSlideAudio(bool& CallFuncIsValidReturnValue, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationForActorToLocalPlayerReturnValue, bool& CallFuncIsLocallyViewedReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetBoolParameterselfCastInput1, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, bool& CallFuncK2AttachToComponentReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, bool& CallFuncIsValidReturnValue2); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ResetAudioData (Has no native function)
	void ResetAudioData(struct FDelegate& K2NodeCreateDelegateOutputDelegate); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Sliding Failsafe Check (Has no native function)
	void SlidingFailsafeCheck(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Stop Sliding Audio (Has no native function)
	void StopSlidingAudio(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ResumeSlidingAudio (Has no native function)
	void ResumeSlidingAudio(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.Update Speed Line (Has no native function)
	void UpdateSpeedLine(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.UpdateSurfaceType (Has no native function)
	void UpdateSurfaceType(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Player.GCNL_Athena_Player_Sliding_Player_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_Player (Has no native function)
	void ExecuteUbergraphGCNLAthenaPlayerSlidingPlayer(int& EntryPoint, bool& CallFuncNotPreBoolReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class UFXSystemComponent*& CallFuncArrayGetItem, class UFortMovementComp_Character*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncNotEqualBoolBoolReturnValue, bool& CallFuncIsValidReturnValue2, int& CallFuncCheckSurfaceTypeSurfaceTypeInt); // (Final | 0x00008000 | HasDefaults)
};

