// BlueprintGeneratedClass /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C
// Size: 0xa48
class AGCNL_PlayerIsRiding_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class USoundBase* RidingSoundLoop; // 0x968 (0x8)
	class UAudioComponent* RidingSoundLoopComp; // 0x970 (0x8)
	struct FTimerHandle* VelocityTimerHandle; // 0x978 (0x8)
	class AActor* Player; // 0x980 (0x8)
	double Speed; // 0x988 (0x8)
	struct TEnumAsByte<EFortTeamAffiliation> TeamAffiliation; // 0x990 (0x1)
	unsigned char unreflected_991[0x7]; // 0x991 (0x7) 
	struct FVector Previous; // 0x998 (0x18)
	class USoundBase* EnemyRidingSoundLoop; // 0x9b0 (0x8)
	class AFortPlayerPawnAthena* AsFortPlayerPawnAthena; // 0x9b8 (0x8)
	double JumpParamTarget; // 0x9c0 (0x8)
	double JumpValue; // 0x9c8 (0x8)
	bool bIsFalling; // 0x9d0 (0x1)
	bool bCanResetJump; // 0x9d1 (0x1)
	unsigned char unreflected_9d2[0x6]; // 0x9d2 (0x6) 
	class UCreatureBaseRidableComponent_C* CreatureRidableComponent; // 0x9d8 (0x8)
	class UPawnMovementComponent* CreatureMovementComponent; // 0x9e0 (0x8)
	struct FTimerHandle* JumpResetTimerHandle; // 0x9e8 (0x8)
	double JumpPitchInterpSpeed; // 0x9f0 (0x8)
	struct FCurveTableRowHandle RidingCurveTable; // 0x9f8 (0x10)
	double BoarSprintSpeed; // 0xa08 (0x8)
	double CurrentVelocity; // 0xa10 (0x8)
	double MaxNormalRunSpeed; // 0xa18 (0x8)
	bool bSprinting; // 0xa20 (0x1)
	unsigned char unreflected_a21[0x7]; // 0xa21 (0x7) 
	class UBoarRidableComponent_C* BoarRidableComp; // 0xa28 (0x8)
	double MaxSpeed; // 0xa30 (0x8)
	double MaxSpeedClamped; // 0xa38 (0x8)
	class UControllableRidableComponent* CreatureRidableComp; // 0xa40 (0x8)

	/* Functions */

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.CalculateVelocityParam (Has no native function)
	void CalculateVelocityParam(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, double& CallFuncVSizeReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput, double& CallFuncGetWorldDeltaSecondsReturnValue, double& CallFuncFInterpToReturnValue, double& CallFuncMapRangeClampedReturnValue, float& CallFuncSetFloatParameterInFloatImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.WhileActive (Has no native function)
	bool WhileActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingDCNLEnded (Has no native function)
	void PlayerRidingDCNLEnded(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.SetUpRidableAudioEvents (Has no native function)
	void SetUpRidableAudioEvents(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.PlayerRidingGCNLStarted (Has no native function)
	void PlayerRidingGCNLStarted(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnRemovalGeneric (Has no native function)
	void OnRemovalGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ResetJumpParam (Has no native function)
	void ResetJumpParam(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.StartLoopingAudio (Has no native function)
	void StartLoopingAudio(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.OnJumpApex (Has no native function)
	void OnJumpApex(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.AudioOnJump (Has no native function)
	void AudioOnJump(double& AudioPitchInterpSpeed); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/GameplayCues/GCNL_PlayerIsRiding.GCNL_PlayerIsRiding_C.ExecuteUbergraph_GCNL_PlayerIsRiding (Has no native function)
	void ExecuteUbergraphGCNLPlayerIsRiding(int& EntryPoint, double& K2NodeCustomEventAudioPitchInterpSpeed, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, float& K2NodeEventDeltaSeconds, bool& CallFuncIsValidReturnValue, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, bool& CallFuncIsValidReturnValue1, class AActor*& CallFuncGetAttachParentActorReturnValue, class UControllableRidableComponent*& CallFuncGetComponentByClassReturnValue, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, bool& CallFuncIsValidReturnValue2, struct TEnumAsByte<EFortTeamAffiliation>& TempbyteVariable, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationForActorToLocalPlayerReturnValue, class USoundBase*& K2NodeSelectDefault, bool& CallFuncIsValidReturnValue5, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue); // (Final | 0x00008000 | HasDefaults)
};

