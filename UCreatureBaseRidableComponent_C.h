// BlueprintGeneratedClass /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C
// Size: 0xb50
class UCreatureBaseRidableComponent_C : public UControllableRidableComponent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x5b0 (0x8)
	struct FGameplayTagContainer TCreatureIsBeingRidden; // 0x5b8 (0x20)
	class UClass* GECreatureIsBeingRidden; // 0x5d8 (0x8)
	class UClass* GECreatureIsBeingRiddenPassive; // 0x5e0 (0x8)
	bool bDebugDisplay; // 0x5e8 (0x1)
	unsigned char unreflected_5e9[0x7]; // 0x5e9 (0x7) 
	double DebugTickRate; // 0x5f0 (0x8)
	struct FVector DebugServerRiderLocation; // 0x5f8 (0x18)
	double CapsuleRadiusOffset; // 0x610 (0x8)
	double CapsuleHalfHeightOffset; // 0x618 (0x8)
	struct FGameplayTagContainer TRidingSpecialAbility; // 0x620 (0x20)
	class UAnimSequence* IdleAnimAdd; // 0x640 (0x8)
	class UAnimSequence* RunAnimAdd; // 0x648 (0x8)
	class UBlendSpace* TurnBS; // 0x650 (0x8)
	double MinSpeedToRun; // 0x658 (0x8)
	double RunRampIntoSpeed; // 0x660 (0x8)
	double RunRampIntoSpeedADS; // 0x668 (0x8)
	double RunPlayRate; // 0x670 (0x8)
	double RunPlayRateADS; // 0x678 (0x8)
	double SpringAlpha; // 0x680 (0x8)
	double SpringAlphaADS; // 0x688 (0x8)
	double IdleAlpha; // 0x690 (0x8)
	double IdleAlphaADS; // 0x698 (0x8)
	double RunAlpha; // 0x6a0 (0x8)
	double RunAlphaADS; // 0x6a8 (0x8)
	double TurnAlpha; // 0x6b0 (0x8)
	double TurnAlphaADS; // 0x6b8 (0x8)
	class UAnimSequence* ClampAnimPoseLastResort; // 0x6c0 (0x8)
	struct FRotator ClampFootRAdjust; // 0x6c8 (0x18)
	struct FRotator ClampFootLAdjust; // 0x6e0 (0x18)
	double CapsuleRadiusOffsetEmote; // 0x6f8 (0x8)
	double CapsuleHalfHeightOffsetEmote; // 0x700 (0x8)
	struct FVector ClampLocationOffset; // 0x708 (0x18)
	struct FRotator ClampRotationOffset; // 0x720 (0x18)
	struct FVector ClampScaleAdjust; // 0x738 (0x18)
	struct FName RidableSocketName; // 0x750 (0x4)
	unsigned char unreflected_754[0x4]; // 0x754 (0x4) 
	double RidableSocketAlpha; // 0x758 (0x8)
	class UClass* GECooldownOverride; // 0x760 (0x8)
	struct FGameplayTagContainer TCreatureOverrideCooldown; // 0x768 (0x20)
	struct TMap<struct TEnumAsByte<ECollisionChannel>, struct TEnumAsByte<ECollisionResponse>> OriginalCollisionResponseMap; // 0x788 (0x50)
	struct FSoundIndicatorIconPicker RidingSoundIndicatorIconOverride; // 0x7d8 (0x28)
	struct FMulticastInlineDelegate AudioOnJump; // 0x800 (0x10)
	struct FMulticastInlineDelegate AudioOnJumpApex; // 0x810 (0x10)
	unsigned char MovementMode; // 0x820 (0x1)
	bool bFalling; // 0x821 (0x1)
	unsigned char unreflected_822[0x6]; // 0x822 (0x6) 
	struct FScalableFloat RidingAbilityEnableHF; // 0x828 (0x28)
	double JumpAttachGroundHeightMin; // 0x850 (0x8)
	double JumpAttachGroundHeightBuffer; // 0x858 (0x8)
	bool UseAltRidingMessage; // 0x860 (0x1)
	unsigned char unreflected_861[0x7]; // 0x861 (0x7) 
	struct FText RidingInteractionText; // 0x868 (0x18)
	double currentEnergyValue; // 0x880 (0x8)
	class UPlayerRiderComponent_C* PlayerRiderComponentRef; // 0x888 (0x8)
	class ANPC_Pawn_Wildlife_Parent_C* NPCPawnWildlifeRef; // 0x890 (0x8)
	double previousTimeTracked; // 0x898 (0x8)
	double energyTrackingDeltaTime; // 0x8a0 (0x8)
	bool ShouldHaveEnergy; // 0x8a8 (0x1)
	unsigned char unreflected_8a9[0x7]; // 0x8a9 (0x7) 
	double EnergyRateOfDecayStopped; // 0x8b0 (0x8)
	bool allowUpdateEnergyTrackingTick; // 0x8b8 (0x1)
	bool lastBeingRiddenState; // 0x8b9 (0x1)
	unsigned char unreflected_8ba[0x6]; // 0x8ba (0x6) 
	struct FCurveTableRowHandle EnergyRateOfDecayMoving; // 0x8c0 (0x10)
	struct FCurveTableRowHandle EnergyRateOfDecaySprinting; // 0x8d0 (0x10)
	double CurrentEnergyRateOfRecharge; // 0x8e0 (0x8)
	struct FCurveTableRowHandle ExhaustedEnergyRateOfRecharge; // 0x8e8 (0x10)
	double EnergyWarningThreshold; // 0x8f8 (0x8)
	double EnergyCriticalThreshold; // 0x900 (0x8)
	bool energyWarningActive; // 0x908 (0x1)
	bool energyCriticalActive; // 0x909 (0x1)
	unsigned char unreflected_90a[0x6]; // 0x90a (0x6) 
	double minMovementSpeedTreshold; // 0x910 (0x8)
	bool IsJumping; // 0x918 (0x1)
	unsigned char unreflected_919[0x7]; // 0x919 (0x7) 
	double EnergyRegenThreshold; // 0x920 (0x8)
	bool AlwaysRegenWhenNotRidden; // 0x928 (0x1)
	unsigned char unreflected_929[0x7]; // 0x929 (0x7) 
	class UClass* GEEnergyWarning; // 0x930 (0x8)
	class UClass* GEEnergyCritical; // 0x938 (0x8)
	class UClass* GEEnergyDepleted; // 0x940 (0x8)
	struct FGameplayTagContainer TEnergyWarning; // 0x948 (0x20)
	struct FGameplayTagContainer TEnergyCritical; // 0x968 (0x20)
	struct FGameplayTagContainer TEnergyDepleted; // 0x988 (0x20)
	struct FGameplayTagContainer TCannotRideBucket; // 0x9a8 (0x20)
	class UClass* GameplayEffect; // 0x9c8 (0x8)
	struct FGameplayTag SprintingAbilityTag; // 0x9d0 (0x4)
	unsigned char unreflected_9d4[0x4]; // 0x9d4 (0x4) 
	class UClass* GEEatToRefuel; // 0x9d8 (0x8)
	struct FSlateBrush IconBrush; // 0x9e0 (0xc0)
	class UClass* GECreatureSprint; // 0xaa0 (0x8)
	class USoundLibrary* RidingFoleySoundLibrary; // 0xaa8 (0x8)
	struct FGameplayTagContainer TagsPreventSprinting; // 0xab0 (0x20)
	struct FMulticastInlineDelegate RidableUIStart; // 0xad0 (0x10)
	struct FMulticastInlineDelegate RidableUIUpdateEnergy; // 0xae0 (0x10)
	struct FGameplayTag OutOfEnergySoundLibTag; // 0xaf0 (0x4)
	struct FGameplayTag SprintStartSoundLibTag; // 0xaf4 (0x4)
	struct TEnumAsByte<TInteractionType> RidingInteractionType; // 0xaf8 (0x1)
	unsigned char unreflected_af9[0x7]; // 0xaf9 (0x7) 
	double StartInAirTimestamp; // 0xb00 (0x8)
	struct FTimerHandle* RetryJumpExitTimerHandle; // 0xb08 (0x8)
	struct FGameplayTag MountLandedCueTag; // 0xb10 (0x4)
	unsigned char unreflected_b14[0x4]; // 0xb14 (0x4) 
	class UClass* GEBlockCreatureAttackOnDismount; // 0xb18 (0x8)
	bool EnergyRegenActive; // 0xb20 (0x1)
	unsigned char unreflected_b21[0x7]; // 0xb21 (0x7) 
	struct FGameplayTagContainer BlockPettingTagContainer; // 0xb28 (0x20)
	bool infiniteStaminaBuffEnabled; // 0xb48 (0x1)
	unsigned char unreflected_b49[0x3]; // 0xb49 (0x3) 
	struct FGameplayTag InfiniteStaminaEffectGameplayCueTag; // 0xb4c (0x4)

	/* Functions */

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingInfoFromTarget (Has no native function)
	void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetInfiniteStaminaBuff (Has no native function)
	void SetInfiniteStaminaBuff(bool& Enabled, class AActor*& CallFuncGetOwnerReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, class AActor*& CallFuncGetOwnerReturnValue1); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanBePet (Has no native function)
	bool CanBePet(class URiderComponent*& Rider); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanJumpExit (Has no native function)
	void CanJumpExit(bool& CanJumpExit, struct FScalableFloat& JumpExitDurationThreshold, bool& CallFuncIsValidReturnValue, float& CallFuncGetValueAtLevelReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsFallingReturnValue, double& CallFuncGetTimeSecondsReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, double& CallFuncGreaterDoubleDoubleBImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, float& CallFuncK2SetTimerTimeImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateLootAnimalGlow (Has no native function)
	void UpdateLootAnimalGlow(double& Scale, bool& TempboolVariable, struct FGameplayTagContainer& CallFuncMakeGameplayTagContainerFromTagReturnValue, class AActor*& CallFuncGetOwnerReturnValue, struct TArray<class UNiagaraComponent*>& CallFuncGetComponentsByTagReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess, class UNiagaraComponent*& CallFuncArrayGetItem, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, float& CallFuncSetFloatParameterParamImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_currentEnergyValue (Has no native function)
	void OnRepcurrentEnergyValue(bool& CallFuncGreaterDoubleDoubleReturnValue); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Propagate Immunity Fall Damage (Has no native function)
	void PropagateImmunityFallDamage(struct FScalableFloat& CanProbagateImmunityFallDanage, class AActor*& RiderActor, struct TArray<class UClass*>& GEImmunityFallDamage, struct TArray<class UClass*>& K2NodeMakeArrayArray, bool& CallFuncGetValueAsBoolReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue, class AActor*& CallFuncGetOwnerReturnValue1, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncBooleanORReturnValue, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CanRiderPlayEmote (Has no native function)
	bool CanRiderPlayEmote(class URiderComponent*& Rider); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleEnemyFoleySoundLibrary (Has no native function)
	void HandleEnemyFoleySoundLibrary(class UActorComponent*& Rider, bool& bIsRiding, class USoundLibrarySubsystem*& CallFuncGetWorldSubsystemReturnValue, double& CallFuncSelectFloatReturnValue, class AActor*& CallFuncGetOwnerReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, struct TEnumAsByte<EFortTeamAffiliation>& CallFuncGetTeamAffiliationForActorToLocalPlayerReturnValue, bool& K2NodeSwitchEnumCmpSuccess, float& K2NodeVariableSetMaxFootstepDistanceImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnMovementModeChanged (Has no native function)
	void OnMovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsSurfaceSwimmingReturnValue, bool& CallFuncIsFallingReturnValue, double& CallFuncGetTimeSecondsReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.IsSwimming (Has no native function)
	void IsSwimming(bool& IsSwimming, class AActor*& CallFuncGetOwnerReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsSurfaceSwimmingReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.StopSprinting (Has no native function)
	void StopSprinting(bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue2); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RemoveGEByTag (Has no native function)
	void RemoveGEByTag(struct FGameplayTagContainer& Tags, class AActor*& CallFuncGetOwnerReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyGEToSelf (Has no native function)
	void ApplyGEToSelf(class UClass*& GameplayEffectClass, bool& IsValidClass, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidClassReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToSelfReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.KickRiderOffSelf (Has no native function)
	void KickRiderOffSelf(class AActor*& CallFuncGetOwnerReturnValue, class AActor*& CallFuncGetOwnerReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncToggleRidingbChangedRiding); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.DetermineRateOfChange (Has no native function)
	void DetermineRateOfChange(double& rateOfChange, bool& CallFuncIsSprintingReturnValue, float& CallFuncEvaluateCurveTableRowOutXY, bool& CallFuncEvaluateCurveTableRowReturnValue, float& CallFuncEvaluateCurveTableRowOutXY1, bool& CallFuncEvaluateCurveTableRowReturnValue1, bool& CallFuncIsBeingRiddenReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetLastUpdateVelocityReturnValue, double& CallFuncVSizeReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, double& K2NodeFunctionResultRateOfChangeImplicitCast, double& K2NodeFunctionResultRateOfChangeImplicitCast1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CommitEnergyCosts (Has no native function)
	void CommitEnergyCosts(bool& RequireAllEnergy, double& EnergyCost, bool& Success, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.TestThreshold (Has no native function)
	void TestThreshold(bool& isDecaying, double& CurrentValue, double& testTreshold, bool& PreviousState, bool& crossedThreshold, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.SetWildlifeHealth (Has no native function)
	void SetWildlifeHealth(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, float& CallFuncGetHealthReturnValue, float& CallFuncGetMaxHealthReturnValue, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncDivideDoubleDoubleAImplicitCast, double& CallFuncDivideDoubleDoubleBImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateValue (Has no native function)
	void UpdateValue(double& TargetValue, double& rateOfChange, double& DeltaTime, double& updatedValue, bool& EnergyDepleted, double& CallFuncMultiplyDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRiding (Has no native function)
	void ToggleRiding(class AActor*& PlayerPawn, class AActor*& Target, bool& ShouldRide, bool& bChangedRiding, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess, class URiderComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, bool& CallFuncStopRidingActorReturnValue, bool& CallFuncStartRidingActorReturnValue, class UControllingRiderComponent*& K2NodeDynamicCastAsControllingRiderComponent, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue, bool& TempboolVariable, bool& CallFuncNotPreBoolReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RestoreCollisionResponses (Has no native function)
	void RestoreCollisionResponses(int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, struct TArray<struct TEnumAsByte<ECollisionChannel>>& CallFuncMapKeysKeys, int& CallFuncArrayLengthReturnValue, struct TEnumAsByte<ECollisionChannel>& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, struct TArray<struct TEnumAsByte<ECollisionChannel>>& K2NodeMakeArrayArray, struct TEnumAsByte<ECollisionResponse>& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ApplyCollisionResponse (Has no native function)
	void ApplyCollisionResponse(struct TArray<struct TEnumAsByte<ECollisionChannel>>& Channels, struct TEnumAsByte<ECollisionResponse>& Response, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, struct TEnumAsByte<ECollisionChannel>& CallFuncArrayGetItem, int& CallFuncAddIntIntReturnValue, int& CallFuncArrayLengthReturnValue, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncIsValidReturnValue, class UCapsuleComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue1, struct TEnumAsByte<ECollisionResponse>& CallFuncGetCollisionResponseToChannelReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldCameraFocusOnRidable (Has no native function)
	bool ShouldCameraFocusOnRidable(class URiderComponent*& Rider); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateAnimInputBool (Has no native function)
	void UpdateAnimInputBool(class AFortPawn*& FortPawn, bool& IsBeingRidden, class UFortAnimInputEvent_Bool*& CallFuncCreateAnimInputEventBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderCapsuleSize (Has no native function)
	void GetRiderCapsuleSize(class URiderComponent*& Rider, double& RiderCapsuleRadius, double& RiderCapsuleHH, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue1, class UCapsuleComponent*& CallFuncGetComponentByClassReturnValue, float& CallFuncGetUnscaledCapsuleSizeOutRadius, float& CallFuncGetUnscaledCapsuleSizeOutHalfHeight, double& K2NodeFunctionResultRiderCapsuleRadiusImplicitCast, double& K2NodeFunctionResultRiderCapsuleHHImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingEmoteCapsuleSize (Has no native function)
	void GetRidingEmoteCapsuleSize(class URiderComponent*& Rider, float& OriginalRadius, float& OriginalHalfHeight, float& OutRadius, float& OutHalfHeight, float& CallFuncGetRidingCapsuleSizeOutRadius, float& CallFuncGetRidingCapsuleSizeOutHalfHeight, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, float& K2NodeFunctionResultOutRadiusImplicitCast, float& K2NodeFunctionResultOutHalfHeightImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast1); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRidingCapsuleSize (Has no native function)
	void GetRidingCapsuleSize(class URiderComponent*& Rider, float& OriginalRadius, float& OriginalHalfHeight, float& OutRadius, float& OutHalfHeight, double& CallFuncGetRiderCapsuleSizeRiderCapsuleRadius, double& CallFuncGetRiderCapsuleSizeRiderCapsuleHH, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncFMaxReturnValue, double& CallFuncAddDoubleDoubleReturnValue1, double& CallFuncFMaxReturnValue1, double& CallFuncAddDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast1, float& K2NodeFunctionResultOutRadiusImplicitCast, float& K2NodeFunctionResultOutHalfHeightImplicitCast); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnRep_IdleAnim_Add (Has no native function)
	void OnRepIdleAnimAdd(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ShouldSetAsViewTarget (Has no native function)
	bool ShouldSetAsViewTarget(class URiderComponent*& Rider); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.GetRiderLocation (Has no native function)
	void GetRiderLocation(struct FVector& Location, class AActor*& CallFuncGetOwnerReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_AD51144144164FD235EE5BA4F6E87456 (Has no native function)
	void RemovedAD51144144164FD235EE5BA4F6E87456(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Added_FBD936634BCC61A726DA279226E2F4BE (Has no native function)
	void AddedFBD936634BCC61A726DA279226E2F4BE(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Removed_C4C6E29B4217C014B9DE0E80B7134D6E (Has no native function)
	void RemovedC4C6E29B4217C014B9DE0E80B7134D6E(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ToggleRidingAlternative (Has no native function)
	void ToggleRidingAlternative(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStartedRiding (Has no native function)
	void HandleRiderStartedRiding(class URiderComponent*& Rider); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleRiderStoppedRiding (Has no native function)
	void HandleRiderStoppedRiding(class URiderComponent*& Rider); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateDebug (Has no native function)
	void UpdateDebug(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityHeld (Has no native function)
	void HandleAbilityHeld(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStarted (Has no native function)
	void HandleAbilityStarted(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleAbilityStopped (Has no native function)
	void HandleAbilityStopped(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleJumpStarted (Has no native function)
	void HandleJumpStarted(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumping (Has no native function)
	void OnJumping(double& JumpPitchInterpSpeed); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnJumpingApex (Has no native function)
	void OnJumpingApex(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.NPCPawnInteractWithDispatcher_Event_0 (Has no native function)
	void NPCPawnInteractWithDispatcherEvent0(class AActor*& AIPawn, class AFortPlayerPawn*& InteractingPlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStart (Has no native function)
	void EnergyTrackingStart(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.EnergyTrackingStop (Has no native function)
	void EnergyTrackingStop(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UpdateEnergy (Has no native function)
	void UpdateEnergy(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ConvertedDispatcher_Event_0 (Has no native function)
	void ConvertedDispatcherEvent0(bool& Converted, class AFortPawn*& InstigatorPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnPawnHealthChanged_Event_0 (Has no native function)
	void OnPawnHealthChangedEvent0(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.UseEnergyAmountServer (Has no native function)
	void UseEnergyAmountServer(double& EnergyCost); // (Net | NetServer | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.HandleCancelSprint (Has no native function)
	void HandleCancelSprint(bool& bAbilityInputHeld, bool& bForceCancel); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.CheatSetStaminaPercent (Has no native function)
	void CheatSetStaminaPercent(float& StaminaPercent); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyUpdate (Has no native function)
	void OnEnergyUpdate(double& Energy, bool& bWarningActive); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEnergyDepletedClient (Has no native function)
	void OnEnergyDepletedClient(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnSprintStarted (Has no native function)
	void OnSprintStarted(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.OnEatToRefuel (Has no native function)
	void OnEatToRefuel(double& EnergyCost); // (Net | NetServer | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ReTryJumpExit (Has no native function)
	void ReTryJumpExit(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ManualEnergyDepleted (Has no native function)
	void ManualEnergyDepleted(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Stopped Riding (Has no native function)
	void CheckRegenonStoppedRiding(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Check Regen on Started Riding (Has no native function)
	void CheckRegenonStartedRiding(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Activate Regen (Has no native function)
	void ActivateRegen(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.Deactivate Regen (Has no native function)
	void DeactivateRegen(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.ExecuteUbergraph_CreatureBaseRidableComponent (Has no native function)
	void ExecuteUbergraphCreatureBaseRidableComponent(int& EntryPoint, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, bool& CallFuncEqualEqualDoubleDoubleReturnValue, bool& K2NodeSwitchEnumCmpSuccess, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncIsValidReturnValue2, struct FVector& CallFuncGetRiderLocationLocation, bool& CallFuncIsServerReturnValue, bool& CallFuncVectorIsZeroReturnValue, class AActor*& CallFuncGetOwnerReturnValue1, bool& CallFuncIsValidReturnValue3, bool& CallFuncHasAuthorityReturnValue1, class AActor*& CallFuncGetOwnerReturnValue2, class AActor*& CallFuncGetOwnerReturnValue3, bool& CallFuncIsValidReturnValue4, bool& CallFuncIsValidReturnValue5, bool& CallFuncHasAuthorityReturnValue2, bool& CallFuncHasAuthorityReturnValue3, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncNotEqualNameNameReturnValue, class AActor*& CallFuncGetOwnerReturnValue4, bool& CallFuncIsValidClassReturnValue, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess, struct TArray<struct TEnumAsByte<ECollisionChannel>>& K2NodeMakeArrayArray, class AActor*& CallFuncGetOwnerReturnValue5, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess1, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess2, double& K2NodeCustomEventJumpPitchInterpSpeed, class AActor*& CallFuncGetOwnerReturnValue6, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn1, bool& K2NodeDynamicCastbSuccess3, class AActor*& CallFuncGetOwnerReturnValue7, bool& CallFuncIsDedicatedServerReturnValue1, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn2, bool& K2NodeDynamicCastbSuccess4, class AActor*& K2NodeCustomEventAIPawn, class AFortPlayerPawn*& K2NodeCustomEventInteractingPlayerPawn, class AActor*& CallFuncGetOwnerReturnValue8, bool& CallFuncToggleRidingbChangedRiding, class ANPC_Pawn_Wildlife_Parent_C*& K2NodeDynamicCastAsNPCPawnWildlifeParent, bool& K2NodeDynamicCastbSuccess5, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn3, bool& K2NodeDynamicCastbSuccess6, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, bool& K2NodeCustomEventConverted, class AFortPawn*& K2NodeCustomEventInstigatorPawn, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, double& CallFuncGetTimeSecondsReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, bool& CallFuncIsBeingRiddenReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncIsValidReturnValue6, bool& CallFuncIsBeingRiddenReturnValue1, bool& CallFuncTestThresholdcrossedThreshold, bool& CallFuncIsBeingRiddenReturnValue2, bool& CallFuncIsBeingRiddenReturnValue3, bool& CallFuncTestThresholdcrossedThreshold1, bool& CallFuncIsBeingRiddenReturnValue4, double& CallFuncGetTimeSecondsReturnValue1, class AActor*& CallFuncGetOwnerReturnValue9, bool& CallFuncIsValidReturnValue7, bool& CallFuncHasAuthorityReturnValue4, double& K2NodeCustomEventEnergyCost1, double& CallFuncSubtractDoubleDoubleReturnValue1, bool& CallFuncLessDoubleDoubleReturnValue, double& CallFuncDetermineRateOfChangeRateOfChange, class URiderComponent*& K2NodeEventRider, bool& CallFuncNotEqualDoubleDoubleReturnValue, double& CallFuncUpdateValueupdatedValue, bool& CallFuncUpdateValueenergyDepleted, bool& TempboolHasBeenInitdVariable, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue8, bool& CallFuncIsValidReturnValue9, class URiderComponent*& K2NodeEventRider1, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncApplyGEToSelfisValidClass, bool& CallFuncApplyGEToSelfisValidClass1, bool& CallFuncApplyGEToSelfisValidClass2, bool& CallFuncIsValidReturnValue10, class AActor*& CallFuncGetOwnerReturnValue10, bool& CallFuncIsValidReturnValue11, class AFortPawn*& K2NodeDynamicCastAsFortPawn2, bool& K2NodeDynamicCastbSuccess7, class AActor*& CallFuncGetOwnerReturnValue11, bool& TempboolIsClosedVariable, bool& K2NodeEventbAbilityInputHeld, bool& K2NodeEventbForceCancel, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsValidReturnValue12, bool& CallFuncIsSwimmingIsSwimming, bool& CallFuncIsValidReturnValue13, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, bool& CallFuncLessEqualDoubleDoubleReturnValue, class AActor*& CallFuncGetOwnerReturnValue12, class ANPC_Pawn_Parent_C*& K2NodeDynamicCastAsNPCPawnParent, bool& K2NodeDynamicCastbSuccess8, class ANPC_Pawn_Parent_C*& K2NodeDynamicCastAsNPCPawnParent1, bool& K2NodeDynamicCastbSuccess9, bool& CallFuncNPCUpdateInteractEnabledInteract, bool& CallFuncNPCCanBeInteractedWithCanInteract, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncNPCUpdateInteractEnabledInteract1, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToSelfReturnValue, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue1, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult1, float& CallFuncEvaluateCurveTableRowOutXY1, bool& CallFuncIsBeingRiddenReturnValue5, bool& K2NodeSwitchEnumCmpSuccess1, bool& CallFuncNotEqualDoubleDoubleReturnValue1, class UPlayerRiderComponent_C*& K2NodeDynamicCastAsPlayerRiderComponent, bool& K2NodeDynamicCastbSuccess10, class AActor*& CallFuncGetOwnerReturnValue13, class UAbilityAsync_WaitGameplayTagRemoved*& CallFuncWaitGameplayTagRemoveFromActorReturnValue, bool& CallFuncIsValidReturnValue14, bool& CallFuncIsSprintToggleableReturnValue, bool& CallFuncIsSprintToggleableReturnValue1, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncIsValidReturnValue15, bool& CallFuncIsSprintToggleableReturnValue2, bool& CallFuncNotPreBoolReturnValue2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, bool& CallFuncBooleanANDReturnValue2, bool& CallFuncIsSprintToggleableReturnValue3, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanORReturnValue1, float& K2NodeEventStaminaPercent, double& K2NodeCustomEventEnergy, bool& K2NodeCustomEventbWarningActive, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, bool& CallFuncGreaterDoubleDoubleReturnValue, double& K2NodeCustomEventEnergyCost, bool& CallFuncIsValidReturnValue16, class AActor*& CallFuncGetOwnerReturnValue14, bool& CallFuncIsValidReturnValue17, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess11, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FCurveTableRowHandle& K2NodeMakeStructCurveTableRowHandle, struct FCurveTableRowHandle& K2NodeMakeStructCurveTableRowHandle1, struct FScalableFloat& K2NodeMakeStructScalableFloat, struct FScalableFloat& K2NodeMakeStructScalableFloat1, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, bool& CallFuncCanJumpExitCanJumpExit, bool& CallFuncIsValidReturnValue18, bool& CallFuncIsValidReturnValue19, bool& CallFuncIsFallingReturnValue, bool& CallFuncCanStartSprintingReturnValue, bool& CallFuncCanStartSprintingReturnValue1, bool& CallFuncApplyGEToSelfisValidClass3, bool& CallFuncLessEqualDoubleDoubleReturnValue1, bool& CallFuncIsValidReturnValue20, float& CallFuncEvaluateCurveTableRowOutXY2, bool& CallFuncEvaluateCurveTableRowReturnValue, bool& CallFuncBooleanANDReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue4, bool& CallFuncGreaterDoubleDoubleReturnValue1, bool& CallFuncIsValidReturnValue21, class AActor*& CallFuncGetOwnerReturnValue15, class UAbilityAsync_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddToActorReturnValue, class UAbilityAsync_WaitGameplayTagRemoved*& CallFuncWaitGameplayTagRemoveFromActorReturnValue1, bool& CallFuncIsValidReturnValue22, bool& CallFuncIsValidReturnValue23, bool& TempboolVariable, class UClass*& K2NodeSelectDefault, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToSelfReturnValue1, bool& CallFuncIsValidReturnValue24, struct FVector2D& CallFuncConvVectorToVector2DReturnValue, double& CallFuncVSize2DReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue2, double& CallFuncEqualEqualDoubleDoubleAImplicitCast, double& K2NodeVariableSetcurrentEnergyValueImplicitCast, double& CallFuncUpdateLootAnimalGlowScaleImplicitCast, double& CallFuncUpdateLootAnimalGlowScaleImplicitCast1, double& K2NodeVariableSetCurrentEnergyRateOfRechargeImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIUpdateEnergy__DelegateSignature (Has no native function)
	void RidableUIUpdateEnergyDelegateSignature(double& Energy, bool& bIsResting); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.RidableUIStart__DelegateSignature (Has no native function)
	void RidableUIStartDelegateSignature(struct FText& Name, struct FSlateBrush& Icon); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJumpApex__DelegateSignature (Has no native function)
	void AudioOnJumpApexDelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/CreatureBaseRidableComponent.CreatureBaseRidableComponent_C.AudioOnJump__DelegateSignature (Has no native function)
	void AudioOnJumpDelegateSignature(double& JumpPitchInterpSpeed); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

