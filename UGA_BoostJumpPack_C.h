// BlueprintGeneratedClass /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C
// Size: 0xd74
class UGA_BoostJumpPack_C : public UFortGameplayAbility_JumpBoostPack
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb40 (0x8)
	double JumpMultiple; // 0xb48 (0x8)
	struct FVector BasicJumpZAdjust; // 0xb50 (0x18)
	struct FVector FinalJumpHeight; // 0xb68 (0x18)
	struct FGameplayEventData EventTriggerData; // 0xb80 (0xb0)
	bool bJumpButtonHeld; // 0xc30 (0x1)
	bool bHoverButtonHeld; // 0xc31 (0x1)
	bool bAtApex; // 0xc32 (0x1)
	unsigned char unreflected_c33[0x1]; // 0xc33 (0x1) 
	struct FActiveGameplayEffectHandle* JetpackEffectHandle; // 0xc34 (0x8)
	unsigned char unreflected_c3c[0x4]; // 0xc3c (0x4) 
	class AFortPlayerPawn* FortPlayerPawn; // 0xc40 (0x8)
	double FuelFudge; // 0xc48 (0x8)
	struct FActiveGameplayEffectHandle* RegenEffectHandle; // 0xc50 (0x8)
	bool bRegenEffectActive; // 0xc58 (0x1)
	unsigned char unreflected_c59[0x7]; // 0xc59 (0x7) 
	struct FGameplayTagContainer BoostExecuteTags; // 0xc60 (0x20)
	int HoverButtonHeldCount; // 0xc80 (0x4)
	unsigned char unreflected_c84[0x4]; // 0xc84 (0x4) 
	struct FGameplayTagContainer HoverExecuteTags; // 0xc88 (0x20)
	int JumpButtonHeldCount; // 0xca8 (0x4)
	unsigned char unreflected_cac[0x4]; // 0xcac (0x4) 
	struct FGameplayTagContainer HoverReleaseTags; // 0xcb0 (0x20)
	double TimeStartedHovering; // 0xcd0 (0x8)
	double TimeStartedFalling; // 0xcd8 (0x8)
	double EndHoverDelay; // 0xce0 (0x8)
	double EndFallingDelay; // 0xce8 (0x8)
	struct FGameplayTagContainer BoostReleaseTags; // 0xcf0 (0x20)
	bool bHasDied; // 0xd10 (0x1)
	unsigned char unreflected_d11[0x3]; // 0xd11 (0x3) 
	struct FGameplayTag BoostCue; // 0xd14 (0x4)
	struct FGameplayTag BoostJumpPackCue; // 0xd18 (0x4)
	unsigned char unreflected_d1c[0x4]; // 0xd1c (0x4) 
	class UClass* JetpackInUseEffect; // 0xd20 (0x8)
	bool TriggeredByJump; // 0xd28 (0x1)
	unsigned char unreflected_d29[0x7]; // 0xd29 (0x7) 
	struct FGameplayTagContainer BlockExecuteTags; // 0xd30 (0x20)
	class UClass* JetpackInUseEffectAlt; // 0xd50 (0x8)
	struct FGameplayTag HidingPropTag; // 0xd58 (0x4)
	struct FGameplayTag ZiplineTag; // 0xd5c (0x4)
	struct FGameplayTag GliderRedeployTag; // 0xd60 (0x4)
	struct FGameplayTag InitialBoostCue; // 0xd64 (0x4)
	bool bFirstBoost; // 0xd68 (0x1)
	unsigned char unreflected_d69[0x3]; // 0xd69 (0x3) 
	struct FGameplayTag BoostEndCue; // 0xd6c (0x4)
	struct FGameplayTag BoostOutOfFuelEndCue; // 0xd70 (0x4)

	/* Functions */

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.GetReserveFuel (Has no native function)
	double GetReserveFuel(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.HandleBoostEnded (Has no native function)
	void HandleBoostEnded(bool& TempboolVariable, double& CallFuncGetFuelFuel, bool& CallFuncLessEqualDoubleDoubleReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayTag& K2NodeSelectDefault); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.HandleJetpackInitialBoost (Has no native function)
	void HandleJetpackInitialBoost(struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.NotInHidingSpot (Has no native function)
	bool NotInHidingSpot(); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.K2_CanActivateAbility (Has no native function)
	bool K2CanActivateAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer& RelevantTags); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Handle Jetpack Equipped (Has no native function)
	void HandleJetpackEquipped(double& CallFuncGetMaxFuelMaxFuel, double& CallFuncGetFuelFuel, double& CallFuncDivideDoubleDoubleReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncMatchesTagReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Reasons To Reset on Transition (Has no native function)
	bool ReasonsToResetonTransition(struct FGameplayTag& tag); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Get Player Pawn (Has no native function)
	class AFortPlayerPawn* GetPlayerPawn(class UObject*& Object); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.IsCurrentlyDead (Has no native function)
	bool IsCurrentlyDead(struct FGameplayTag& TagOne); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Falling Movement (Has no native function)
	void ReengageFallingMovement(bool& CallFuncIsFallingReturnValue, bool& CallFuncNotPreBoolReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Reengage Hovering Movement (Has no native function)
	void ReengageHoveringMovement(bool& CallFuncIsFallingReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.SavePlayerPawn (Has no native function)
	void SavePlayerPawn(struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncNotEqualObjectObjectReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.OnAbilityCanceled (Has no native function)
	void OnAbilityCanceled(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsEmpty (Has no native function)
	void OnFuelIsEmpty(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.OnFuelIsFull (Has no native function)
	void OnFuelIsFull(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Reset Toggle Input State (Has no native function)
	void ResetToggleInputState(class AController*& CallFuncGetControllerReturnValue, class AFortPlayerControllerZone*& K2NodeDynamicCastAsFortPlayerControllerZone, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessTriggerData (Has no native function)
	void ProcessTriggerData(struct FGameplayTag& TagOne, bool& CallFuncIsSurfaceSwimmingReturnValue, bool& CallFuncNotPreBoolReturnValue, int& CallFuncSubtractIntIntReturnValue, int& CallFuncMaxReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncMatchesAnyTagsReturnValue, bool& CallFuncMatchesAnyTagsReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncIsSwimmingReturnValue, bool& CallFuncIsMovingOnGroundReturnValue, bool& CallFuncNotPreBoolReturnValue2, bool& CallFuncNotPreBoolReturnValue3, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncMatchesAnyTagsReturnValue2, bool& CallFuncBooleanANDReturnValue2, bool& CallFuncBooleanANDReturnValue3, int& CallFuncSubtractIntIntReturnValue1, int& CallFuncMaxReturnValue1, int& CallFuncAddIntIntReturnValue1, bool& CallFuncMatchesAnyTagsReturnValue3, bool& CallFuncBooleanANDReturnValue4); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Stop Regen Effect (Has no native function)
	void StopRegenEffect(class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, bool& CallFuncHasAuthorityReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Start Regen Effect (Has no native function)
	void StartRegenEffect(class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, bool& CallFuncHasAuthorityReturnValue, bool& CallFuncNotPreBoolReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Stopping Regen Effect (Has no native function)
	void ConsiderStoppingRegenEffect(double& CallFuncGetReserveFuelReturnValue, double& CallFuncGetMaxFuelMaxFuel, bool& CallFuncLessEqualDoubleDoubleReturnValue, double& CallFuncGetFuelFuel, double& CallFuncDivideDoubleDoubleReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncBooleanORReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Consider Starting Regen Effect (Has no native function)
	void ConsiderStartingRegenEffect(double& CallFuncGetMaxFuelMaxFuel, double& CallFuncGetFuelFuel, double& CallFuncDivideDoubleDoubleReturnValue, bool& CallFuncNotEqualByteByteReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, bool& CallFuncNotEqualByteByteReturnValue1, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.IsBoostAllowed (Has no native function)
	bool IsBoostAllowed(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ShouldAbilityRespondToEvent (Has no native function)
	bool K2ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayEventData& Payload); // (Event | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.GetMaxFuel (Has no native function)
	void GetMaxFuel(double& MaxFuel, bool& TempboolVariable, double& TemprealVariable, bool& CallFuncGetFloatAttributebSuccessfullyFoundAttribute, float& CallFuncGetFloatAttributeReturnValue, double& K2NodeSelectDefault, double& K2NodeSelectOption1ImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.GetFuel (Has no native function)
	void GetFuel(double& Fuel, bool& TempboolVariable, double& TemprealVariable, bool& CallFuncGetFloatAttributebSuccessfullyFoundAttribute, float& CallFuncGetFloatAttributeReturnValue, double& K2NodeSelectDefault, double& K2NodeSelectOption1ImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Setup PlayerPawn (Has no native function)
	void SetupPlayerPawn(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.IsUsingJetpackEffectActive (Has no native function)
	bool IsUsingJetpackEffectActive(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.HandleCurrentBoostStateChanged (Has no native function)
	void HandleCurrentBoostStateChanged(enum EJumpBoostPackState& PreviousState, enum EJumpBoostPackState& CurrentState, bool& K2NodeSwitchEnumCmpSuccess, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, bool& CallFuncIsUsingJetpackEffectActiveReturnValue, bool& CallFuncIsUsingJetpackEffectActiveReturnValue1, bool& CallFuncNotPreBoolReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.SetCurrentBoostState (Has no native function)
	void SetCurrentBoostState(enum EJumpBoostPackState& NewState, enum EJumpBoostPackState& PreviousState, struct TEnumAsByte<Enum_BoostJumpStates>& PreviewBoostState); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.PotentiallyEndHovering (Has no native function)
	void PotentiallyEndHovering(bool& bForceEndHovering, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncBooleanORReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Setup Notify at Apex (Has no native function)
	void SetupNotifyatApex(bool& bNotifyApex, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, class UFortMovementComp_CharacterAthena*& K2NodeDynamicCastAsFortMovementCompCharacterAthena, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.HandleIdle (Has no native function)
	void HandleIdle(bool& bForceEndHovering); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.HandleFalling (Has no native function)
	void HandleFalling(double& CallFuncGetTimeSecondsReturnValue, double& CallFuncGetTimeSecondsReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncFMaxReturnValue, double& CallFuncGetTimeSecondsReturnValue2, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue2, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.HandleHovering (Has no native function)
	void HandleHovering(double& CallFuncGetTimeSecondsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncGetTimeSecondsReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue2, double& CallFuncFMaxReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncGetTimeSecondsReturnValue2, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.ResetTransitionVariables (Has no native function)
	void ResetTransitionVariables(bool& bForceEndHovering); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromFalling (Has no native function)
	void TransitionFromFalling(struct TEnumAsByte<Enum_BoostJumpStates>& TargetBoostState, bool& CallFuncNotPreBoolReturnValue, double& CallFuncGetFuelFuel, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromHovering (Has no native function)
	void TransitionFromHovering(struct TEnumAsByte<Enum_BoostJumpStates>& TargetBoostState, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotPreBoolReturnValue, double& CallFuncGetFuelFuel, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromBoost (Has no native function)
	void TransitionFromBoost(struct TEnumAsByte<Enum_BoostJumpStates>& TargetBoostState, bool& CallFuncNotInHidingSpotReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncNotPreBoolReturnValue, double& CallFuncGetFuelFuel, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanANDReturnValue2); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.TransitionFromIdle (Has no native function)
	void TransitionFromIdle(struct TEnumAsByte<Enum_BoostJumpStates>& TargetBoostState, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsBoostAllowedReturnValue, double& CallFuncGetFuelFuel, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncGetFuelFuel1, double& CallFuncGetMaxFuelMaxFuel, double& CallFuncDivideDoubleDoubleReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanANDReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.ProcessAbilityStateMachine (Has no native function)
	void ProcessAbilityStateMachine(bool& K2NodeSwitchEnumCmpSuccess, struct TEnumAsByte<Enum_BoostJumpStates>& CallFuncDetermineStateToTransitionToBoostState, bool& K2NodeSwitchEnumCmpSuccess1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.DetermineStateToTransitionTo (Has no native function)
	void DetermineStateToTransitionTo(struct TEnumAsByte<Enum_BoostJumpStates>& BoostState, bool& K2NodeSwitchEnumCmpSuccess, struct TEnumAsByte<Enum_BoostJumpStates>& CallFuncTransitionFromFallingTargetBoostState, struct TEnumAsByte<Enum_BoostJumpStates>& CallFuncTransitionFromHoveringTargetBoostState, struct TEnumAsByte<Enum_BoostJumpStates>& CallFuncTransitionFromBoostTargetBoostState, struct TEnumAsByte<Enum_BoostJumpStates>& CallFuncTransitionFromIdleTargetBoostState); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.SetupTransitionVariables (Has no native function)
	void SetupTransitionVariables(struct FGameplayTag& InTag, bool& CallFuncReasonsToResetonTransitionReturnValue, bool& CallFuncIsCurrentlyDeadReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncGreaterIntIntReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.HandleBoostJump (Has no native function)
	void HandleBoostJump(struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerPawn*& CallFuncSetJumpHeightPawnOut, struct FVector& CallFuncSetJumpHeightJumpHeight); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.SetJumpHeight (Has no native function)
	void SetJumpHeight(class AFortPlayerPawn*& Pawn, class AFortPlayerPawn*& PawnOut, struct FVector& JumpHeight, struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Added_A54C58044C5CE8F3DABC60A214FC45E0 (Has no native function)
	void AddedA54C58044C5CE8F3DABC60A214FC45E0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Added_B611282348ECFDA3CD120D87734E357C (Has no native function)
	void AddedB611282348ECFDA3CD120D87734E357C(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Added_D3A68EA84FC920CD9E2949BE05D3A5AC (Has no native function)
	void AddedD3A68EA84FC920CD9E2949BE05D3A5AC(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Added_F6D39ED5491065B2594D37A44C404CA7 (Has no native function)
	void AddedF6D39ED5491065B2594D37A44C404CA7(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.OnPawnLanded (Has no native function)
	void OnPawnLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.On Reached Jump Apex (Has no native function)
	void OnReachedJumpApex(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.OnCurrentStateChanged (Has no native function)
	void OnCurrentStateChanged(enum EJumpBoostPackState& InPreviousState, enum EJumpBoostPackState& InCurrentState); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.Delay_ProcessAbilityStateMachine (Has no native function)
	void DelayProcessAbilityStateMachine(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.OnSavedPawnChanged  (Has no native function)
	void OnSavedPawnChanged(class AFortPlayerPawn*& PreviousPawn, class AFortPlayerPawn*& NewPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.OnEnterVehicle (Has no native function)
	void OnEnterVehicle(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C.ExecuteUbergraph_GA_BoostJumpPack (Has no native function)
	void ExecuteUbergraphGABoostJumpPack(int& EntryPoint, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, bool& CallFuncIsValidReturnValue, struct FHitResult& K2NodeCustomEventHit, bool& CallFuncEqualEqualGameplayTagReturnValue, bool& CallFuncEqualEqualGameplayTagReturnValue1, bool& CallFuncEqualEqualGameplayTagReturnValue2, bool& CallFuncBooleanORReturnValue, bool& CallFuncEqualEqualGameplayTagReturnValue3, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayEventData& K2NodeEventEventData, enum EJumpBoostPackState& K2NodeEventInPreviousState, enum EJumpBoostPackState& K2NodeEventInCurrentState, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncEqualEqualByteByteReturnValue, class AFortPlayerPawn*& K2NodeCustomEventPreviousPawn, class AFortPlayerPawn*& K2NodeCustomEventNewPawn, class AController*& CallFuncGetControllerReturnValue, bool& CallFuncIsValidReturnValue1, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController, bool& K2NodeDynamicCastbSuccess, class AController*& CallFuncGetControllerReturnValue1, bool& CallFuncIsValidReturnValue2, class AFortPlayerController*& K2NodeDynamicCastAsFortPlayerController1, bool& K2NodeDynamicCastbSuccess1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& CallFuncBooleanANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FGameplayTagContainer& CallFuncGetAbilityTagsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, bool& CallFuncHasTagReturnValue, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue1, bool& CallFuncEqualEqualGameplayTagReturnValue4, bool& CallFuncIsValidReturnValue3, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue2, bool& CallFuncIsValidReturnValue4, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue3, bool& CallFuncIsValidReturnValue5); // (Final | 0x00008000 | HasDefaults)
};

