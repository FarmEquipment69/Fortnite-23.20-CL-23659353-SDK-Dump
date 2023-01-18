// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C
// Size: 0xb30
class AGCN_Loop_Shadow_Bomb_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	float Timeline0VisbilityE1DFEC9547FE3FAED2AFF3B0D8598182; // 0x968 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0DirectionE1DFEC9547FE3FAED2AFF3B0D8598182; // 0x96c (0x1)
	unsigned char unreflected_96d[0x3]; // 0x96d (0x3) 
	class UTimelineComponent* Timeline0; // 0x970 (0x8)
	class AFortPlayerPawn* TargetPlayer; // 0x978 (0x8)
	double ExpirationSoundPeriod; // 0x980 (0x8)
	double VelocityInterp; // 0x988 (0x8)
	struct TArray<class UParticleSystemComponent*> AttachedFX; // 0x990 (0x10)
	struct TArray<class USkeletalMeshComponent*> PlayerSkeletalMeshes; // 0x9a0 (0x10)
	bool FriendlyPlayer; // 0x9b0 (0x1)
	unsigned char unreflected_9b1[0x7]; // 0x9b1 (0x7) 
	struct FTimerHandle* ExpireTellDelayTimer; // 0x9b8 (0x8)
	struct FTimerHandle* ExpirationSoundTimer; // 0x9c0 (0x8)
	double VisbilityLevel; // 0x9c8 (0x8)
	double WalkVisMultiplier; // 0x9d0 (0x8)
	double SprintVisMultiplier; // 0x9d8 (0x8)
	double MinFriendlyOpacity; // 0x9e0 (0x8)
	double InteractVisibility; // 0x9e8 (0x8)
	struct FScalableFloat DataDuration; // 0x9f0 (0x28)
	struct FScalableFloat DataTellDuration; // 0xa18 (0x28)
	struct FScalableFloat DataWalkVisMult; // 0xa40 (0x28)
	struct FScalableFloat DataSprintVisMult; // 0xa68 (0x28)
	struct FScalableFloat DataFriendlyVisMult; // 0xa90 (0x28)
	struct FScalableFloat DataShadowPlaneOpacity; // 0xab8 (0x28)
	class UTimelineComponent* FadeInOut; // 0xae0 (0x8)
	bool TickENabled; // 0xae8 (0x1)
	unsigned char unreflected_ae9[0x7]; // 0xae9 (0x7) 
	struct FScalableFloat SmokeBombDuration; // 0xaf0 (0x28)
	double TellDuration; // 0xb18 (0x8)
	double ExpireTellOpacity; // 0xb20 (0x8)
	double SmokeBombDurationUserSpecified; // 0xb28 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.UnbindEquippedWeapon (Has no native function)
	void UnbindEquippedWeapon(struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.GetSkeletalMeshes (Has no native function)
	void GetSkeletalMeshes(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsValidReturnValue, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, class USceneComponent*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, class USkeletalMeshComponent*& K2NodeDynamicCastAsSkeletalMeshComponent, bool& K2NodeDynamicCastbSuccess, bool& CallFuncLessIntIntReturnValue, int& CallFuncArrayAddUniqueReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnRemoval (Has no native function)
	void OnRemoval(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake*& BurstCameraShakeInstance, class ADecalActor*& BurstDecalInstance); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnLoopingStart (Has no native function)
	void OnLoopingStart(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UParticleSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.BeginExpireTell (Has no native function)
	void BeginExpireTell(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ClearExpireTell (Has no native function)
	void ClearExpireTell(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ExpireWarningTick (Has no native function)
	void ExpireWarningTick(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.UpdateTeamVisbility (Has no native function)
	void UpdateTeamVisbility(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.Audio Tick (Has no native function)
	void AudioTick(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.StartedInteract (Has no native function)
	void StartedInteract(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.EndedInteract (Has no native function)
	void EndedInteract(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnFinishedCharacterCustomization_Bind (Has no native function)
	void OnFinishedCharacterCustomizationBind(class AFortPlayerPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.OnWeaponEquippedDelegate_Event_0 (Has no native function)
	void OnWeaponEquippedDelegateEvent0(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Loop_Shadow_Bomb.GCN_Loop_Shadow_Bomb_C.ExecuteUbergraph_GCN_Loop_Shadow_Bomb (Has no native function)
	void ExecuteUbergraphGCNLoopShadowBomb(int& EntryPoint, bool& TempboolVariable, int& CallFuncArrayLengthReturnValue, int& TempintLoopCounterVariable, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncAddIntIntReturnValue, float& K2NodeEventDeltaSeconds, class AActor*& K2NodeEventMyTarget1, struct FGameplayCueParameters& K2NodeEventParameters1, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents1, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents1, class ULegacyCameraShake*& K2NodeEventBurstCameraShakeInstance, class ADecalActor*& K2NodeEventBurstDecalInstance, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UParticleSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UAudioComponent*& CallFuncArrayGetItem, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, struct TScriptInterface<class IAudioParameterControllerInterface>& CallFuncSetFloatParameterselfCastInput, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, double& CallFuncGetGameTimeInSecondsReturnValue, bool& CallFuncIsValidReturnValue, double& CallFuncGetWorldDeltaSecondsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncGetIsPlayingReplayReturnValue, bool& CallFuncGetIsPlayingReplayReturnValue1, bool& CallFuncBooleanORReturnValue, float& CallFuncConvBoolToFloatReturnValue, bool& CallFuncIsLocallyControlledReturnValue1, int& TempintArrayIndexVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable1, int& CallFuncArrayLengthReturnValue1, int& CallFuncAddIntIntReturnValue1, bool& CallFuncLessIntIntReturnValue, int& TempintArrayIndexVariable2, class UParticleSystemComponent*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncGreaterIntIntReturnValue1, int& TempintLoopCounterVariable2, int& CallFuncAddIntIntReturnValue2, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, int& TempintArrayIndexVariable3, float& CallFuncGetValueAtLevelReturnValue2, class USkeletalMeshComponent*& CallFuncArrayGetItem2, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, float& CallFuncGetValueAtLevelReturnValue3, class AFortPlayerController*& CallFuncArrayGetItem3, int& CallFuncArrayLengthReturnValue3, bool& CallFuncOnSameTeamReturnValue, bool& CallFuncGetIsBroadcastClientReturnValue, bool& CallFuncBooleanORReturnValue1, float& CallFuncGetValueAtLevelReturnValue4, class UParticleSystemComponent*& CallFuncArrayGetItem4, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, class UParticleSystemComponent*& CallFuncArrayGetItem5, double& CallFuncAbsReturnValue, int& CallFuncArrayLengthReturnValue4, double& CallFuncMapRangeClampedReturnValue, bool& CallFuncGreaterIntIntReturnValue2, double& CallFuncFInterpToReturnValue, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncFClampReturnValue, int& CallFuncArrayLengthReturnValue5, bool& CallFuncGreaterIntIntReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, class USkeletalMeshComponent*& CallFuncArrayGetItem6, int& CallFuncArrayLengthReturnValue6, bool& CallFuncLessIntIntReturnValue1, int& TempintLoopCounterVariable3, class UParticleSystemComponent*& CallFuncArrayGetItem7, class UParticleSystemComponent*& CallFuncArrayGetItem8, bool& CallFuncLessIntIntReturnValue2, int& CallFuncAddIntIntReturnValue3, class USkeletalMeshComponent*& CallFuncArrayGetItem9, bool& CallFuncIsLocallyControlledReturnValue2, int& CallFuncArrayLengthReturnValue7, int& CallFuncArrayLengthReturnValue8, bool& CallFuncLessIntIntReturnValue3, bool& CallFuncGreaterIntIntReturnValue4, bool& CallFuncGetIsPlayingReplayReturnValue2, bool& CallFuncGetIsBroadcastClientReturnValue1, bool& CallFuncBooleanORReturnValue2, class AFortPlayerPawn*& K2NodeCustomEventPawn, bool& CallFuncBooleanORReturnValue3, bool& CallFuncIsLocallyControlledReturnValue3, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, class AFortWeapon*& K2NodeCustomEventNewWeapon, class AFortWeapon*& K2NodeCustomEventPrevWeapon, bool& CallFuncIsValidReturnValue4, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsValidReturnValue7, bool& CallFuncNearlyEqualFloatFloatReturnValue, double& K2NodeSelectDefault, double& CallFuncSubtractDoubleDoubleReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue2, float& CallFuncSetFloatParameterInFloatImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast, double& K2NodeVariableSetWalkVisMultiplierImplicitCast, double& K2NodeVariableSetSprintVisMultiplierImplicitCast, double& K2NodeVariableSetMinFriendlyOpacityImplicitCast, double& K2NodeSelectOption1ImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast1, double& K2NodeVariableSetInteractVisibilityImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

