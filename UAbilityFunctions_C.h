// BlueprintGeneratedClass /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C
// Size: 0x28
class UAbilityFunctions_C : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.ApplySlowFall (Has no native function)
	static void ApplySlowFall(double& SlowFallDuration, class UFortGameplayAbility*& SelfGameplayAbilityReference, class UClass*& GameplayEffect, class UObject*& WorldContext, struct FActiveGameplayEffectHandle*& EffectSpecHandle, struct FVector& CallFuncMakeVectorReturnValue, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingGameplayEffectSpecReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, struct FGameplayEffectSpecHandle& CallFuncAssignTagSetByCallerMagnitudeReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue, float& CallFuncAssignTagSetByCallerMagnitudeMagnitudeImplicitCast); // (Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetDistanceSquaredBetweenActors (Has no native function)
	static void GetDistanceSquaredBetweenActors(class AActor*& Actor1, class AActor*& Actor2, class UObject*& WorldContext, double& DistanceSquared, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncVSizeSquaredReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetDistanceBetweenActors (Has no native function)
	static void GetDistanceBetweenActors(class AActor*& Actor1, class AActor*& Actor2, class UObject*& WorldContext, double& Distance, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncVSizeReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetPawnFromPlayerStateZone (Has no native function)
	static void GetPawnFromPlayerStateZone(class AActor*& InActor, class UObject*& WorldContext, class AFortPlayerPawn*& OutPawn, bool& PawnReturned, class AFortPlayerStateZone*& K2NodeDynamicCastAsFortPlayerStateZone, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, class AFortPlayerPawn*& CallFuncGetCurrentPawnReturnValue, bool& CallFuncIsValidReturnValue1); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.EvaluatePerkTierBalanceValue (Has no native function)
	static void EvaluatePerkTierBalanceValue(struct FScalableFloat& T01BalanceValue, struct FScalableFloat& T02BalanceValue, bool& OwnsT02, bool& ShouldOverrideT01, class UObject*& WorldContext, struct FScalableFloat& BalanceValue, bool& TempboolVariable, bool& TempboolVariable1, bool& TempboolVariable2, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, double& CallFuncAddDoubleDoubleReturnValue, double& K2NodeSelectDefault, struct FScalableFloat& K2NodeMakeStructScalableFloat, struct FScalableFloat& K2NodeSelectDefault1, struct FScalableFloat& K2NodeSelectDefault2, double& CallFuncAddDoubleDoubleBImplicitCast, double& K2NodeSelectOption0ImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, float& K2NodeMakeStructValueImplicitCast); // (Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainer (Has no native function)
	static void GetRangeFromGameplayEffectContainer(struct FFortGameplayEffectContainer& GEContainer, int& TargetSelectionListIndex, double& AtLevel, class UObject*& WorldContext, double& Range, struct FFortAbilityTargetSelection& CallFuncArrayGetItem, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelLevelImplicitCast, double& K2NodeFunctionResultRangeImplicitCast); // (Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetTotalGameplayEffectCount (Has no native function)
	static void GetTotalGameplayEffectCount(struct TArray<class UClass*>& EffectsToCount, class UAbilitySystemComponent*& AbilitySystemComponent, class UObject*& WorldContext, int& FinalEffectCount, int& TempTotalEffectCount, int& CallFuncArrayLengthReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, class UClass*& CallFuncArrayGetItem, int& CallFuncGetGameplayEffectCountReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, int& CallFuncAddIntIntReturnValue1); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetAngleBetweenTwoVectors (Has no native function)
	static void GetAngleBetweenTwoVectors(struct FVector& VectorA, struct FVector& VectorB, class UObject*& WorldContext, double& AngleDegrees, struct FVector& CallFuncNormalReturnValue, struct FVector& CallFuncNormalReturnValue1, double& CallFuncDotVectorVectorReturnValue, double& CallFuncDegAcosReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetRangeFromGameplayEffectContainerSpec (Has no native function)
	static void GetRangeFromGameplayEffectContainerSpec(struct FFortGameplayEffectContainerSpec& GEContainerSpec, int& TargetSelectionListIndex, double& AtLevel, class UObject*& WorldContext, double& Range, struct FFortAbilityTargetSelection& CallFuncArrayGetItem, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelLevelImplicitCast, double& K2NodeFunctionResultRangeImplicitCast); // (Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.GetProjectedTeleportLocation (Has no native function)
	static void GetProjectedTeleportLocation(class AActor*& Actor, double& MovementDistance, class UObject*& WorldContext, struct FVector& TargetLocation, struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, double& CallFuncVSizeReturnValue, bool& CallFuncEqualEqualDoubleDoubleReturnValue, bool& CallFuncEqualEqualDoubleDoubleReturnValue1, bool& CallFuncEqualEqualDoubleDoubleReturnValue2, struct FVector& CallFuncGetActorForwardVectorReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanORReturnValue, struct FVector& CallFuncSelectVectorReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncNormalReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.ShouldSwordHitsHealRespondToEvent (Has no native function)
	static bool ShouldSwordHitsHealRespondToEvent(struct FGameplayEventData& Payload, class UObject*& WorldContext); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.ShouldHammerHitsHealRespondToEvent (Has no native function)
	static bool ShouldHammerHitsHealRespondToEvent(struct FGameplayEventData& Payload, class UObject*& WorldContext); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.ConvertRangeToTiles (Has no native function)
	static void ConvertRangeToTiles(double& InRange, class UObject*& WorldContext, double& OutTile, double& CallFuncDivideDoubleDoubleReturnValue); // (Static | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.SetArrayOfHitActors (Has no native function)
	static void SetArrayOfHitActors(struct FGameplayAbilityTargetDataHandle& TargetData, struct TArray<class AActor*>& ArrayToSet, class UObject*& WorldContext, int& CallFuncGetDataCountFromTargetDataReturnValue, int& TempintVariable, int& CallFuncSubtractIntIntReturnValue, struct TArray<class AActor*>& CallFuncGetActorsFromTargetDataReturnValue, bool& CallFuncLessEqualIntIntReturnValue, class AActor*& CallFuncArrayGetItem, bool& CallFuncNotEqualObjectObjectReturnValue, int& CallFuncArrayAddReturnValue, int& CallFuncAddIntIntReturnValue); // (Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Macros/Abilities/AbilityFunctions.AbilityFunctions_C.DoNOTUse-BuildArrayOfHitActors (Has no native function)
	static void DoNOTUseBuildArrayOfHitActors(struct FGameplayAbilityTargetDataHandle& TargetData, class UObject*& WorldContext, struct TArray<class AActor*>& HitActors, struct TArray<class AActor*>& LocalHitActors, int& CallFuncGetDataCountFromTargetDataReturnValue, int& TempintVariable, int& CallFuncSubtractIntIntReturnValue, struct TArray<class AActor*>& CallFuncGetActorsFromTargetDataReturnValue, bool& CallFuncLessEqualIntIntReturnValue, class AActor*& CallFuncArrayGetItem, bool& CallFuncNotEqualObjectObjectReturnValue, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayAddReturnValue); // (Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)
};

