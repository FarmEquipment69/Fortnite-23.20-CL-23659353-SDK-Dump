// BlueprintGeneratedClass /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
// Size: 0xf70
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{
	unsigned char unreflected_c3a[0x6]; // 0xc3a (0x6) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xc40 (0x8)
	class UClass* PrjGrenade; // 0xc48 (0x8)
	double GrenadeSpeedMin; // 0xc50 (0x8)
	double GrenadeSpeedMax; // 0xc58 (0x8)
	double GravityScale; // 0xc60 (0x8)
	struct FGameplayTagContainer TCClusterBomb; // 0xc68 (0x20)
	struct FGameplayTagContainer TCBiggerIsBetter; // 0xc88 (0x20)
	struct FGameplayTag TGEContainerExplosion; // 0xca8 (0x4)
	unsigned char unreflected_cac[0x4]; // 0xcac (0x4) 
	double ExplosionRadius; // 0xcb0 (0x8)
	double AdditionalThrowAngle; // 0xcb8 (0x8)
	struct FGameplayTag ECClusterExplosion; // 0xcc0 (0x4)
	unsigned char unreflected_cc4[0x4]; // 0xcc4 (0x4) 
	struct FFortFeedbackHandle GrenadeDialogFeedback; // 0xcc8 (0x10)
	struct FGameplayTagContainer TCKeepOut; // 0xcd8 (0x20)
	struct FGameplayTag ECKeepOut; // 0xcf8 (0x4)
	bool BiggerIsBetter; // 0xcfc (0x1)
	bool ClusterBomb; // 0xcfd (0x1)
	bool KeepOut; // 0xcfe (0x1)
	unsigned char unreflected_cff[0x1]; // 0xcff (0x1) 
	struct FGameplayTagContainer TCGrenadeAmmo; // 0xd00 (0x20)
	struct FGameplayTagContainer TCGrenadeCost; // 0xd20 (0x20)
	struct FGameplayTagContainer TCGrenadeDamage; // 0xd40 (0x20)
	bool GrenadeAmmo; // 0xd60 (0x1)
	bool GrenadeCost; // 0xd61 (0x1)
	bool GrenadeDamage; // 0xd62 (0x1)
	unsigned char unreflected_d63[0x1]; // 0xd63 (0x1) 
	int GrenadeAmmoUpgrade; // 0xd64 (0x4)
	int GrenadeAmmoDefault; // 0xd68 (0x4)
	int MaxGrenadeAmmo; // 0xd6c (0x4)
	int ExplosionRadiusTooltip; // 0xd70 (0x4)
	int ExplosionRadiusDefault; // 0xd74 (0x4)
	int ExplosionRadiusUpgrade; // 0xd78 (0x4)
	unsigned char unreflected_d7c[0x4]; // 0xd7c (0x4) 
	struct FGameplayTagContainer TCPlasmaGrenades; // 0xd80 (0x20)
	bool PlasmaGrenades; // 0xda0 (0x1)
	unsigned char unreflected_da1[0x7]; // 0xda1 (0x7) 
	struct FGameplayTagContainer TCFlashbang; // 0xda8 (0x20)
	bool Flashbang; // 0xdc8 (0x1)
	unsigned char unreflected_dc9[0x7]; // 0xdc9 (0x7) 
	struct FVector GrenadeTargetingOriginOffset; // 0xdd0 (0x18)
	bool DummyShouldBounce; // 0xde8 (0x1)
	unsigned char unreflected_de9[0x7]; // 0xde9 (0x7) 
	double DummyBounciness; // 0xdf0 (0x8)
	double DummyFriction; // 0xdf8 (0x8)
	double TrajectoryUpdateInterval; // 0xe00 (0x8)
	double DummyMaxSpeed; // 0xe08 (0x8)
	double DummyGravity; // 0xe10 (0x8)
	double DummyTimeStep; // 0xe18 (0x8)
	double DummyExtent; // 0xe20 (0x8)
	bool InThrowWindup; // 0xe28 (0x1)
	unsigned char unreflected_e29[0x7]; // 0xe29 (0x7) 
	class ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xe30 (0x8)
	class UClass* TrajectoryIndicatorClass; // 0xe38 (0x8)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xe40 (0x58)
	bool AbilityKeyPressed; // 0xe98 (0x1)
	unsigned char unreflected_e99[0x7]; // 0xe99 (0x7) 
	double MaxSpeedPitch; // 0xea0 (0x8)
	double MinSpeedPitch; // 0xea8 (0x8)
	double MaxTossPitch; // 0xeb0 (0x8)
	int MaxTrajectoryBounces; // 0xeb8 (0x4)
	unsigned char unreflected_ebc[0x4]; // 0xebc (0x4) 
	struct FGameplayTagContainer TCTacticalClusterbomb; // 0xec0 (0x20)
	bool TacticalClusterbomb; // 0xee0 (0x1)
	unsigned char unreflected_ee1[0x3]; // 0xee1 (0x3) 
	struct FGameplayTag ECClusterExplosionTactical; // 0xee4 (0x4)
	double FFrameDelay; // 0xee8 (0x8)
	bool BiggerIsBetterT01; // 0xef0 (0x1)
	bool BiggerIsBetterT02; // 0xef1 (0x1)
	bool ClusterBombT01; // 0xef2 (0x1)
	bool ClusterBombT02; // 0xef3 (0x1)
	struct FGameplayTag TBiggerIsBetterT01; // 0xef4 (0x4)
	struct FGameplayTag TBiggerIsBetterT02; // 0xef8 (0x4)
	struct FGameplayTag TClusterBombT01; // 0xefc (0x4)
	struct FGameplayTag TClusterBombT02; // 0xf00 (0x4)
	unsigned char unreflected_f04[0x4]; // 0xf04 (0x4) 
	struct FScalableFloat SFBiggerIsBetterRadiusT01; // 0xf08 (0x28)
	class UAnimMontage* ThrowMontage; // 0xf30 (0x8)
	struct FGameplayTag TEventActivate; // 0xf38 (0x4)
	struct FGameplayTag TEventDeactivate; // 0xf3c (0x4)
	struct FScalableFloat SFBiggerIsBetterRadiusT02; // 0xf40 (0x28)
	struct TEnumAsByte<ECollisionChannel> DummyCollisionChannel; // 0xf68 (0x1)
	unsigned char unreflected_f69[0x3]; // 0xf69 (0x3) 
	struct FGameplayTag ThrowCue; // 0xf6c (0x4)

	/* Functions */

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ActiveAbilitySetup (Has no native function)
	void ActiveAbilitySetup(class UAbilitySystemComponent*& AbilitySystemIn, class UAbilitySystemComponent*& AbilitySystemOut, class UAbilitySystemComponent*& CallFuncActiveAbilitySetupAbilitySystemOut, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncDoesTagAssetInterfaceHaveTagTagContainerInterfaceCastInput, bool& CallFuncDoesTagAssetInterfaceHaveTagReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncDoesTagAssetInterfaceHaveTagTagContainerInterfaceCastInput1, bool& CallFuncDoesTagAssetInterfaceHaveTagReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncDoesTagAssetInterfaceHaveTagTagContainerInterfaceCastInput2, bool& CallFuncDoesTagAssetInterfaceHaveTagReturnValue2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncDoesTagAssetInterfaceHaveTagTagContainerInterfaceCastInput3, bool& CallFuncDoesTagAssetInterfaceHaveTagReturnValue3); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnFragGrenade (Has no native function)
	void SpawnFragGrenade(class UClass*& ProjectileClass, struct FVector& SpawnLocation, struct FRotator& InputPin, struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, double& InitialSpeed, double& GravityScale, class AB_Prj_Commando_FragGrenade_C*& FragGrenade, struct FFortGameplayEffectContainerSpec& CallFuncMakeGameplayEffectContainerSpecReturnValue, struct FFortGameplayEffectContainerSpec& CallFuncMakeGameplayEffectContainerSpecReturnValue1, struct FFortGameplayEffectContainerSpec& CallFuncMakeGameplayEffectContainerSpecReturnValue2, class AFortProjectileBase*& CallFuncSpawnProjectileReturnValue, class AB_Prj_Commando_FragGrenade_C*& K2NodeDynamicCastAsBPrjCommandoFragGrenade, bool& K2NodeDynamicCastbSuccess, float& CallFuncSpawnProjectileInitialSpeedImplicitCast, float& CallFuncSpawnProjectileGravityScaleImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch (Has no native function)
	void CalcGrenadeSpeedFromPitch(double& AimPitch, double& GrenadeSpeed, float& CallFuncNormalizeAxisReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncFClampReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncLerpReturnValue, float& CallFuncNormalizeAxisAngleImplicitCast, double& CallFuncFClampValueImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.UpdateTrajectorySpline (Has no native function)
	void UpdateTrajectorySpline(struct TArray<class AActor*>& CallFuncGetProjectileIgnoredActorsReturnValue, double& CallFuncSelectFloatReturnValue, struct FVector& CallFuncSpawnLocationAndRotationOutLoc, struct FRotator& CallFuncSpawnLocationAndRotationOutRot, struct FVector& CallFuncConvRotatorToVectorReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, double& CallFuncCalcGrenadeSpeedFromPitchGrenadeSpeed, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncFMaxReturnValue, struct TArray<struct FVector>& CallFuncCalculateProjectileTrajectorySplineOutSplinePoints, struct TArray<struct FVector>& CallFuncCalculateProjectileTrajectorySplineOutSplineTangents, float& CallFuncCalculateProjectileTrajectorySplineTraceExtentImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineTimeStepImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineFrictionImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineBouncinessImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineGravityImplicitCast, double& CallFuncCalcGrenadeSpeedFromPitchAimPitchImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineMaxSpeedImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupDummyProjectile (Has no native function)
	void SetupDummyProjectile(struct FTransform& CallFuncGetTransformReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, struct FFortProjectileTrajectoryData& CallFuncGetProjectileTrajectoryDataTrajectoryData, class AActor*& CallFuncFinishSpawningActorReturnValue, class ABP_ProjectileTrajectory_C*& K2NodeDynamicCastAsBPProjectileTrajectory, bool& K2NodeDynamicCastbSuccess, double& CallFuncFMaxReturnValue, float& CallFuncGetProjectileTrajectoryDataDefaultGravityScaleImplicitCast, double& K2NodeVariableSetDummyMaxSpeedImplicitCast, double& K2NodeVariableSetDummyGravityImplicitCast, double& CallFuncFMaxAImplicitCast, double& CallFuncFMaxBImplicitCast, double& K2NodeVariableSetDummyBouncinessImplicitCast, double& K2NodeVariableSetDummyFrictionImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnLocationAndRotation (Has no native function)
	void SpawnLocationAndRotation(struct FVector& OutLoc, struct FRotator& OutRot, struct FRotator& CallFuncK2GetActorRotationReturnValue, struct FRotator& CallFuncGetDefaultTargetingRotationReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncRotateAngleAxisReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupAbility (Has no native function)
	void SetupAbility(class UAbilitySystemComponent*& AbilitySystemComponentRef, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput, bool& CallFuncHasAllMatchingGameplayTagsReturnValue, int& CallFuncSelectIntReturnValue, int& CallFuncSelectIntReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput1, bool& CallFuncHasAllMatchingGameplayTagsReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput2, bool& CallFuncHasAllMatchingGameplayTagsReturnValue2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput3, bool& CallFuncHasAllMatchingGameplayTagsReturnValue3, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput4, bool& CallFuncHasAllMatchingGameplayTagsReturnValue4, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput5, bool& CallFuncHasAllMatchingGameplayTagsReturnValue5, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput6, bool& CallFuncHasAllMatchingGameplayTagsReturnValue6, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput7, bool& CallFuncHasAllMatchingGameplayTagsReturnValue7, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAllMatchingGameplayTagsTagContainerInterfaceCastInput8, bool& CallFuncHasAllMatchingGameplayTagsReturnValue8); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupGrenade (Has no native function)
	void SetupGrenade(double& AimPitch, class UClass*& BaseGrenade, double& ProjectileSpeed, struct FFortGameplayEffectContainerSpec& ExplosionGameplaySpec, double& ProjectileGravityScale, double& CallFuncCalcGrenadeSpeedFromPitchGrenadeSpeed, struct FFortGameplayEffectContainerSpec& CallFuncMakeGameplayEffectContainerSpecReturnValue, struct FScalableFloat& CallFuncEvaluatePerkTierBalanceValueBalanceValue, double& CallFuncGetRangeFromGameplayEffectContainerSpecRange, double& CallFuncAddDoubleDoubleReturnValue, struct FFortGameplayEffectContainer& CallFuncBPGetGameplayEffectContainerReturnValue, double& CallFuncGetRangeFromGameplayEffectContainerRange, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FScalableFloat& K2NodeMakeStructScalableFloat, struct FFortGameplayEffectContainer& CallFuncReplaceRangeInGameplayEffectContainerReturnValue, double& CallFuncAddDoubleDoubleAImplicitCast, float& K2NodeMakeStructValueImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_F5D87C9E46378707AE4C79B3A42F5A45 (Has no native function)
	void OnFinishF5D87C9E46378707AE4C79B3A42F5A45(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCancelled_854170AF4268B06A435A3AA33232C5BF (Has no native function)
	void OnCancelled854170AF4268B06A435A3AA33232C5BF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnInterrupted_854170AF4268B06A435A3AA33232C5BF (Has no native function)
	void OnInterrupted854170AF4268B06A435A3AA33232C5BF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnBlendOut_854170AF4268B06A435A3AA33232C5BF (Has no native function)
	void OnBlendOut854170AF4268B06A435A3AA33232C5BF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCompleted_854170AF4268B06A435A3AA33232C5BF (Has no native function)
	void OnCompleted854170AF4268B06A435A3AA33232C5BF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB (Has no native function)
	void OnFinish1C6A100D44D1ACE5BBB57DAEDB3561CB(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Completed_BF65CDBE4F9E98E9174850B85775A15B (Has no native function)
	void CompletedBF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Cancelled_BF65CDBE4F9E98E9174850B85775A15B (Has no native function)
	void CancelledBF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Triggered_BF65CDBE4F9E98E9174850B85775A15B (Has no native function)
	void TriggeredBF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnAbilityInputReleased (Has no native function)
	void OnAbilityInputReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CleanupTrajectoryDisplay (Has no native function)
	void CleanupTrajectoryDisplay(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.TossGrenade (Has no native function)
	void TossGrenade(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ServerSpawnProjectile (Has no native function)
	void ServerSpawnProjectile(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory (Has no native function)
	void ExecuteUbergraphGACommandoFragGrenadeWithTrajectory(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UAbilityTask_WaitDelay*& CallFuncWaitDelayReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncIsValidReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, class UAbilitySystemComponent*& CallFuncActiveAbilitySetupAbilitySystemOut, struct FVector& CallFuncSpawnLocationAndRotationOutLoc, struct FRotator& CallFuncSpawnLocationAndRotationOutRot, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, class UClass*& CallFuncSetupGrenadeBaseGrenade, double& CallFuncSetupGrenadeProjectileSpeed, struct FFortGameplayEffectContainerSpec& CallFuncSetupGrenadeExplosionGameplaySpec, double& CallFuncSetupGrenadeProjectileGravityScale, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, bool& K2NodeEventbWasCancelled, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncBooleanANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, class UAbilityTask_WaitDelay*& CallFuncWaitDelayReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, bool& CallFuncIsValidReturnValue2, bool& CallFuncSetHolsterWeaponWithNameIsWeaponHolstered, bool& CallFuncSetHolsterWeaponWithNameOperationSuccessful, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageWaitTargetReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsServerReturnValue, bool& CallFuncCommitAbilityWithEventPassed, bool& CallFuncSetHolsterWeaponWithNameIsWeaponHolstered1, bool& CallFuncSetHolsterWeaponWithNameOperationSuccessful1, double& CallFuncSetupGrenadeAimPitchImplicitCast, float& CallFuncK2SetTimerTimeImplicitCast, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

