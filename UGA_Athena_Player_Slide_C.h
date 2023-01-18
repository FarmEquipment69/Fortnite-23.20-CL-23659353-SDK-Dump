// BlueprintGeneratedClass /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C
// Size: 0x18c8
class UGA_Athena_Player_Slide_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UClass* CameraShake; // 0xb28 (0x8)
	class UClass* CameraModeClass; // 0xb30 (0x8)
	struct FGameplayTag CameraShakeGCNL; // 0xb38 (0x4)
	unsigned char unreflected_b3c[0x4]; // 0xb3c (0x4) 
	class UClass* CameraModifier; // 0xb40 (0x8)
	double MinAngleForMomentum; // 0xb48 (0x8)
	struct FGameplayTag SpeedlinesCue; // 0xb50 (0x4)
	unsigned char unreflected_b54[0x4]; // 0xb54 (0x4) 
	class UClass* StartSlideCameraShake; // 0xb58 (0x8)
	double AdditionalLaunchVelocityOffRamp; // 0xb60 (0x8)
	struct FSlidingControlParams DefaultSlidingParams; // 0xb68 (0x640)
	struct FSlidingControlParams PostDashGroundSlidingParams; // 0x11a8 (0x640)
	double LevelGroundSlideDuration; // 0x17e8 (0x8)
	struct FTimerHandle* EndLevelGroundSlideTimerHandle; // 0x17f0 (0x8)
	struct FScalableFloat DashDuration; // 0x17f8 (0x28)
	struct FTimerHandle* CameraFXDelay; // 0x1820 (0x8)
	struct FGameplayTag PlayerGameplayCue; // 0x1828 (0x4)
	unsigned char unreflected_182c[0x4]; // 0x182c (0x4) 
	double CameraShakeDelay; // 0x1830 (0x8)
	struct FScalableFloat MinAdditionalMomentum; // 0x1838 (0x28)
	struct FScalableFloat MaxAdditionalMomentum; // 0x1860 (0x28)
	struct FScalableFloat MinAngleForAdditionalMomentum; // 0x1888 (0x28)
	bool PrevFallingGracePeriodState; // 0x18b0 (0x1)
	unsigned char unreflected_18b1[0x7]; // 0x18b1 (0x7) 
	class UCameraModifier* SlideCameraModifier; // 0x18b8 (0x8)
	struct FTimerHandle* AddMomentumTimerHandle; // 0x18c0 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndAbilityServerSide (Has no native function)
	void EndAbilityServerSide(class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue, class APlayerPawn_Athena_Generic_C*& K2NodeDynamicCastAsPlayerPawnAthenaGeneric, bool& K2NodeDynamicCastbSuccess, class APlayerPawn_Generic_C*& K2NodeDynamicCastAsPlayerPawnGeneric, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndAbilityClientSide (Has no native function)
	void EndAbilityClientSide(class UCameraModifier_Athena_Sliding_C*& K2NodeDynamicCastAsCameraModifierAthenaSliding, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.BuildDataRegistryResolverScope (Has no native function)
	bool BuildDataRegistryResolverScope(struct TArray<struct FName>& InOutResolverScopes, int& InOutPriority); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.AddMomentum (Has no native function)
	void AddMomentum(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.EndLevelGroundSlide (Has no native function)
	void EndLevelGroundSlide(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.CameraFX (Has no native function)
	void CameraFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.OnFinishedCharacterCustomization_Event_0 (Has no native function)
	void OnFinishedCharacterCustomizationEvent0(class AFortPlayerPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.ForceRemoveSlideGC (Has no native function)
	void ForceRemoveSlideGC(); // (Net | NetReliable | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C.ExecuteUbergraph_GA_Athena_Player_Slide (Has no native function)
	void ExecuteUbergraphGAAthenaPlayerSlide(int& EntryPoint, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue, bool& K2NodeEventbWasCancelled, bool& CallFuncIsValidReturnValue, bool& CallFuncIsFallingReturnValue, struct FTimerHandle*& CallFuncK2SetTimerReturnValue, struct FVector& CallFuncGetLastUpdateVelocityReturnValue, double& CallFuncVSizeReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& TempboolHasBeenInitdVariable, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue1, struct FGameplayEventData& K2NodeEventEventData, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncIsValidReturnValue1, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue3, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter1, bool& K2NodeDynamicCastbSuccess1, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue4, float& CallFuncGetValueAtLevelReturnValue, bool& CallFuncIsValidReturnValue2, struct FTimerHandle*& CallFuncK2SetTimerReturnValue1, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, bool& CallFuncIsValidReturnValue3, class UCameraModifier*& CallFuncAddCameraModifierForOwningPlayerControllerReturnValue, bool& CallFuncIsServerReturnValue, struct FTimerHandle*& CallFuncK2SetTimerReturnValue2, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue5, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue1, class UCameraShakeBase*& CallFuncStartCameraShakeReturnValue, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue6, class APlayerPawn_Generic_C*& K2NodeDynamicCastAsPlayerPawnGeneric, bool& K2NodeDynamicCastbSuccess2, class APlayerPawn_Athena_Generic_C*& K2NodeDynamicCastAsPlayerPawnAthenaGeneric, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsServerReturnValue1, bool& CallFuncIsServerReturnValue2, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue7, class AFortPlayerPawn*& K2NodeCustomEventPawn, bool& CallFuncIsValidReturnValue4, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue8, bool& CallFuncIsValidReturnValue5, bool& TempboolIsClosedVariable, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue9, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter2, bool& K2NodeDynamicCastbSuccess4, bool& CallFuncNotEqualBoolBoolReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, bool& CallFuncBooleanANDReturnValue, struct FRotator& CallFuncMakeRotFromZReturnValue, class UNiagaraComponent*& CallFuncSpawnSystemAtLocationReturnValue, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue10, bool& CallFuncIsValidReturnValue6, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter3, bool& K2NodeDynamicCastbSuccess5, class AFortPlayerPawn*& CallFuncGetAvatarAsFortPlayerPawnReturnValue11, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue2, bool& CallFuncRemoveCameraModifierReturnValue); // (Final | 0x00008000 | HasDefaults)
};

