// BlueprintGeneratedClass /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C
// Size: 0x11a8
class ABGA_PhysicsTreeLog_C : public ABuildingProp
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xee8 (0x8)
	class UNiagaraComponent* NSPhysicsTreeInWaterRipples; // 0xef0 (0x8)
	class UFortSoundIndicatorComponent* FortSoundIndicator; // 0xef8 (0x8)
	class UCapsuleComponent* WaterInteractMiddle; // 0xf00 (0x8)
	class UCapsuleComponent* WaterInteractBottom; // 0xf08 (0x8)
	class UCapsuleComponent* WaterInteractTop; // 0xf10 (0x8)
	class UNiagaraComponent* NSPhysicsTreeEnvironmentImpact; // 0xf18 (0x8)
	struct TArray<struct FScalableFloat> PlayerImpactTiers; // 0xf20 (0x10)
	struct TArray<struct FScalableFloat> PlayerImpulseTiers; // 0xf30 (0x10)
	struct FVector LastImpactNormal; // 0xf40 (0x18)
	struct FScalableFloat VerticalImpulseRatio; // 0xf58 (0x28)
	class UBuoyancyComponent* BuoyancyComponent; // 0xf80 (0x8)
	double NextImminentCollisionTime; // 0xf88 (0x8)
	double TimeBetweenImminentCollisions; // 0xf90 (0x8)
	class UMaterialInstanceDynamic* MatReference; // 0xf98 (0x8)
	double BreakTreeDamage; // 0xfa0 (0x8)
	double NextPotentialLaunchTime; // 0xfa8 (0x8)
	double LaunchDelay; // 0xfb0 (0x8)
	struct FGameplayTag TreeDestructionBurstCue; // 0xfb8 (0x4)
	unsigned char unreflected_fbc[0x4]; // 0xfbc (0x4) 
	struct FTransform TreeDestructionTransform; // 0xfc0 (0x60)
	int CachedDamageValue; // 0x1020 (0x4)
	unsigned char unreflected_1024[0x4]; // 0x1024 (0x4) 
	double SnowTimerValue; // 0x1028 (0x8)
	struct FTimerHandle* SnowRemovalTimerHandle; // 0x1030 (0x8)
	class UFXSystemComponent* WaterFxPhysicsTreeMiddle; // 0x1038 (0x8)
	struct TArray<class UFXSystemComponent*> FxSystemArray; // 0x1040 (0x10)
	double WaterFxPlaneDepth; // 0x1050 (0x8)
	struct FVector WaterFxPlaneLocation; // 0x1058 (0x18)
	int WaterFxIndex; // 0x1070 (0x4)
	unsigned char unreflected_1074[0x4]; // 0x1074 (0x4) 
	class UFXSystemComponent* WaterFxPhysicsTreeTop; // 0x1078 (0x8)
	class UFXSystemComponent* WaterFxPhysicsTreeBottom; // 0x1080 (0x8)
	struct FTimerHandle* WaterSurfaceInfoTimer; // 0x1088 (0x8)
	struct FVector WaterFxPlaneNormal; // 0x1090 (0x18)
	class ABP_FluidSim_FN_C* FluidSim; // 0x10a8 (0x8)
	struct TMap<struct FName, struct FName> SocketsAndEndpoints; // 0x10b0 (0x50)
	struct FFluidForceDynamic FluidForceDynamic; // 0x1100 (0x70)
	double LogLength; // 0x1170 (0x8)
	bool CanPlayDeathEffects; // 0x1178 (0x1)
	unsigned char unreflected_1179[0x7]; // 0x1179 (0x7) 
	struct FScalableFloat bSplitWhenCutBySaber; // 0x1180 (0x28)

	/* Functions */

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitOffset (Has no native function)
	void CalculateSplitOffset(bool& bSmallSide, double& SplitPercentage, double& LocalZOffset, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue2); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CalculateSplitScale (Has no native function)
	void CalculateSplitScale(bool& bSmallSide, double& SplitPercentage, double& SplitScale, double& CallFuncSubtractDoubleDoubleReturnValue, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetAnalyticsReporterActor (Has no native function)
	class AB_PhysicsTree_Reporter_C* GetAnalyticsReporterActor(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReportTreeFellingToAnalytics (Has no native function)
	void ReportTreeFellingToAnalytics(class AActor*& FelledBy, struct FString& Feller, class AB_PhysicsTree_Reporter_C*& CallFuncGetAnalyticsReporterActorReturnValue, bool& CallFuncGetAnalyticsReporterActorSuccess, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class AFortPlayerStateAthena*& K2NodeDynamicCastAsFortPlayerStateAthena, bool& K2NodeDynamicCastbSuccess1, struct FString& CallFuncGetObjectNameReturnValue, struct FUniqueNetIdRepl& CallFuncGetPlayerUniqueNetIDReturnValue, struct FString& CallFuncGetDebugStringForUniqueIdReturnValue, bool& CallFuncIsServerReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FString& CallFuncGetObjectNameReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnRep_BreakTreeDamage (Has no native function)
	void OnRepBreakTreeDamage(int& TempintVariable, int& CallFuncAddIntIntReturnValue, struct TArray<struct FName>& CallFuncGetAllSocketNamesReturnValue, struct FName& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue, int& CallFuncSubtractIntIntReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, float& CallFuncConvIntToFloatReturnValue, class UFXSystemComponent*& CallFuncSpawnFXAtLocationReturnValue, double& CallFuncAnimateFloatCurveValue, bool& CallFuncAnimateFloatCurvebIsComplete, int& CallFuncFCeilReturnValue, float& CallFuncConvIntToFloatReturnValue1, double& CallFuncDivideDoubleDoubleReturnValue, int& CallFuncMinReturnValue, int& CallFuncAddIntIntReturnValue1, int& CallFuncMinReturnValue1, bool& CallFuncLessEqualIntIntReturnValue, float& CallFuncSetFloatParameterParamImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.GetPlayerImpulseVelocityFromImpactVelocity (Has no native function)
	void GetPlayerImpulseVelocityFromImpactVelocity(double& Impact, bool& MinimumMet, double& Impulse, double& ReturnImpulseVelocity, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, struct FScalableFloat& CallFuncArrayGetItem, struct FScalableFloat& CallFuncArrayGetItem1, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, bool& CallFuncGreaterEqualDoubleDoubleReturnValue1, int& CallFuncArrayLengthReturnValue, int& CallFuncSubtractIntIntReturnValue1, int& CallFuncMaxReturnValue, double& K2NodeVariableSetReturnImpulseVelocityImplicitCast, double& CallFuncGreaterEqualDoubleDoubleBImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnComponentHit_Event_0 (Has no native function)
	void OnComponentHitEvent0(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.LogDamaged (Has no native function)
	void LogDamaged(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathPlayEffects (Has no native function)
	void OnDeathPlayEffects(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.RemoveSnow (Has no native function)
	void RemoveSnow(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.CE_SplashInWater (Has no native function)
	void CESplashInWater(struct FVector& SplashLocation); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AdjustWaterSettings (Has no native function)
	void AdjustWaterSettings(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Update Water FX (Has no native function)
	void UpdateWaterFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.AwakeStateChanged (Has no native function)
	void AwakeStateChanged(class UPrimitiveComponent*& SimulatingComponent, bool& bIsAwake); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.Control2dSimForces (Has no native function)
	void Control2dSimForces(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonEnteredWater (Has no native function)
	void OnPontoonEnteredWater(struct FSphericalPontoon& Pontoon); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.OnPontoonExitedWater (Has no native function)
	void OnPontoonExitedWater(struct FSphericalPontoon& Pontoon); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsTreeLog/BGA_PhysicsTreeLog.BGA_PhysicsTreeLog_C.ExecuteUbergraph_BGA_PhysicsTreeLog (Has no native function)
	void ExecuteUbergraphBGAPhysicsTreeLog(int& EntryPoint, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue1, class UNiagaraComponent*& CallFuncSpawnSystemAttachedReturnValue2, float& CallFuncGetMaxHealthReturnValue, float& CallFuncGetHealthReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncGetTimeSecondsReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, float& K2NodeEventDamage1, struct FGameplayTagContainer& K2NodeEventDamageTags1, struct FVector& K2NodeEventMomentum1, struct FHitResult& K2NodeEventHitInfo1, class AFortPawn*& K2NodeEventInstigatedBy1, class AActor*& K2NodeEventDamageCauser1, struct FGameplayEffectContextHandle& K2NodeEventEffectContext1, double& CallFuncGetTimeSecondsReturnValue1, double& CallFuncAddDoubleDoubleReturnValue, class UFortPhysicsObjectComponent*& CallFuncGetPhysicsObjectComponentReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FTransform& CallFuncK2GetComponentToWorldReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, bool& CallFuncIsInWaterBodyReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, double& CallFuncMultiplyMultiplyFloatFloatReturnValue, double& CallFuncMultiplyMultiplyFloatFloatReturnValue1, double& CallFuncLerpReturnValue, double& CallFuncLerpReturnValue1, class UBuoyancyComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsServerReturnValue, bool& CallFuncIsInWaterBodyReturnValue1, class APawn*& CallFuncGetPlayerPawnReturnValue, class UClass*& CallFuncGetObjectClassReturnValue, float& CallFuncGetValueAtLevelReturnValue, struct FVector& CallFuncMakeVectorReturnValue, class UFortPhysicsObjectComponent*& CallFuncGetPhysicsObjectComponentReturnValue1, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, double& CallFuncVSizeReturnValue, struct FVector& CallFuncNormalReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue1, struct FVector& K2NodeCustomEventSplashLocation, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncVSizeReturnValue1, int& TempintLoopCounterVariable, bool& CallFuncGetPlayerImpulseVelocityFromImpactVelocityMinimumMet, double& CallFuncGetPlayerImpulseVelocityFromImpactVelocityImpulse, int& CallFuncAddIntIntReturnValue, struct FVector& CallFuncConvDoubleToVectorReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, int& TempintArrayIndexVariable, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FString& CallFuncGetObjectNameReturnValue, class AB_PhysicsTree_Reporter_C*& CallFuncGetAnalyticsReporterActorReturnValue, bool& CallFuncGetAnalyticsReporterActorSuccess, class UFortPhysicsObjectComponent*& CallFuncGetPhysicsObjectComponentReturnValue2, bool& CallFuncIsActiveReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsOverlappingWaterBodyReturnValue, class UPrimitiveComponent*& K2NodeCustomEventHitComponent, class AActor*& K2NodeCustomEventOtherActor, class UPrimitiveComponent*& K2NodeCustomEventOtherComp, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, double& CallFuncVSizeReturnValue2, struct FRotator& CallFuncConvVectorToRotatorReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, struct FTransform& CallFuncMakeTransformReturnValue, double& CallFuncFClampReturnValue, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, class UClass*& CallFuncGetObjectClassReturnValue1, bool& CallFuncNotEqualClassClassReturnValue, class UPrimitiveComponent*& CallFuncGetMovementBaseReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, float& CallFuncConvIntToFloatReturnValue, int& CallFuncArrayLengthReturnValue, struct FVector& CallFuncGetLastWaterSurfaceInfoOutWaterPlaneLocation, struct FVector& CallFuncGetLastWaterSurfaceInfoOutWaterPlaneNormal, struct FVector& CallFuncGetLastWaterSurfaceInfoOutWaterSurfacePosition, float& CallFuncGetLastWaterSurfaceInfoOutWaterDepth, int& CallFuncGetLastWaterSurfaceInfoOutWaterBodyIdx, struct FVector& CallFuncGetLastWaterSurfaceInfoOutWaterVelocity, bool& CallFuncIsDedicatedServerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UFXSystemComponent*& CallFuncSpawnFXSystemAttachedReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct TArray<class ABP_FluidSim_FN_C*>& CallFuncGetAllActorsOfClassOutActors, class UFXSystemComponent*& CallFuncSpawnFXSystemAttachedReturnValue1, class ABP_FluidSim_FN_C*& CallFuncArrayGetItem, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UPrimitiveComponent*& K2NodeCustomEventSimulatingComponent, bool& K2NodeCustomEventbIsAwake, int& TempintArrayIndexVariable1, class UFXSystemComponent*& CallFuncArrayGetItem1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, int& CallFuncArrayAddReturnValue, int& TempintLoopCounterVariable1, int& CallFuncArrayAddReturnValue1, int& CallFuncAddIntIntReturnValue1, int& CallFuncArrayAddReturnValue2, class UFXSystemComponent*& CallFuncSpawnFXSystemAttachedReturnValue2, bool& CallFuncIsValidReturnValue2, int& TempintArrayIndexVariable2, int& TempintLoopCounterVariable2, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue2, int& TempintArrayIndexVariable3, int& TempintLoopCounterVariable3, bool& CallFuncIsDedicatedServerReturnValue1, int& CallFuncAddIntIntReturnValue3, bool& CallFuncIsDedicatedServerReturnValue2, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren1, class USceneComponent*& CallFuncArrayGetItem2, class USceneComponent*& CallFuncArrayGetItem3, int& CallFuncArrayLengthReturnValue1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue1, bool& CallFuncLessIntIntReturnValue2, struct TArray<class USceneComponent*>& CallFuncGetChildrenComponentsChildren2, class USceneComponent*& CallFuncArrayGetItem4, int& CallFuncArrayLengthReturnValue3, bool& CallFuncLessIntIntReturnValue3, bool& CallFuncIsOverlappingWaterBodyReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FSphericalPontoon& K2NodeCustomEventPontoon1, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& K2NodeSwitchNameCmpSuccess, struct FSphericalPontoon& K2NodeCustomEventPontoon, bool& K2NodeSwitchNameCmpSuccess1, double& CallFuncDivideDoubleDoubleBImplicitCast, double& CallFuncDivideDoubleDoubleAImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast1, double& CallFuncMakeVectorZImplicitCast, float& CallFuncSetVariableFloatInValueImplicitCast, float& CallFuncSetFloatParameterParamImplicitCast, double& K2NodeVariableSetWaterFxPlaneDepthImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

