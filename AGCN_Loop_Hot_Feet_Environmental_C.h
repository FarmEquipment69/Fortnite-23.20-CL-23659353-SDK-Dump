// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C
// Size: 0x9c0
class AGCN_Loop_Hot_Feet_Environmental_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class AFortPlayerPawn* TargetPlayer; // 0x968 (0x8)
	struct TArray<class UParticleSystemComponent*> SpawnedEmitters; // 0x970 (0x10)
	class USoundBase* SCFootstepLocal; // 0x980 (0x8)
	class USoundBase* SCFootstepRemote; // 0x988 (0x8)
	class USoundBase* SCCollision; // 0x990 (0x8)
	class UFortCollisionAudioComponent* CollisionAudioComp; // 0x998 (0x8)
	struct TArray<class UAudioComponent*> SpawnedAudioComps; // 0x9a0 (0x10)
	class USoundBase* SCOnJumpOrBeginFalling; // 0x9b0 (0x8)
	class USoundBase* SCOnLand; // 0x9b8 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.On Player Step (Has no native function)
	void OnPlayerStep(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.On Target Pawn Hit Event (Has no native function)
	void OnTargetPawnHitEvent(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.On Target Pawn Landed (Has no native function)
	void OnTargetPawnLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.On Target Pawn Movement Mode Changed (Has no native function)
	void OnTargetPawnMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.ReceiveHit (Has no native function)
	void ReceiveHit(class UPrimitiveComponent*& MyComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, bool& bSelfMoved, struct FVector& HitLocation, struct FVector& HitNormal, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Hot_Feet_Environmental.GCN_Loop_Hot_Feet_Environmental_C.ExecuteUbergraph_GCN_Loop_Hot_Feet_Environmental (Has no native function)
	void ExecuteUbergraphGCNLoopHotFeetEnvironmental(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncIsFallingReturnValue, bool& CallFuncBooleanORReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsLocallyControlledReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena1, bool& K2NodeDynamicCastbSuccess1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess2, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, int& CallFuncArrayLengthReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, class AActor*& K2NodeCustomEventSelfActor, class AActor*& K2NodeCustomEventOtherActor, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit1, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, float& K2NodeEventDeltaSeconds, class UAudioComponent*& CallFuncArrayGetItem, class UParticleSystemComponent*& CallFuncArrayGetItem1, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncVSizeReturnValue, struct FVector& CallFuncGetVelocityReturnValue1, double& CallFuncMapRangeClampedReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput1, bool& CallFuncOnCollisionOutResult, float& CallFuncOnCollisionOutMagnitude, struct FHitResult& K2NodeCustomEventHit, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess3, struct FTransform& TempstructVariable, class UFortCollisionAudioComponent*& CallFuncAddComponentReturnValue, bool& CallFuncK2AttachToComponentReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, bool& TempboolVariable, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, bool& CallFuncIsValidReturnValue1, class USoundBase*& K2NodeSelectDefault, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& K2NodeSwitchEnumCmpSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, class USceneComponent*& CallFuncK2GetRootComponentReturnValue1, int& TempintVariable, int& CallFuncAddIntIntReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue1, class UParticleSystemComponent*& CallFuncArrayGetItem2, bool& CallFuncLessIntIntReturnValue, class UPrimitiveComponent*& K2NodeEventMyComp, class AActor*& K2NodeEventOther, class UPrimitiveComponent*& K2NodeEventOtherComp, bool& K2NodeEventbSelfMoved, struct FVector& K2NodeEventHitLocation, struct FVector& K2NodeEventHitNormal, struct FVector& K2NodeEventNormalImpulse, struct FHitResult& K2NodeEventHit, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetFloatParameterInFloatImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

