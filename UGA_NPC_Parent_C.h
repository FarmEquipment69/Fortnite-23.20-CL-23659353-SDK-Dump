// BlueprintGeneratedClass /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C
// Size: 0xe58
class UGA_NPC_Parent_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortAIPawn* NPCActivatingFortAIPawn; // 0xb28 (0x8)
	struct TEnumAsByte<EFortMovementUrgency> NPCInitialMovementUrgency; // 0xb30 (0x1)
	bool NPCDebugAbility; // 0xb31 (0x1)
	unsigned char unreflected_b32[0x6]; // 0xb32 (0x6) 
	struct FGameplayTagContainer NPCIgnoreDamageAndOnlyDoKnockbackIfTheseAbilitiesAreActive; // 0xb38 (0x20)
	bool NPCDebugFreezeFrameEnabled; // 0xb58 (0x1)
	bool NPCDebugFreezeFrameOnlyWhenAbilityTargetHit; // 0xb59 (0x1)
	bool NPCDebugFreezeFrameOnlyWhenWeHaveSomeTarget; // 0xb5a (0x1)
	bool NPCDamageHitAbilityTargetDuringThisAbilityActivation; // 0xb5b (0x1)
	unsigned char unreflected_b5c[0x4]; // 0xb5c (0x4) 
	struct TArray<class AActor*> NPCDamageActorsWeHaveHitDuringThisAbilityActivation; // 0xb60 (0x10)
	double NPCCanActivateAbilityMaxTargetZDistanceBelow; // 0xb70 (0x8)
	double NPCCanActivateAbilityMaxTargetZDistanceAbove; // 0xb78 (0x8)
	double NPCCanActivateAbilityMaxTargetZDistanceAboveForIntentionalFailedAttack; // 0xb80 (0x8)
	struct TArray<class AActor*> BuildingTargetingHitActors; // 0xb88 (0x10)
	struct FGameplayTagContainer TCNPCFrustrationTagsToClearForGoals; // 0xb98 (0x20)
	struct TEnumAsByte<Enum_NPC_AlertLevel> NPCAlertLevelGoalIsFortPawn; // 0xbb8 (0x1)
	struct TEnumAsByte<Enum_NPC_AlertLevel> NPCAlertLevelGoalIsOther; // 0xbb9 (0x1)
	struct TEnumAsByte<Enum_NPC_AlertLevel> NPCAlertLevelGoalIsNotValid; // 0xbba (0x1)
	unsigned char unreflected_bbb[0x5]; // 0xbbb (0x5) 
	struct FScalableFloat NPCDamageKnockbackVelocityHF; // 0xbc0 (0x28)
	struct FScalableFloat NPCDamageKnockbackVerticalAngleHF; // 0xbe8 (0x28)
	struct FScalableFloat NPCDamageKnockbackMinimumYawValueHF; // 0xc10 (0x28)
	struct FScalableFloat NPCDamageCanAttackDBNOPlayersHF; // 0xc38 (0x28)
	struct FScalableFloat NPCDamageKnockbackVelocityVehicleHF; // 0xc60 (0x28)
	struct FScalableFloat NPCDamageKnockbackVerticalAngleVehicleHF; // 0xc88 (0x28)
	struct FScalableFloat NPCDamageKnockbackMinimumYawValueVehicleHF; // 0xcb0 (0x28)
	struct FScalableFloat NPCDamageChanceToEjectFromVehicleHF; // 0xcd8 (0x28)
	struct FGameplayTag DestroyBuildingGC; // 0xd00 (0x4)
	unsigned char unreflected_d04[0x4]; // 0xd04 (0x4) 
	class UClass* DestroyBuildingGE; // 0xd08 (0x8)
	struct FGameplayTagContainer TCNPCFrustrationTagsToClearForMovement; // 0xd10 (0x20)
	struct FGameplayTag TCNPCFrustrationBuildDueToGoal; // 0xd30 (0x4)
	struct FGameplayTag TCNPCFrustrationBuildDueToMovement; // 0xd34 (0x4)
	struct FGameplayTagQuery TQNPCRequirementsToBuildFrustrationDueToGoal; // 0xd38 (0x48)
	struct FGameplayTagQuery TQNPCRequirementsToBuildFrustrationDueToMovement; // 0xd80 (0x48)
	struct FScalableFloat NPCBodyBumpBuildingsWhenBuildingMovementFrustrationHF; // 0xdc8 (0x28)
	struct FScalableFloat NPCFrustrationBodyBumpOnlyDestroyPlayerBuildingsHF; // 0xdf0 (0x28)
	struct FGameplayTag TCNPCEffectContainerBodyBumpBuildingsWhenBuildingMovementFrustration; // 0xe18 (0x4)
	unsigned char unreflected_e1c[0x4]; // 0xe1c (0x4) 
	struct FGameplayAbilityTargetDataHandle BuildingTargetingTargetData; // 0xe20 (0x28)
	struct FGameplayTag BuildingTargetingApplicationTag; // 0xe48 (0x4)
	struct FGameplayTag TCBuildingTypePlayer; // 0xe4c (0x4)
	class UClass* GENPCMMRScalingAbilityCooldown; // 0xe50 (0x8)

	/* Functions */

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC ResetRotationRate (Has no native function)
	void NPCResetRotationRate(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC OverrideRotationRate (Has no native function)
	void NPCOverrideRotationRate(struct FScalableFloat& RotationRate, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncIsValidReturnValue, bool& CallFuncNotEqualDoubleDoubleReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncMakeRotatorReturnValue, float& CallFuncMakeRotatorYawImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC GetGoalActor (Has no native function)
	class UObject* NPCGetGoalActor(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsBuildingWeAreDestroyingToNavigate (Has no native function)
	void NPCAbilityTargetIsBuildingWeAreDestroyingToNavigate(bool& IsNavigationBuildingWeAreDestroying, class ABuildingActor*& BuildingWeAreDestroying, double& HealthOfBuildingWeAreDestroying, class UObject*& CallFuncNPCGetGoalActorReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetAIAbilityTargetReturnValue, bool& CallFuncIsValidReturnValue1, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess, float& CallFuncGetHealthReturnValue, bool& CallFuncNotEqualObjectObjectReturnValue, double& K2NodeFunctionResultHealthOfBuildingWeAreDestroyingImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectWithMMRScaling (Has no native function)
	void NPCApplyGameplayEffectWithMMRScaling(class UClass*& GameplayEffectClass, class AActor*& Actor, int& AvgMMR, class UObject*& ApplyGeTo, bool& CallFuncIsValidReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue1, struct FString& CallFuncGetClassDisplayNameReturnValue, struct FString& CallFuncConcatStrStrReturnValue, bool& CallFuncIsValidClassReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, class AFortGameStateAthena*& CallFuncGetGameStateAthenaReturnValue, int& CallFuncMakeLiteralIntReturnValue, bool& CallFuncIsValidReturnValue2, float& CallFuncConvIntToFloatReturnValue, double& CallFuncMakeLiteralDoubleReturnValue, struct FString& CallFuncBuildStringIntReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FString& CallFuncBuildStringObjectReturnValue, int& CallFuncGetAvgPlayerMMRReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentFromActorInfoReturnValue, bool& CallFuncIsValidReturnValue3, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue1, double& CallFuncMakeLiteralDoubleValueImplicitCast, float& CallFuncBPApplyGameplayEffectToTargetLevelImplicitCast, float& CallFuncBPApplyGameplayEffectToTargetLevelImplicitCast1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayAbilityCooldownWithMMRScaling (Has no native function)
	void NPCApplyGameplayAbilityCooldownWithMMRScaling(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC ScalableFloatIsValid (Has no native function)
	void NPCScalableFloatIsValid(struct FScalableFloat& ScalableFloat, bool& Valid, bool& CallFuncIsValidReturnValue, bool& CallFuncNotEqualNameNameReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC GetScalableFloatHotfixValue (Has no native function)
	void NPCGetScalableFloatHotfixValue(struct FScalableFloat& ScalableFloatHotfix, double& AtLevel, bool& AsBool, int& AsIntRounded, double& AsFloat, bool& CallFuncNPCScalableFloatIsValidValid, float& CallFuncGetValueAtLevelReturnValue, int& CallFuncRoundReturnValue, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncRoundReturnValue1, bool& CallFuncGreaterIntIntReturnValue1, float& CallFuncGetValueAtLevelLevelImplicitCast, double& K2NodeFunctionResultAsFloatImplicitCast, double& K2NodeFunctionResultAsFloatImplicitCast1, double& CallFuncRoundAImplicitCast, double& CallFuncRoundAImplicitCast1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevelByAIAbilityTargetType (Has no native function)
	void NPCSetAlertLevelByAIAbilityTargetType(bool& TempboolVariable, bool& TempboolOptionBIffalseuseOptionAVariable, bool& TempboolOptionBIffalseuseOptionAVariable1, class AActor*& CallFuncGetAIAbilityTargetReturnValue, bool& TempboolVariable1, bool& CallFuncIsValidReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeSelectDefault, struct TEnumAsByte<Enum_NPC_AlertLevel>& K2NodeSelectDefault1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC SetAlertLevel (Has no native function)
	void NPCSetAlertLevel(struct TEnumAsByte<Enum_NPC_AlertLevel>& NPCAlertLevel, struct FName& TempnameVariable, bool& CallFuncNotEqualByteByteReturnValue, struct FName& TempnameVariable1, struct FName& TempnameVariable2, struct FName& TempnameVariable3, struct FName& TempnameVariable4, struct TEnumAsByte<Enum_NPC_AlertLevel>& TempbyteVariable, bool& CallFuncIsValidReturnValue, struct FName& K2NodeSelectDefault, class ANPC_Pawn_Parent_C*& K2NodeDynamicCastAsNPCPawnParent, bool& K2NodeDynamicCastbSuccess, struct FString& CallFuncBuildStringNameReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC DoIntentionalFailedAttack (Has no native function)
	void NPCDoIntentionalFailedAttack(bool& DoIntentionalFailedAttack, bool& AboveTestForIntentionalFailedAttackPassed, bool& AboveTestPassed, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, class AActor*& CallFuncGetAIAbilityTargetReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncLessDoubleDoubleReturnValue, class AActor*& CallFuncGetAIAbilityTargetReturnValue1, class AFortPawn*& CallFuncGetActivatingPawnReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, struct FVector& CallFuncK2GetActorLocationReturnValue2, struct FVector& CallFuncK2GetActorLocationReturnValue3, struct FVector& CallFuncSubtractVectorVectorReturnValue1, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, bool& CallFuncLessDoubleDoubleReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToMovement (Has no native function)
	void NPCAttemptBuildFrustrationDueToMovement(struct FString& Reason, struct FString& CallFuncConcatStrStrReturnValue, bool& CallFuncIsValidReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncGetOwnedGameplayTagsselfCastInput, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncDoesContainerMatchTagQueryReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, bool& CallFuncIsTagQueryEmptyReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC AttemptBuildFrustrationDueToGoal (Has no native function)
	void NPCAttemptBuildFrustrationDueToGoal(struct FString& Reason, struct FString& CallFuncConcatStrStrReturnValue, bool& CallFuncIsValidReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncGetOwnedGameplayTagsselfCastInput, struct FGameplayTagContainer& CallFuncGetOwnedGameplayTagsTagContainer, bool& CallFuncDoesContainerMatchTagQueryReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, bool& CallFuncIsTagQueryEmptyReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForMovement (Has no native function)
	void NPCClearFrustrationTagsForMovement(struct FString& Reason, struct FString& CallFuncConcatStrStrReturnValue, bool& CallFuncIsValidReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC ClearFrustrationTagsForGoals (Has no native function)
	void NPCClearFrustrationTagsForGoals(struct FString& Reason, struct FString& CallFuncConcatStrStrReturnValue, bool& CallFuncIsValidReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.DestroyBuilding (Has no native function)
	void DestroyBuilding(class AActor*& BuildingActor, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsGameplayTagValidReturnValue, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess1, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, class AFortAthenaSupplyDropBalloon*& K2NodeDynamicCastAsFortAthenaSupplyDropBalloon, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncNotPreBoolReturnValue, class UFortHeldObjectComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& TempboolVariable, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncK2HasAuthorityReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC GenerateLaunchVelocityWithMinimumAngle (Has no native function)
	void NPCGenerateLaunchVelocityWithMinimumAngle(class AActor*& ActorWeWantToLaunch, bool& Vehicle, struct FVector& LaunchVelocity, class AActor*& LaunchActor, bool& LaunchingVehicle, bool& IsVehicle, bool& TempboolVariable, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue, struct FRotator& CallFuncK2GetActorRotationReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FRotator& CallFuncMakeRotatorReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncNormalReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue, struct FRotator& CallFuncNormalizedDeltaRotatorReturnValue, float& CallFuncBreakRotatorRoll1, float& CallFuncBreakRotatorPitch1, float& CallFuncBreakRotatorYaw1, double& CallFuncAbsReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FString& CallFuncBuildStringDoubleReturnValue, bool& TempboolVariable1, bool& TempboolVariable2, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, struct FScalableFloat& K2NodeSelectDefault, struct FString& CallFuncBuildStringDoubleReturnValue1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool1, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded1, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat1, bool& CallFuncLessDoubleDoubleReturnValue, struct FScalableFloat& K2NodeSelectDefault1, struct FString& CallFuncBuildStringBoolReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool2, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded2, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat2, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncSelectFloatReturnValue, struct FScalableFloat& K2NodeSelectDefault2, struct FRotator& CallFuncMakeRotatorReturnValue1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool3, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded3, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat3, struct FRotator& CallFuncComposeRotatorsReturnValue, struct FRotator& CallFuncSelectRotatorReturnValue, float& CallFuncBreakRotatorRoll2, float& CallFuncBreakRotatorPitch2, float& CallFuncBreakRotatorYaw2, struct FRotator& CallFuncMakeRotatorReturnValue2, struct FVector& CallFuncConvRotatorToVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncBuildStringDoubleInDoubleImplicitCast, double& CallFuncGreaterDoubleDoubleAImplicitCast, double& CallFuncAbsAImplicitCast, float& CallFuncMakeRotatorPitchImplicitCast, float& CallFuncMakeRotatorYawImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.K2_CanActivateAbility (Has no native function)
	bool K2CanActivateAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer& RelevantTags); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC TryResetMovementUrgency (Has no native function)
	void NPCTryResetMovementUrgency(bool& CallFuncIsValidReturnValue, bool& CallFuncNotEqualByteByteReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC TrySetMovementUrgency (Has no native function)
	void NPCTrySetMovementUrgency(struct TEnumAsByte<EFortMovementUrgency>& MovementUrgency, bool& TryResetUrgencyIfInvalid, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC EQS Results (Has no native function)
	void NPCEQSResults(class UEnvQueryInstanceBlueprintWrapper*& QueryInstance, struct TEnumAsByte<EEnvQueryStatus>& QueryStatus, struct TEnumAsByte<EEnvQueryRunMode>& EQSRunMode, bool& NumReturnedItemsIsImportant, struct TArray<class AActor*>& ResultActors, int& NumValidActorsGenerated, bool& ResultActorsSuccess, struct TArray<struct FVector>& ResultLocations, int& NumValidLocationsGenerated, bool& ResultLocationsSuccess, class UEnvQueryInstanceBlueprintWrapper*& QueryInstanceOut, struct TEnumAsByte<EEnvQueryStatus>& QueryStatusOut, bool& NumReturnedItemsImportant, int& RandomlyChosenIndexToReturnAsOurResult, int& LastGoodIndex, double& ScoreThreshold, double& BestScore, struct TEnumAsByte<EEnvQueryRunMode>& RunMode, struct TArray<struct FVector>& ResultLocationsFinal, int& NumResultLocationsGenerated, struct TArray<struct FVector>& ResultLocationsGenerated, bool& GeneratedLocations, struct TArray<class AActor*>& ResultActorsFinal, int& NumResultActorsGenerated, struct TArray<class AActor*>& ResultActorsGenerated, bool& GeneratedActors, struct TEnumAsByte<EEnvQueryStatus>& QueryStatusVar, class UEnvQueryInstanceBlueprintWrapper*& Query, bool& CallFuncNotPreBoolReturnValue, int& TempintArrayIndexVariable, struct FVector& CallFuncArrayGetItem, class AActor*& CallFuncArrayGetItem1, int& CallFuncArrayAddReturnValue, int& CallFuncArrayAddReturnValue1, bool& CallFuncArrayIsValidIndexReturnValue, bool& CallFuncArrayIsValidIndexReturnValue1, bool& TempboolTrueifbreakwashitVariable, int& CallFuncRandomIntegerInRangeReturnValue, bool& CallFuncNotPreBoolReturnValue1, int& CallFuncArrayLengthReturnValue, float& CallFuncGetItemScoreReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, double& CallFuncSelectFloatReturnValue, float& CallFuncGetItemScoreReturnValue1, bool& CallFuncArrayIsValidIndexReturnValue2, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncEqualEqualByteByteReturnValue2, bool& CallFuncBooleanORReturnValue, int& TempintLoopCounterVariable, bool& CallFuncEqualEqualByteByteReturnValue3, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, int& CallFuncArrayLengthReturnValue1, int& CallFuncArrayLengthReturnValue2, struct FVector& CallFuncArrayGetItem2, class AActor*& CallFuncArrayGetItem3, int& CallFuncArrayAddReturnValue2, int& CallFuncArrayAddReturnValue3, bool& CallFuncArrayIsValidIndexReturnValue3, bool& CallFuncArrayIsValidIndexReturnValue4, bool& CallFuncEqualEqualByteByteReturnValue4, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncBooleanORReturnValue1, struct TArray<struct FVector>& CallFuncGetQueryResultsAsLocationsResultLocations, bool& CallFuncGetQueryResultsAsLocationsReturnValue, struct TArray<class AActor*>& CallFuncGetQueryResultsAsActorsResultActors, bool& CallFuncGetQueryResultsAsActorsReturnValue, double& CallFuncGreaterEqualDoubleDoubleAImplicitCast, double& K2NodeVariableSetBestScoreImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC DebugFreezeFrame (Has no native function)
	void NPCDebugFreezeFrame(bool& ForceDebugFreezeFrame, bool& HitAbilityTargetRightNow, bool& HitAbilityTargetDuringThisAbilityActivation, struct TArray<class AActor*>& ActorsWeHaveHitDuringThisAbilityActivation, struct TArray<class AActor*>& ActorsHitWithThisSpecificTargetSelection, int& CallFuncArrayLengthReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2, class APlayerController*& CallFuncGetPlayerControllerReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC ApplyGameplayEffectContainerAndLaunchTargets (Has no native function)
	void NPCApplyGameplayEffectContainerAndLaunchTargets(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag, int& GameplayEffectLevel, bool& AbilityTargetCanBeHitMultipleTimesByThisSelection, bool& ForceDebugFreezeFrameForThisSpecificTargeting, bool& HitAbilityTargetRightNow, bool& HitAbilityTargetDuringThisAbilityActivation, struct TArray<class AActor*>& ActorsWeHaveHitDuringThisAbilityActivation, struct TArray<class AActor*>& ActorsHitWithThisSpecificTargetSelection, bool& HitWasVehicle, bool& ForceDebugFreezeFrame, struct FHitResult& CurrentHitActorWeAreTestingHitResultFromTargetData, int& CurrentHitActorWeAreTestingArrayIndex, class AActor*& CurrentHitActorWeAreTesting, bool& CurrentAbilityTargetCanBeHitMultipleTimesByThisSelection, int& GetCurrentGameplayEffectLevel, struct FGameplayTag& CurrentApplicationTag, struct TArray<class AActor*>& CurrentActorsGatheredThisTargetSelection, double& CurrentKnockbackVelocity, struct FGameplayAbilityTargetDataHandle& CurrentTargetData, bool& CallFuncIsValidReturnValue, class ANPC_Pawn_Parent_C*& K2NodeDynamicCastAsNPCPawnParent, bool& K2NodeDynamicCastbSuccess, int& TempintVariable, int& CallFuncAddIntIntReturnValue, bool& CallFuncHasActiveAbilityWithAnyMatchingTagReturnValue, int& TempintLoopCounterVariable, int& TempintLoopCounterVariable1, int& CallFuncAddIntIntReturnValue1, int& CallFuncAddIntIntReturnValue2, bool& TempboolVariable, bool& TempboolVariable1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool1, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded1, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat1, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool2, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded2, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat2, struct FScalableFloat& K2NodeSelectDefault, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncNPCGetScalableFloatHotfixValueAsBool3, int& CallFuncNPCGetScalableFloatHotfixValueAsIntRounded3, double& CallFuncNPCGetScalableFloatHotfixValueAsFloat3, bool& CallFuncGreaterDoubleDoubleReturnValue1, class AActor*& CallFuncGetAIAbilityTargetReturnValue, bool& CallFuncArrayContainsReturnValue, class AActor*& CallFuncGetAIAbilityTargetReturnValue1, double& CallFuncRandomFloatReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, int& TempintArrayIndexVariable, bool& CallFuncArrayContainsReturnValue1, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromHitResultReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess1, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncApplyGameplayEffectContainerReturnValue, bool& CallFuncNotPreBoolReturnValue, int& CallFuncArrayAddUniqueReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncArrayContainsReturnValue2, struct FHitResult& CallFuncGetHitResultFromTargetDataReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, int& TempintArrayIndexVariable1, class AActor*& CallFuncArrayGetItem, class AActor*& CallFuncGetAIAbilityTargetReturnValue2, int& CallFuncGetDataCountFromTargetDataReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncArrayContainsReturnValue3, int& TempintVariable1, struct FHitResult& CallFuncGetHitResultFromTargetDataReturnValue1, struct TArray<class AActor*>& CallFuncGetActorsFromTargetDataReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, class AActor*& CallFuncArrayGetItem1, class AFortAthenaVehicle*& K2NodeDynamicCastAsFortAthenaVehicle, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue2, int& CallFuncArrayAddReturnValue, class AFortAthenaVehicle*& K2NodeDynamicCastAsFortAthenaVehicle1, bool& K2NodeDynamicCastbSuccess3, struct FVector& CallFuncNPCGenerateLaunchVelocityWithMinimumAngleLaunchVelocity, class AActor*& CallFuncNPCGenerateLaunchVelocityWithMinimumAngleLaunchActor, bool& CallFuncNPCGenerateLaunchVelocityWithMinimumAngleLaunchingVehicle, struct TScriptInterface<class IFortVehicleInterface>& CallFuncBPGetAllPassengersselfCastInput, struct TArray<class AFortPlayerPawn*>& CallFuncBPGetAllPassengersReturnValue, class AFortPlayerPawn*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue1, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncLessIntIntReturnValue1, bool& CallFuncIsValidReturnValue3, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue, class ACharacter*& K2NodeDynamicCastAsCharacter, bool& K2NodeDynamicCastbSuccess4, int& CallFuncArrayLengthReturnValue2, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncLessEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue3, bool& CallFuncTargetDataHasHitResultReturnValue, int& CallFuncGetDataCountFromTargetDataReturnValue1, bool& CallFuncLessEqualIntIntReturnValue1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityTargetIsWithinAngleThreshold (Has no native function)
	void NPCAbilityTargetIsWithinAngleThreshold(double& AngleThreshold, bool& IsWithinAngle, double& AngleThresholdVar, bool& CallFuncIsValidReturnValue, struct FRotator& CallFuncK2GetActorRotationReturnValue, struct FVector& CallFuncConvRotatorToVectorReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, class AActor*& CallFuncGetAIAbilityTargetReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FVector& CallFuncSubtractVectorVectorReturnValue, double& CallFuncGetAngleBetweenTwoVectorsAngleDegrees, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, struct FString& CallFuncBuildStringDoubleReturnValue, struct FString& CallFuncBuildStringDoubleReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC IsMontageInfoValid (Has no native function)
	void NPCIsMontageInfoValid(struct FFortGameplayAbilityMontageInfo& MontageInfo, bool& IsValid, bool& CallFuncIsValidReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC AbilityDebugMessage (Has no native function)
	void NPCAbilityDebugMessage(struct FString& String, bool& OnlyWhenDebug, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanORReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.NPC SetupAbility (Has no native function)
	void NPCSetupAbility(class AFortPawn*& CallFuncGetActivatingPawnReturnValue, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_4BB5000E4F2C1DAB20E4FFAAA97E1368 (Has no native function)
	void Cancelled4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.Targeted_4BB5000E4F2C1DAB20E4FFAAA97E1368 (Has no native function)
	void Targeted4BB5000E4F2C1DAB20E4FFAAA97E1368(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.Cancelled_13B12ED64A3570FC1E117FAC4E3F7961 (Has no native function)
	void Cancelled13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.Targeted_13B12ED64A3570FC1E117FAC4E3F7961 (Has no native function)
	void Targeted13B12ED64A3570FC1E117FAC4E3F7961(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.BeginDestroyBuildings (Has no native function)
	void BeginDestroyBuildings(struct FGameplayTag& TargetSelectionApplicationTag, bool& DoContinuousTargetSelection); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C.ExecuteUbergraph_GA_NPC_Parent (Has no native function)
	void ExecuteUbergraphGANPCParent(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FGameplayTag& TempstructVariable2, struct FGameplayAbilityTargetDataHandle& TempstructVariable3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData3, struct FGameplayTag& K2NodeCustomEventApplicationTag3, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FGameplayTag& K2NodeCustomEventTargetSelectionApplicationTag, bool& K2NodeCustomEventDoContinuousTargetSelection, int& TempintVariable, int& CallFuncAddIntIntReturnValue1, class UFortAbilityTask_TargetSelectionContinuous*& CallFuncDoTargetSelectionContinuousReturnValue, class UFortAbilityTask_WaitTargetSelection*& CallFuncWaitTargetSelectionReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class AActor*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncGetDataCountFromTargetDataReturnValue, struct TArray<class AActor*>& CallFuncGetActorsFromTargetDataReturnValue, int& CallFuncSubtractIntIntReturnValue, class AActor*& CallFuncArrayGetItem1, bool& CallFuncLessEqualIntIntReturnValue, bool& CallFuncIsValidReturnValue2, int& CallFuncArrayAddReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncGreaterIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};
