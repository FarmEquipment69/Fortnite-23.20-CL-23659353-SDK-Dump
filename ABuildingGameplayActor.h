// Class /Script/FortniteGame.BuildingGameplayActor
// Size: 0x9d8
class ABuildingGameplayActor : public ABuildingActor
{
	unsigned char unreflected_780[0x20]; // 0x780 (0x20) 
	class UFortAbilitySet* AbilitySet; // 0x7a0 (0x8)
	class UFortAbilitySet* InherentAbilitySets[0x5]; // 0x7a8 (0x8) (ARRAY) 
	struct FDataTableRowHandle DamageStatHandle; // 0x7d0 (0x10)
	bool bAllowRidingOnActor; // 0x7e0 (0x1)
	unsigned char unreflected_7e1[0x7]; // 0x7e1 (0x7) 
	struct FMulticastInlineDelegate OnProximityPulseDelegate; // 0x7e8 (0x10)
	struct FMulticastInlineDelegate OnProximityPrePulseDelegate; // 0x7f8 (0x10)
	struct FMulticastInlineDelegate OnProximityEffectsAppliedDelegate; // 0x808 (0x10)
	struct FMulticastInlineDelegate OnDeliverableAbilityInfoAppliedToTouchingActor; // 0x818 (0x10)
	struct FMulticastInlineDelegate OnDeliverableAbilityInfoChangedForExitingTouchActor; // 0x828 (0x10)
	bool bIgnoreInstigatorCollision; // 0x838 (0x1)
	bool bAddOwnerVelocity; // 0x839 (0x1)
	unsigned char unreflected_83a[0x2]; // 0x83a (0x2) 
	int AbilitySourceLevel; // 0x83c (0x4)
	struct FBuildingGameplayActorAbilityDeliveryInfo DeliverableAbilityInfo; // 0x840 (0xa0)
	unsigned char bApplyDefaultEnabledAbilityBucketsOnInit; // 0x8e0 (0x1)
	unsigned char bUseSimpleActorTouchSetupForAbilityBuckets; // 0x8e0 (0x1)
	unsigned char bShowInteractKeybind; // 0x8e0 (0x1)
	unsigned char bCanBeMarked; // 0x8e0 (0x1)
	unsigned char bBlockMarking; // 0x8e0 (0x1)
	unsigned char unreflected_8e1[0x7]; // 0x8e1 (0x7) 
	struct FMarkedActorDisplayInfo MarkerDisplay; // 0x8e8 (0x98)
	struct FVector MarkerPositionOffset; // 0x980 (0x18)
	class UPrimitiveComponent* RegisteredTouchComponent; // 0x998 (0x8)
	unsigned char unreflected_9a0[0x8]; // 0x9a0 (0x8) 
	struct FGameplayTagContainer AnalyticsTags; // 0x9a8 (0x20)
	float PostProcessOverlapBlendWeight; // 0x9c8 (0x4)
	unsigned char unreflected_9cc[0x4]; // 0x9cc (0x4) 
	class UWidget* CustomInteractionWidget; // 0x9d0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActor.SetTouchComponentForAbilityDeliveryInfo (Underlying native function: SetTouchComponentForAbilityDeliveryInfo 0x85e10ec)
	void SetTouchComponentForAbilityDeliveryInfo(class UPrimitiveComponent*& PrimitiveComponent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.SetInitialVelocity (Underlying native function: SetInitialVelocity 0x85e0ce0)
	void SetInitialVelocity(struct FVector& InitialVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.SetIgnoreInstigatorCollision (Underlying native function: SetIgnoreInstigatorCollision 0x85e0c60)
	void SetIgnoreInstigatorCollision(bool& bShouldIgnore); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.SetAbilitySourceLevel (Underlying native function: SetAbilitySourceLevel 0x85e0980)
	void SetAbilitySourceLevel(int& NewAbilitySourceLevel); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.OverrideMarkerDisplayInfo (Underlying native function: OverrideMarkerDisplayInfo 0x85e0274)
	void OverrideMarkerDisplayInfo(struct FMarkedActorDisplayInfo& NewDisplayInfo); // (Final | 0x00000002 | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.OnSpawned (Has no native function)
	void OnSpawned(class AFortPawn*& InInstigatorPawn); // (0x00000002 | BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActor.OnReplicatedVelocityStartOrStop (Has no native function)
	void OnReplicatedVelocityStartOrStop(bool& bStart); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActor.OnRegisteredTouchComponentEndOverlap (Underlying native function: OnRegisteredTouchComponentEndOverlap 0x85dfc4c)
	void OnRegisteredTouchComponentEndOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (0x00000002 | Native | Protected)

	// Function /Script/FortniteGame.BuildingGameplayActor.OnRegisteredTouchComponentBeginOverlap (Underlying native function: OnRegisteredTouchComponentBeginOverlap 0x85dfa5c)
	void OnRegisteredTouchComponentBeginOverlap(class UPrimitiveComponent*& OverlappedComp, class AActor*& Other, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BuildingGameplayActor.OnDropped (Has no native function)
	void OnDropped(bool& bValidLocation, bool& bPassesPlacementRestrictions, bool& bWasIntentionallyPlaced); // (0x00000002 | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActor.K2_RemoveGameplayCue (Underlying native function: K2_RemoveGameplayCue 0x85df4a4)
	void K2RemoveGameplayCue(struct FGameplayTag& GameplayCueTag); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.K2_ExecuteGameplayCueWithParams (Underlying native function: K2_ExecuteGameplayCueWithParams 0x85df3b0)
	void K2ExecuteGameplayCueWithParams(struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.K2_ExecuteGameplayCue (Underlying native function: K2_ExecuteGameplayCue 0x85df280)
	void K2ExecuteGameplayCue(struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.K2_AddGameplayCue (Underlying native function: K2_AddGameplayCue 0x85df150)
	void K2AddGameplayCue(struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.GetTargetingSourceTransform (Underlying native function: GetTargetingSourceTransform 0x85deba8)
	struct FTransform GetTargetingSourceTransform(enum EFortAbilityTargetingSource& Source); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.BuildingGameplayActor.EnableAbilityDeliveryInfo (Underlying native function: EnableAbilityDeliveryInfo 0x85de508)
	void EnableAbilityDeliveryInfo(struct FGameplayTag& BucketTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.DisableAbilityDeliveryInfo (Underlying native function: DisableAbilityDeliveryInfo 0x85de0b0)
	void DisableAbilityDeliveryInfo(struct FGameplayTag& BucketTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingGameplayActor.AcceptsEmoteSprays (Underlying native function: AcceptsEmoteSprays 0x85dd830)
	bool AcceptsEmoteSprays(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

