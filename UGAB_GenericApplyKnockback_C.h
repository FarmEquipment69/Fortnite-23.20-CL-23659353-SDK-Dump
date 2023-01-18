// BlueprintGeneratedClass /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
// Size: 0xc48
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UClass* GETransferKnockback; // 0xb28 (0x8)
	class UClass* GEKnockbackActive; // 0xb30 (0x8)
	double KnockbackPropagationThreshold; // 0xb38 (0x8)
	class UAnimMontage* KnockbackUpMontage; // 0xb40 (0x8)
	struct FName KnockbackUpMontageSection; // 0xb48 (0x4)
	unsigned char unreflected_b4c[0x4]; // 0xb4c (0x4) 
	class UAnimMontage* KnockbackDownMontage; // 0xb50 (0x8)
	struct FName KnockbackDownMontageSection; // 0xb58 (0x4)
	unsigned char unreflected_b5c[0x4]; // 0xb5c (0x4) 
	class UAnimMontage* KnockbackLandMontage; // 0xb60 (0x8)
	struct FName KnockbackLandMontageSection; // 0xb68 (0x4)
	unsigned char unreflected_b6c[0x4]; // 0xb6c (0x4) 
	class UAnimMontage* KnockbackLandToIdleMontage; // 0xb70 (0x8)
	struct FName KnockbackLandToIdleMontageSection; // 0xb78 (0x4)
	unsigned char unreflected_b7c[0x4]; // 0xb7c (0x4) 
	class UAnimMontage* KnockbackLandToStunMontage; // 0xb80 (0x8)
	struct FName KnockbackLandToStunMontageSection; // 0xb88 (0x4)
	bool DebugDraw; // 0xb8c (0x1)
	bool DebugNumbers; // 0xb8d (0x1)
	bool DebugForceKnockbackValues; // 0xb8e (0x1)
	bool bOrientToImpulse; // 0xb8f (0x1)
	struct FActiveGameplayEffectHandle* ActiveKnockback; // 0xb90 (0x8)
	struct FVector OrientDirection; // 0xb98 (0x18)
	struct FVector HitDirection; // 0xbb0 (0x18)
	struct FVector ImpulseDirectionVelocityOrRotation; // 0xbc8 (0x18)
	struct FVector DebugLastLocation; // 0xbe0 (0x18)
	struct FGameplayTag TCNPCStatusLockedInPlace; // 0xbf8 (0x4)
	unsigned char unreflected_bfc[0x4]; // 0xbfc (0x4) 
	double LockedInPlaceKnockbackAngle; // 0xc00 (0x8)
	double LockedInPlaceKnockbackMagnitude; // 0xc08 (0x8)
	class UClass* GERestoreControlResistance; // 0xc10 (0x8)
	class UClass* GEImpactImmunity; // 0xc18 (0x8)
	struct FActiveGameplayEffectHandle* ActiveImpactImmunity; // 0xc20 (0x8)
	bool bHasImpactImmunity; // 0xc28 (0x1)
	unsigned char unreflected_c29[0x7]; // 0xc29 (0x7) 
	double FOneFrameDelay; // 0xc30 (0x8)
	struct FGameplayTag EventTriggeredKnockback; // 0xc38 (0x4)
	bool KnockbackFromFloorTrap; // 0xc3c (0x1)
	bool KnockbackFromFloorTrapPlayUpMontage; // 0xc3d (0x1)
	bool KnockbackFromFloorTrapPlayDownMontage; // 0xc3e (0x1)
	bool KnockbackFromFloorTrapPlayLandMontage; // 0xc3f (0x1)
	struct FGameplayTag EventControlEnded; // 0xc40 (0x4)
	struct FGameplayTag GCTrapKnockbackTag; // 0xc44 (0x4)

	/* Functions */

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CheckForPawnDeath (Has no native function)
	void CheckForPawnDeath(class AFortPawn*& Pawn, bool& IsDead, float& CallFuncGetHealthReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, double& CallFuncLessEqualDoubleDoubleAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection (Has no native function)
	void DoesUseInstagorInsteadOfImpulseDirection(struct FGameplayEffectContextHandle& EffectContext, class UObject*& OptionalObject, bool& Value, struct FGameplayTag& GTIgnoreImpulseDirection, bool& TempboolVariable, class UGameplayEffect*& K2NodeDynamicCastAsGameplayEffect, bool& K2NodeDynamicCastbSuccess, class UObject*& CallFuncEffectContextGetSourceObjectReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncHasTagReturnValue, bool& CallFuncHasMatchingGameplayTagReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator (Has no native function)
	void GetPawnFromInstigator(class AActor*& InActor, class AFortPlayerPawn*& OutPawn, class AFortPlayerStateZone*& K2NodeDynamicCastAsFortPlayerStateZone, bool& K2NodeDynamicCastbSuccess, class AFortPlayerPawn*& CallFuncGetCurrentPawnReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection (Has no native function)
	struct FVector CalculateImpulseDirection(class AFortPlayerPawn*& InPawn); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF (Has no native function)
	void OnCancelledD744890E4C485F1C80B3E7864AE506FF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF (Has no native function)
	void OnInterruptedD744890E4C485F1C80B3E7864AE506FF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF (Has no native function)
	void OnBlendOutD744890E4C485F1C80B3E7864AE506FF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF (Has no native function)
	void OnCompletedD744890E4C485F1C80B3E7864AE506FF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_1F181048470CEB2EB6CC648039C5913C (Has no native function)
	void OnCancelled1F181048470CEB2EB6CC648039C5913C(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_1F181048470CEB2EB6CC648039C5913C (Has no native function)
	void OnInterrupted1F181048470CEB2EB6CC648039C5913C(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_1F181048470CEB2EB6CC648039C5913C (Has no native function)
	void OnBlendOut1F181048470CEB2EB6CC648039C5913C(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_1F181048470CEB2EB6CC648039C5913C (Has no native function)
	void OnCompleted1F181048470CEB2EB6CC648039C5913C(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583 (Has no native function)
	void OnCancelledBA9188C34C234A4C47306FA73AAF0583(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583 (Has no native function)
	void OnInterruptedBA9188C34C234A4C47306FA73AAF0583(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583 (Has no native function)
	void OnBlendOutBA9188C34C234A4C47306FA73AAF0583(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583 (Has no native function)
	void OnCompletedBA9188C34C234A4C47306FA73AAF0583(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0 (Has no native function)
	void OnCancelled8FC7071F40FA26EA05D9688FB3E623A0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0 (Has no native function)
	void OnInterrupted8FC7071F40FA26EA05D9688FB3E623A0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0 (Has no native function)
	void OnBlendOut8FC7071F40FA26EA05D9688FB3E623A0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0 (Has no native function)
	void OnCompleted8FC7071F40FA26EA05D9688FB3E623A0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF (Has no native function)
	void OnCancelled07DF210D46EDFA929CDBFFB162E8E4CF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF (Has no native function)
	void OnInterrupted07DF210D46EDFA929CDBFFB162E8E4CF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF (Has no native function)
	void OnBlendOut07DF210D46EDFA929CDBFFB162E8E4CF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF (Has no native function)
	void OnCompleted07DF210D46EDFA929CDBFFB162E8E4CF(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex (Has no native function)
	void OnReachedJumpApex(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection (Has no native function)
	void SetupMontageSectionsAndOrientDirection(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded (Has no native function)
	void OnPawnLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn (Has no native function)
	void OnHitPawn(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.MovementModeChangedDelegate_Event (Has no native function)
	void MovementModeChangedDelegateEvent(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.BindMovementModeChange (Has no native function)
	void BindMovementModeChange(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.UnbindMovementModeChange (Has no native function)
	void UnbindMovementModeChange(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine (Has no native function)
	void DebugLine(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback (Has no native function)
	void ExecuteUbergraphGABGenericApplyKnockback(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& TempboolVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, bool& CallFuncIsValidReturnValue1, class AFortPawn*& CallFuncGetActivatingPawnReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue2, bool& CallFuncIsFallingReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, class AFortPawn*& CallFuncGetActivatingPawnReturnValue3, class AFortPawn*& CallFuncGetActivatingPawnReturnValue4, class AFortPawn*& CallFuncGetActivatingPawnReturnValue5, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, bool& CallFuncIsValidReturnValue2, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue1, bool& CallFuncIsValidReturnValue3, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncMakeVectorReturnValue, struct FHitResult& K2NodeCustomEventHit1, struct FVector& CallFuncNormalReturnValue, class AActor*& K2NodeCustomEventSelfActor, class AActor*& K2NodeCustomEventOtherActor, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit, struct FVector& CallFuncMultiplyVectorFloatReturnValue1, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromHitResultReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FVector& CallFuncGetVelocityReturnValue, bool& CallFuncIsValidReturnValue4, double& CallFuncVSizeReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue6, class AFortPawn*& CallFuncGetActivatingPawnReturnValue7, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue8, class UFortAbilitySystemComponent*& CallFuncGetActivatingAbilityComponentReturnValue, bool& CallFuncRemoveActiveGameplayEffectReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate9, struct FDelegate& K2NodeCreateDelegateOutputDelegate10, struct FDelegate& K2NodeCreateDelegateOutputDelegate11, struct FDelegate& K2NodeCreateDelegateOutputDelegate12, class AFortPawn*& CallFuncGetActivatingPawnReturnValue9, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, bool& K2NodeSwitchEnumCmpSuccess, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotPreBoolReturnValue1, bool& CallFuncBooleanANDReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue10, struct FDelegate& K2NodeCreateDelegateOutputDelegate13, struct FDelegate& K2NodeCreateDelegateOutputDelegate14, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue2, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsValidReturnValue6, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue3, class UFortAbilitySystemComponent*& CallFuncGetActivatingAbilityComponentReturnValue1, bool& CallFuncIsValidReturnValue7, struct FDelegate& K2NodeCreateDelegateOutputDelegate15, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, class AFortPawn*& CallFuncGetActivatingPawnReturnValue11, bool& K2NodeSwitchEnumCmpSuccess1, bool& CallFuncNotPreBoolReturnValue2, bool& CallFuncIsServerReturnValue, bool& CallFuncIsServerReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate16, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate17, struct FDelegate& K2NodeCreateDelegateOutputDelegate18, struct FDelegate& K2NodeCreateDelegateOutputDelegate19, class AFortPawn*& CallFuncGetActivatingPawnReturnValue12, bool& CallFuncBooleanANDReturnValue1, struct FRotator& CallFuncK2GetActorRotationReturnValue, struct FVector& CallFuncConvRotatorToVectorReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector& CallFuncMakeVectorReturnValue1, struct FVector& CallFuncNormalReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue2, class AFortPawn*& CallFuncGetActivatingPawnReturnValue13, struct FDelegate& K2NodeCreateDelegateOutputDelegate20, class AFortPawn*& CallFuncGetActivatingPawnReturnValue14, bool& CallFuncCheckForPawnDeathIsDead, struct FDelegate& K2NodeCreateDelegateOutputDelegate21, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, class AFortPawn*& CallFuncGetActivatingPawnReturnValue15, bool& CallFuncIsValidReturnValue8, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, bool& CallFuncIsValidReturnValue9, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess, unsigned char& CallFuncGetValidValueReturnValue, class AFortPawn*& CallFuncGetActivatingPawnReturnValue16, bool& CallFuncNotEqualByteByteReturnValue, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue4, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue3, bool& CallFuncIsValidReturnValue10, bool& CallFuncIsValidReturnValue11, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate22, struct FGameplayEventData& K2NodeEventEventData, struct FVector& CallFuncGetImpulseDataImpulseDirection, float& CallFuncGetImpulseDataKnockbackMagnitude, float& CallFuncGetImpulseDataKnockbackZAngle, bool& CallFuncDoesUseInstagorInsteadOfImpulseDirectionValue, double& CallFuncSelectFloatReturnValue, double& CallFuncSelectFloatReturnValue1, struct FVector& K2NodeSelectDefault, class AActor*& CallFuncEffectContextGetInstigatorActorReturnValue, class AFortPlayerPawn*& CallFuncGetPawnFromPlayerStateZoneOutPawn, bool& CallFuncGetPawnFromPlayerStateZonePawnReturned, class ABuildingTrap*& K2NodeDynamicCastAsBuildingTrap, bool& K2NodeDynamicCastbSuccess1, struct FVector& CallFuncCalculateImpulseDirectionReturnValue, class ABuildingTrapFloor*& K2NodeDynamicCastAsBuildingTrapFloor, bool& K2NodeDynamicCastbSuccess2, bool& K2NodeEventbWasCancelled, bool& TempboolVariable1, class UFortAbilitySystemComponent*& CallFuncGetActivatingAbilityComponentReturnValue2, bool& CallFuncRemoveActiveGameplayEffectReturnValue1, class AFortPawn*& CallFuncGetActivatingPawnReturnValue17, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate23, float& CallFuncDelayDurationImplicitCast, double& CallFuncSelectFloatBImplicitCast, double& CallFuncSelectFloatBImplicitCast1, float& CallFuncApplyKnockbackKnockbackZAngleImplicitCast, float& CallFuncApplyKnockbackKnockbackMagnitudeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

