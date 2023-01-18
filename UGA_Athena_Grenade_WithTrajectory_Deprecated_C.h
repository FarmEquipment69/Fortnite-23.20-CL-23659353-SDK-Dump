// BlueprintGeneratedClass /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C
// Size: 0xf99
class UGA_Athena_Grenade_WithTrajectory_Deprecated_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag EventActivation; // 0xb28 (0x4)
	struct FGameplayTag EventComplete; // 0xb2c (0x4)
	class UClass* PrjGrenade; // 0xb30 (0x8)
	double GrenadeSpeedMin; // 0xb38 (0x8)
	double GrenadeSpeedMax; // 0xb40 (0x8)
	double GravityScale; // 0xb48 (0x8)
	class USoundBase* GrenadeSound; // 0xb50 (0x8)
	struct FGameplayTag ECDefaultExplosion; // 0xb58 (0x4)
	unsigned char unreflected_b5c[0x4]; // 0xb5c (0x4) 
	struct FFortGameplayEffectContainerSpec ECReturnedEffect; // 0xb60 (0xb8)
	struct FFortGameplayEffectContainerSpec ECAdditionalReturnedEffect; // 0xc18 (0xb8)
	double ExplosionRadius; // 0xcd0 (0x8)
	double AdditionalThrowAngle; // 0xcd8 (0x8)
	struct FFortFeedbackHandle GrenadeDialogFeedback; // 0xce0 (0x10)
	bool GrenadeAmmo; // 0xcf0 (0x1)
	bool PlasmaGrenades; // 0xcf1 (0x1)
	bool Flashbang; // 0xcf2 (0x1)
	unsigned char unreflected_cf3[0x5]; // 0xcf3 (0x5) 
	struct FVector GrenadeTargetingOriginOffset; // 0xcf8 (0x18)
	bool DummyShouldBounce; // 0xd10 (0x1)
	unsigned char unreflected_d11[0x7]; // 0xd11 (0x7) 
	double DummyBounciness; // 0xd18 (0x8)
	double DummyFriction; // 0xd20 (0x8)
	double DummyMaxSpeed; // 0xd28 (0x8)
	double DummyGravity; // 0xd30 (0x8)
	double DummyTimeStep; // 0xd38 (0x8)
	double DummyExtent; // 0xd40 (0x8)
	struct FVector GrenadeTargetingOriginOffsetCrouched; // 0xd48 (0x18)
	bool InThrowWindup; // 0xd60 (0x1)
	unsigned char unreflected_d61[0x7]; // 0xd61 (0x7) 
	class ABP_ProjectileTrajectory_C* TrajectoryIndicator; // 0xd68 (0x8)
	class UClass* TrajectoryIndicatorClass; // 0xd70 (0x8)
	struct FFortGameplayAbilityMontageInfo ThrowWindupMontage; // 0xd78 (0x58)
	bool AbilityKeyPressed; // 0xdd0 (0x1)
	unsigned char unreflected_dd1[0x7]; // 0xdd1 (0x7) 
	double MaxSpeedPitch; // 0xdd8 (0x8)
	double MinSpeedPitch; // 0xde0 (0x8)
	struct FGameplayEventData EventData; // 0xde8 (0xb0)
	class AFortPlayerPawn* PlayerPawn; // 0xe98 (0x8)
	double MaxTossPitch; // 0xea0 (0x8)
	int MaxTrajectoryBounces; // 0xea8 (0x4)
	unsigned char unreflected_eac[0x4]; // 0xeac (0x4) 
	double PostThrowCancelDelay; // 0xeb0 (0x8)
	double PostThrowEndDelay; // 0xeb8 (0x8)
	class AFortProjectileBase* ProjectileReference; // 0xec0 (0x8)
	double DistanceFromInstigatorCheck; // 0xec8 (0x8)
	struct FTimerHandle* UpdateTrajectoryTimerHandle; // 0xed0 (0x8)
	bool SpawnedOnEquip; // 0xed8 (0x1)
	struct TEnumAsByte<ECollisionChannel> DummyCollisionChannel; // 0xed9 (0x1)
	unsigned char unreflected_eda[0x6]; // 0xeda (0x6) 
	class AFortProjectileDecoHelper* GrenadeDecoHelper; // 0xee0 (0x8)
	class AFortDecoTool_ContextTrap* GrenadeDecoTool; // 0xee8 (0x8)
	struct FMulticastInlineDelegate OnProjectileSpawn; // 0xef0 (0x10)
	struct FGameplayTagContainer QuestCreditTargetTag; // 0xf00 (0x20)
	int DummyMaxSteps; // 0xf20 (0x4)
	struct FGameplayTag GCCookLoop; // 0xf24 (0x4)
	struct FGameplayTag GCOnThrow; // 0xf28 (0x4)
	bool bIsSecondaryFire; // 0xf2c (0x1)
	bool bIsThrowing; // 0xf2d (0x1)
	unsigned char unreflected_f2e[0x2]; // 0xf2e (0x2) 
	class UClass* CameraMode; // 0xf30 (0x8)
	bool bThrowInstantly; // 0xf38 (0x1)
	bool bPreventDeploymentInBlockAreas; // 0xf39 (0x1)
	unsigned char unreflected_f3a[0x2]; // 0xf3a (0x2) 
	float DeployableBlockingAreaCheckRadius; // 0xf3c (0x4)
	struct FVector DeployableBlockingAreaCheckOffset; // 0xf40 (0x18)
	struct FGameplayTagContainer VehicleTag; // 0xf58 (0x20)
	struct FGameplayTagContainer ThrowTag; // 0xf78 (0x20)
	bool TrajectoryHidden; // 0xf98 (0x1)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.ShouldOnlyShowTrajectoryOnUse (Has no native function)
	bool ShouldOnlyShowTrajectoryOnUse(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SpawnTrajectoryIndicator (Has no native function)
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool& bSpawnOnEquip); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.GetProjectileTrajectoryPoints (Has no native function)
	void GetProjectileTrajectoryPoints(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, struct FHitResult& OutHitResult, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn, struct TArray<class AActor*>& CallFuncGetProjectileIgnoredActorsReturnValue, double& CallFuncSelectFloatReturnValue, struct FVector& CallFuncSpawnLocationAndRotationOutLoc, struct FRotator& CallFuncSpawnLocationAndRotationOutRot, struct FVector& CallFuncConvRotatorToVectorReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, double& CallFuncCalcGrenadeSpeedFromPitchGrenadeSpeed, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncFMaxReturnValue, struct FHitResult& CallFuncCalculateProjectileTrajectorySplineWithHitOutHitResult, struct TArray<struct FVector>& CallFuncCalculateProjectileTrajectorySplineWithHitOutSplinePoints, struct TArray<struct FVector>& CallFuncCalculateProjectileTrajectorySplineWithHitOutSplineTangents, float& CallFuncCalculateProjectileTrajectorySplineWithHitTraceExtentImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineWithHitTimeStepImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineWithHitFrictionImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineWithHitBouncinessImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineWithHitGravityImplicitCast, double& CallFuncCalcGrenadeSpeedFromPitchAimPitchImplicitCast, float& CallFuncCalculateProjectileTrajectorySplineWithHitMaxSpeedImplicitCast); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.GetProjectileTrajectoryActor (Has no native function)
	class UClass* GetProjectileTrajectoryActor(); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.IsTrajectoryLocationValid (Has no native function)
	void IsTrajectoryLocationValid(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult& TrajectoryHitResult, bool& bIsLocationValid, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, struct FVector& CallFuncAddVectorVectorReturnValue, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn, bool& CallFuncIsOverlappingDeployableBlockVolumebOverlapping, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsValidReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnUpdateTrajectory (Has no native function)
	void OnUpdateTrajectory(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents, struct FHitResult& TrajectoryHitResult); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.UpdateTrajectorySpline (Has no native function)
	void UpdateTrajectorySpline(struct TArray<struct FVector>& CallFuncGetProjectileTrajectoryPointsOutSplinePoints, struct TArray<struct FVector>& CallFuncGetProjectileTrajectoryPointsOutSplineTangents, struct FHitResult& CallFuncGetProjectileTrajectoryPointsOutHitResult, bool& CallFuncIsTrajectoryLocationValidbIsLocationValid, bool& CallFuncIsValidReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.AddValidCamera (Has no native function)
	void AddValidCamera(bool& CallFuncIsValidClassReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.ExecuteThrowGC (Has no native function)
	void ExecuteThrowGC(bool& CallFuncIsGameplayTagValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.RemoveCookGC (Has no native function)
	void RemoveCookGC(bool& CallFuncIsGameplayTagValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.AddCookGC (Has no native function)
	void AddCookGC(bool& CallFuncIsGameplayTagValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.GetOwningPlayer (Has no native function)
	void GetOwningPlayer(class AFortPlayerPawn*& PlayerPawn, bool& CallFuncIsValidReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.CalcGrenadeSpeedFromPitch (Has no native function)
	void CalcGrenadeSpeedFromPitch(double& AimPitch, double& GrenadeSpeed, float& CallFuncNormalizeAxisReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncFClampReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncLerpReturnValue, float& CallFuncNormalizeAxisAngleImplicitCast, double& CallFuncFClampValueImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SetupDummyProjectile (Has no native function)
	void SetupDummyProjectile(class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn, struct FTransform& CallFuncGetTransformReturnValue, bool& CallFuncIsValidClassReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class AFortProjectileTrajectory*& CallFuncFinishSpawningActorReturnValue, class ABP_ProjectileTrajectory_C*& K2NodeDynamicCastAsBPProjectileTrajectory, bool& K2NodeDynamicCastbSuccess); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SpawnLocationAndRotation (Has no native function)
	void SpawnLocationAndRotation(struct FVector& OutLoc, struct FRotator& OutRot, bool& TempboolVariable, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn1, struct FRotator& CallFuncGetDefaultTargetingRotationReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncK2GetActorRotationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, float& CallFuncBreakRotatorRoll1, float& CallFuncBreakRotatorPitch1, float& CallFuncBreakRotatorYaw1, struct FVector& K2NodeSelectDefault, double& CallFuncAddDoubleDoubleReturnValue, struct FVector& CallFuncRotateAngleAxisReturnValue, double& CallFuncFMinReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncMakeRotatorPitchImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.SetupGrenade (Has no native function)
	void SetupGrenade(double& AimPitch, class UClass*& BaseGrenade, double& ProjectileSpeed, struct FFortGameplayEffectContainerSpec& ExplosionGameplaySpec, double& ProjectileGravityScale, struct FFortGameplayEffectContainerSpec& AdditionalExplosionGameplaySpec, struct FFortGameplayEffectContainerSpec& CallFuncMakeGameplayEffectContainerSpecReturnValue, double& CallFuncCalcGrenadeSpeedFromPitchGrenadeSpeed, struct FFortGameplayEffectContainerSpec& CallFuncMakeGameplayEffectContainerSpecReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Completed_B08560984B3818F6EECB3C9A92E61ADC (Has no native function)
	void CompletedB08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Cancelled_B08560984B3818F6EECB3C9A92E61ADC (Has no native function)
	void CancelledB08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Triggered_B08560984B3818F6EECB3C9A92E61ADC (Has no native function)
	void TriggeredB08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnFinish_4B1D92B7427697E6BD9D58ACA0F87155 (Has no native function)
	void OnFinish4B1D92B7427697E6BD9D58ACA0F87155(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnCancelled_758AC809498064C01C71318E141D1E46 (Has no native function)
	void OnCancelled758AC809498064C01C71318E141D1E46(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnInterrupted_758AC809498064C01C71318E141D1E46 (Has no native function)
	void OnInterrupted758AC809498064C01C71318E141D1E46(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnBlendOut_758AC809498064C01C71318E141D1E46 (Has no native function)
	void OnBlendOut758AC809498064C01C71318E141D1E46(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnCompleted_758AC809498064C01C71318E141D1E46 (Has no native function)
	void OnCompleted758AC809498064C01C71318E141D1E46(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C (Has no native function)
	void OnFinishD7F9D67243A9BA307AFBF7839EC5CA1C(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Completed_323490334D0637A64B5A0B8A74BD8BBA (Has no native function)
	void Completed323490334D0637A64B5A0B8A74BD8BBA(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Cancelled_323490334D0637A64B5A0B8A74BD8BBA (Has no native function)
	void Cancelled323490334D0637A64B5A0B8A74BD8BBA(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Triggered_323490334D0637A64B5A0B8A74BD8BBA (Has no native function)
	void Triggered323490334D0637A64B5A0B8A74BD8BBA(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.EventReceived_66A131144E50A82EC5375CB03900E01E (Has no native function)
	void EventReceived66A131144E50A82EC5375CB03900E01E(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnSync_0FAB15E2430AB4BA7D9D71B21A10E4FA (Has no native function)
	void OnSync0FAB15E2430AB4BA7D9D71B21A10E4FA(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.EventReceived_27499CD54A9BEA65F37B6C9376C979C1 (Has no native function)
	void EventReceived27499CD54A9BEA65F37B6C9376C979C1(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Server_SpawnProjectile (Has no native function)
	void ServerSpawnProjectile(struct FVector& Location, struct FRotator& Direction); // (Net | NetReliable | NetServer | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnAbilityInputReleased (Has no native function)
	void OnAbilityInputReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.CleanupTrajectoryDisplay (Has no native function)
	void CleanupTrajectoryDisplay(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.TossGrenade (Has no native function)
	void TossGrenade(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.InitTrajectoryVariables (Has no native function)
	void InitTrajectoryVariables(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.AthenaProjectileSpawned (Has no native function)
	void AthenaProjectileSpawned(class AFortProjectileBase*& ProjectileReference); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.CleanupTrajectoryIndicatorOnUnequip (Has no native function)
	void CleanupTrajectoryIndicatorOnUnequip(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Cleanup Trajectory Display On End (Has no native function)
	void CleanupTrajectoryDisplayOnEnd(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.UpdateTrajectory (Has no native function)
	void UpdateTrajectory(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.Server Replicate Toss Animation (Has no native function)
	void ServerReplicateTossAnimation(); // (Net | NetReliable | NetServer | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory_Deprecated (Has no native function)
	void ExecuteUbergraphGAAthenaGrenadeWithTrajectoryDeprecated(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct FGameplayEventData& K2NodeCustomEventPayload1, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, struct FGameplayEventData& TempstructVariable2, class UAbilityTask_WaitGameplayEvent*& CallFuncWaitGameplayEventReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, class UAbilityTask_NetworkSyncPoint*& CallFuncWaitNetSyncReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, bool& CallFuncIsValidReturnValue1, struct FGameplayEventData& K2NodeCustomEventPayload, struct FGameplayEventData& TempstructVariable3, class UAbilityTask_WaitGameplayEvent*& CallFuncWaitGameplayEventReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsDedicatedServerReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData4, struct FGameplayTag& K2NodeCustomEventApplicationTag4, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, bool& CallFuncIsValidReturnValue3, struct FVector& K2NodeCustomEventLocation, struct FRotator& K2NodeCustomEventDirection, struct FVector& CallFuncSpawnLocationAndRotationOutLoc, struct FRotator& CallFuncSpawnLocationAndRotationOutRot, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, class UClass*& CallFuncSetupGrenadeBaseGrenade, double& CallFuncSetupGrenadeProjectileSpeed, struct FFortGameplayEffectContainerSpec& CallFuncSetupGrenadeExplosionGameplaySpec, double& CallFuncSetupGrenadeProjectileGravityScale, struct FFortGameplayEffectContainerSpec& CallFuncSetupGrenadeAdditionalExplosionGameplaySpec, float& CallFuncBreakRotatorRoll1, float& CallFuncBreakRotatorPitch1, float& CallFuncBreakRotatorYaw1, double& CallFuncCalcGrenadeSpeedFromPitchGrenadeSpeed, bool& CallFuncIsStandaloneReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, bool& K2NodeEventbWasCancelled, struct FDelegate& K2NodeCreateDelegateOutputDelegate12, bool& CallFuncK2CommitAbilityReturnValue, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, bool& CallFuncIsValidReturnValue4, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData5, struct FGameplayTag& K2NodeCustomEventApplicationTag5, class UAbilityTask_WaitDelay*& CallFuncWaitDelayReturnValue, bool& CallFuncIsValidReturnValue5, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn, bool& CallFuncHasAuthorityReturnValue, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn1, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanORReturnValue, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn2, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn3, class AFortProjectileBase*& CallFuncSpawnProjectileReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncVSizeReturnValue, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn4, class AFortProjectileBase*& K2NodeCustomEventProjectileReference, class UAbilityTask_WaitDelay*& CallFuncWaitDelayReturnValue1, struct FGameplayAbilityTargetDataHandle& TempstructVariable4, bool& CallFuncIsValidReturnValue6, struct FGameplayTag& TempstructVariable5, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, class AFortProjectileTrajectory*& CallFuncSpawnTrajectoryIndicatorReturnValue, bool& CallFuncNotPreBoolReturnValue1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData3, struct FGameplayTag& K2NodeCustomEventApplicationTag3, struct FDelegate& K2NodeCreateDelegateOutputDelegate13, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn5, bool& CallFuncIsValidReturnValue7, bool& CallFuncIsBotControlledReturnValue, bool& CallFuncBooleanORReturnValue1, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, struct FFortProjectileTrajectoryData& CallFuncGetProjectileTrajectoryDataTrajectoryData, bool& CallFuncIsValidReturnValue8, double& CallFuncFMaxReturnValue, bool& CallFuncK2CommitAbilityReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate14, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue1, bool& CallFuncIsValidReturnValue9, bool& CallFuncIsUsingTouchReturnValue, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn6, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput1, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue1, bool& CallFuncNotPreBoolReturnValue2, bool& CallFuncBooleanANDReturnValue, class AFortPlayerPawn*& CallFuncGetOwningPlayerPlayerPawn7, class AFortWeapon*& CallFuncGetCurrentWeaponReturnValue, double& CallFuncSetupGrenadeAimPitchImplicitCast, float& CallFuncSpawnProjectileInitialSpeedImplicitCast, float& CallFuncSpawnProjectileGravityScaleImplicitCast, double& CallFuncCalcGrenadeSpeedFromPitchAimPitchImplicitCast, float& CallFuncNotifyProjectileThrownSpeedImplicitCast, float& CallFuncWaitDelayTimeImplicitCast, float& CallFuncWaitDelayTimeImplicitCast1, float& CallFuncGetProjectileTrajectoryDataDefaultGravityScaleImplicitCast, double& K2NodeVariableSetDummyMaxSpeedImplicitCast, double& K2NodeVariableSetDummyGravityImplicitCast, double& CallFuncFMaxAImplicitCast, double& CallFuncFMaxBImplicitCast, double& K2NodeVariableSetDummyBouncinessImplicitCast, double& K2NodeVariableSetDummyFrictionImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_WithTrajectory_Deprecated.GA_Athena_Grenade_WithTrajectory_Deprecated_C.OnProjectileSpawn__DelegateSignature (Has no native function)
	void OnProjectileSpawnDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

