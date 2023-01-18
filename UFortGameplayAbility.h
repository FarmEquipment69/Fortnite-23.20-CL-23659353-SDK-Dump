// Class /Script/FortniteGame.FortGameplayAbility
// Size: 0xb20
class UFortGameplayAbility : public UGameplayAbility
{
	unsigned char unreflected_3b8[0x20]; // 0x3b8 (0x20) 
	enum EFortGameplayAbilityActivation ActivationType; // 0x3d8 (0x1)
	unsigned char unreflected_3d9[0x7]; // 0x3d9 (0x7) 
	struct FFortGameplayEffectContainer EffectContainers[0x5]; // 0x3e0 (0xb8) (ARRAY) 
	struct TArray<struct FFortGameplayEffectContainer> GameplayEffectContainers; // 0x778 (0x10)
	struct TMap<struct FGameplayTag, struct FFortGameplayEffectContainer> DynamicGameplayEffectContainers; // 0x788 (0x50)
	struct FGameplayTagContainer OwnerPreviewImageOverrideTags; // 0x7d8 (0x20)
	class UClass* ProjectileClass; // 0x7f8 (0x8)
	struct FDataTableRowHandle DamageStatHandle; // 0x800 (0x10)
	struct TArray<struct FFortAbilityCost> AbilityCosts; // 0x810 (0x10)
	unsigned char bShowWidgetForCosts; // 0x820 (0x1)
	unsigned char bApplyingCostsEnabled; // 0x820 (0x1)
	unsigned char unreflected_821[0x7]; // 0x821 (0x7) 
	struct FScalableFloat ExplicitCooldownDuration; // 0x828 (0x28)
	struct FGameplayTagContainer ExplicitCooldownTags; // 0x850 (0x20)
	struct FGameplayTagContainer ExplicitCooldownAssetTags; // 0x870 (0x20)
	unsigned char bStartWithCooldown; // 0x890 (0x1)
	unsigned char bPersistOnDeath; // 0x890 (0x1)
	unsigned char bDisableMoveCombining; // 0x890 (0x1)
	unsigned char bIgnoreClientActivationAttempts; // 0x890 (0x1)
	unsigned char bStopsAIBehaviorLogic; // 0x890 (0x1)
	unsigned char bStopsAIMovement; // 0x890 (0x1)
	unsigned char bStopsRVOAvoidance; // 0x890 (0x1)
	unsigned char bForceNormalAILOD; // 0x890 (0x1)
	unsigned char unreflected_891[0x3]; // 0x891 (0x3) 
	enum EFortAILODLevel MinimumRequiredAILODLevel; // 0x894 (0x1)
	unsigned char unreflected_895[0x3]; // 0x895 (0x3) 
	unsigned char bRelevantForAIDespawning; // 0x898 (0x1)
	unsigned char bUseTetheredPawnAsInstigator; // 0x898 (0x1)
	unsigned char bAcceptTargetActorVehicleForCanHitTests; // 0x898 (0x1)
	unsigned char bUseAIFireLocationAndRotation; // 0x898 (0x1)
	unsigned char unreflected_899[0x3]; // 0x899 (0x3) 
	enum EFortAIWeaponUsage AIWeaponUsage; // 0x89c (0x1)
	unsigned char unreflected_89d[0x3]; // 0x89d (0x3) 
	struct FGameplayTag WeaponTestApplicationTag; // 0x8a0 (0x4)
	unsigned char bVerifyFireOffsetIsNotObstructedByWorldGeometry; // 0x8a4 (0x1)
	unsigned char bCanHitBallisticTestsOnlyTestIndesructiblesWhileFalling; // 0x8a4 (0x1)
	unsigned char unreflected_8a5[0x3]; // 0x8a5 (0x3) 
	struct FVector FireOffset; // 0x8a8 (0x18)
	float ActivationNoiseRange; // 0x8c0 (0x4)
	float ImpactNoiseRange; // 0x8c4 (0x4)
	float ActivationNoiseLoudness; // 0x8c8 (0x4)
	float ImpactNoiseLoudness; // 0x8cc (0x4)
	struct FGameplayTagContainer ProhibitedTargetTags; // 0x8d0 (0x20)
	unsigned char unreflected_8f0[0x1]; // 0x8f0 (0x1) 
	bool bLeadPawnTargets; // 0x8f1 (0x1)
	unsigned char unreflected_8f2[0x2]; // 0x8f2 (0x2) 
	float DesiredThrowAngle; // 0x8f4 (0x4)
	float MaxYawAngleToFire; // 0x8f8 (0x4)
	bool bClampMaxYawAngleToFire; // 0x8fc (0x1)
	bool bUseTargetActorLocation; // 0x8fd (0x1)
	unsigned char unreflected_8fe[0x2]; // 0x8fe (0x2) 
	float InitialAccuracyMax; // 0x900 (0x4)
	float InitialAccuracyMin; // 0x904 (0x4)
	float TargetAccuracyMax; // 0x908 (0x4)
	float TargetAccuracyMin; // 0x90c (0x4)
	float MinAccuracyDistance; // 0x910 (0x4)
	float MaxAccuracyDistance; // 0x914 (0x4)
	float AccuracyDistanceMultiplier; // 0x918 (0x4)
	int NumUsesToReachTargetAccuracy; // 0x91c (0x4)
	int UseCount; // 0x920 (0x4)
	bool bIsMobileToggle; // 0x924 (0x1)
	bool bActivateIfTagsAlreadyPresent; // 0x925 (0x1)
	unsigned char unreflected_926[0xa]; // 0x926 (0xa) 
	struct TArray<struct FFortGameplayAbilityBehaviorDistanceData> GameplayAbilityBehaviorDistanceData; // 0x930 (0x10)
	unsigned char unreflected_940[0x20]; // 0x940 (0x20) 
	struct FFortGameplayAbilityMontageInfo MontageInfo; // 0x960 (0x58)
	struct FFortGameplayAbilityMontageInfo PreviousMontageInfo; // 0x9b8 (0x58)
	struct TArray<class UFortGameplayAbilityMod*> ModList; // 0xa10 (0x10)
	class UFortWeaponItemDefinition* AbilityWeapon; // 0xa20 (0x8)
	struct FText DisplayName; // 0xa28 (0x18)
	struct FText Description; // 0xa40 (0x18)
	unsigned char unreflected_a58[0x8]; // 0xa58 (0x8) 
	class UTexture2D* SmallPreviewImageOverride; // 0xa60 (0x8)
	unsigned char unreflected_a68[0x10]; // 0xa68 (0x10) 
	float ChargeStartTime; // 0xa78 (0x4)
	unsigned char unreflected_a7c[0x4]; // 0xa7c (0x4) 
	enum EFortAbilityChargeState ChargeState; // 0xa80 (0x1)
	unsigned char unreflected_a81[0x27]; // 0xa81 (0x27) 
	class UClass* ToolTip; // 0xaa8 (0x8)
	class UFortTooltipDisplayStatsList* StatList; // 0xab0 (0x8)
	unsigned char unreflected_ab8[0x8]; // 0xab8 (0x8) 
	struct FAbilityTrackedActorSettings ActorTrackingSettings; // 0xac0 (0x28)
	class UClass* CurrentAbilityCameraModeClass; // 0xae8 (0x8)
	struct FGameplayTagContainer AnalyticsTags; // 0xaf0 (0x20)
	struct TArray<struct FFortGameplayAbilityTagChangedAction> TagChangedActions; // 0xb10 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortGameplayAbility.TrackGroupedActor (Underlying native function: TrackGroupedActor 0x81245ac)
	void TrackGroupedActor(class AActor*& ActorToTrack, struct FGameplayTag& GroupTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.TrackActor (Underlying native function: TrackActor 0x8124404)
	void TrackActor(class AActor*& ActorToTrack); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.ShouldPlayFailedMontage (Underlying native function: ShouldPlayFailedMontage 0x8124338)
	bool ShouldPlayFailedMontage(struct FGameplayTagContainer& FailedReason); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.SetupPreviewImageOverride (Underlying native function: SetupPreviewImageOverride 0x756fed4)
	bool SetupPreviewImageOverride(); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.SetAIFocalPoint (Underlying native function: SetAIFocalPoint 0x8123e58)
	void SetAIFocalPoint(class AActor*& FocusTarget, struct FVector& FocalPoint, bool& bUseAttackingPriority); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.QueryGameplayEffectContainerTargetExecutionModifiers (Underlying native function: QueryGameplayEffectContainerTargetExecutionModifiers 0x8123aec)
	void QueryGameplayEffectContainerTargetExecutionModifiers(struct FGameplayAbilityTargetDataHandle& TargetData, class UFortAbilitySystemComponent*& SrcAbilitySystem, struct FGameplayTag& ApplicationTag, int& GameplayEffectLevel, class UObject*& SourceObject, struct TArray<struct FGameplayEffectExecutionScopedModifierInfo>& InScopedMods, struct TArray<struct FActiveGameplayEffectHandle*>& InIgnoreHandles, struct TArray<struct FGameplayModifierEvaluatedData>& OutOutputModifiers, bool& bTooltipRequest); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.PushCameraMode (Underlying native function: PushCameraMode 0x8123a6c)
	void PushCameraMode(class UClass*& CameraModeClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.PopCameraMode (Underlying native function: PopCameraMode 0x8123a58)
	void PopCameraMode(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0x8123998)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortGameplayAbility.OnReachedZeroCharge (Has no native function)
	void OnReachedZeroCharge(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnReachedMinCharge (Has no native function)
	void OnReachedMinCharge(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnReachedMaxCharge (Has no native function)
	void OnReachedMaxCharge(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnOwnerJumpPressed (Has no native function)
	void OnOwnerJumpPressed(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnGenericNotifyFromAnimation (Underlying native function: OnGenericNotifyFromAnimation 0x81237cc)
	void OnGenericNotifyFromAnimation(struct FGameplayTag& NotifyTag); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnDischarge (Has no native function)
	void OnDischarge(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnChargeStateChanged (Has no native function)
	void OnChargeStateChanged(enum EFortAbilityChargeState& OldChargeState, enum EFortAbilityChargeState& NewChargeState); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnActiveAbilityInputRetriggered (Has no native function)
	void OnActiveAbilityInputRetriggered(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnAbilityInputReleased (Has no native function)
	void OnAbilityInputReleased(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.OnAbilityInputPressed (Has no native function)
	void OnAbilityInputPressed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.MakeGameplayEffectContainerSpecs (Underlying native function: MakeGameplayEffectContainerSpecs 0x81235dc)
	void MakeGameplayEffectContainerSpecs(struct FGameplayTag& ApplicationTag, int& GameplayEffectLevel, struct TArray<struct FFortGameplayEffectContainerSpec>& OutSpecContainers); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.MakeGameplayEffectContainerSpec (Underlying native function: MakeGameplayEffectContainerSpec 0x81234e0)
	struct FFortGameplayEffectContainerSpec MakeGameplayEffectContainerSpec(struct FGameplayTag& ApplicationTag, int& GameplayEffectLevel); // (0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.K2_TriggerFromAnimation (Has no native function)
	void K2TriggerFromAnimation(struct FGameplayTag& ApplicationTag); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.K2_ShouldUseDecoTool (Has no native function)
	bool K2ShouldUseDecoTool(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.K2_OverrideFailedReason (Underlying native function: K2_OverrideFailedReason 0x8123124)
	void K2OverrideFailedReason(struct FGameplayTagContainer& FailedReason, struct FGameplayTagContainer& OverridenFailedReason); // (0x00000002 | Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.K2_OnAbilityRemoved (Has no native function)
	void K2OnAbilityRemoved(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.K2_AbilityCompleted (Underlying native function: K2_AbilityCompleted 0x812310c)
	void K2AbilityCompleted(); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.IsTargetOutsideOfMaxYawRotation (Underlying native function: IsTargetOutsideOfMaxYawRotation 0x81230e8)
	bool IsTargetOutsideOfMaxYawRotation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.IsChargeUpAbility (Underlying native function: IsChargeUpAbility 0x81230c4)
	bool IsChargeUpAbility(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetTrackedGroupedActors (Underlying native function: GetTrackedGroupedActors 0x81228ac)
	struct TArray<class AActor*> GetTrackedGroupedActors(struct FGameplayTag& GroupTag); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetTrackedActors (Underlying native function: GetTrackedActors 0x8122838)
	struct TArray<class AActor*> GetTrackedActors(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetTooltip (Underlying native function: GetTooltip 0x81227a8)
	class UClass* GetTooltip(bool& bSummaryTooltip); // (Final | 0x00000002 | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetProjectileInitialValuesAndTargetLocation (Underlying native function: GetProjectileInitialValuesAndTargetLocation 0x8122020)
	void GetProjectileInitialValuesAndTargetLocation(class AActor*& AbilityTarget, struct FVector& outTargetLocation, float& outProjectileSpeed, struct FRotator& outSpawnDirection, float& outProjectileGravity, class AActor*& HomingTarget, bool& bApplyInaccuracy, bool& bApplyClampedMaxYawAngleToFire, bool& bApplyLeading, float& DesiredFlightTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetProjectileInitialValues (Underlying native function: GetProjectileInitialValues 0x8121d70)
	void GetProjectileInitialValues(float& outProjectileSpeed, struct FRotator& outSpawnDirection, float& outProjectileGravity, class AActor*& HomingTarget, bool& bApplyInaccuracy, bool& bApplyClampedMaxYawAngleToFire, bool& bApplyLeading, float& DesiredFlightTime); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetOwningPlayerTeamPerkProgressiveActivationLevel (Underlying native function: GetOwningPlayerTeamPerkProgressiveActivationLevel 0x8121c38)
	int GetOwningPlayerTeamPerkProgressiveActivationLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetMaxNumTrackedActors (Underlying native function: GetMaxNumTrackedActors 0x8121c14)
	int GetMaxNumTrackedActors(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetFireRotation (Underlying native function: GetFireRotation 0x8121aec)
	struct FRotator GetFireRotation(bool& bApplyLeading, bool& bApplyInaccuracy, bool& bApplyClampedMaxYawAngleToFire); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetFireLocation (Underlying native function: GetFireLocation 0x8121ab4)
	struct FVector GetFireLocation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetDisplayStats (Underlying native function: GetDisplayStats 0x8121a88)
	class UFortTooltipDisplayStatsList* GetDisplayStats(); // (Final | 0x00000002 | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetCustomAbilitySourceTransform (Has no native function)
	struct FTransform GetCustomAbilitySourceTransform(); // (Event | Public | HasDefaults | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetCurrentSourceWeapon (Underlying native function: GetCurrentSourceWeapon 0x8121a64)
	class AFortWeapon* GetCurrentSourceWeapon(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetCurrentSourceItemDefinition (Underlying native function: GetCurrentSourceItemDefinition 0x8121a24)
	class UFortWorldItemDefinition* GetCurrentSourceItemDefinition(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetCurrentAbilitySourceLevel (Underlying native function: GetCurrentAbilitySourceLevel 0x8121994)
	void GetCurrentAbilitySourceLevel(float& OutSourceLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetChargeTime (Underlying native function: GetChargeTime 0x812196c)
	float GetChargeTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetChargeState (Underlying native function: GetChargeState 0x8121954)
	enum EFortAbilityChargeState GetChargeState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetChargePercent (Underlying native function: GetChargePercent 0x812192c)
	float GetChargePercent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetAvatarAsValidFortPlayerPawn (Underlying native function: GetAvatarAsValidFortPlayerPawn 0x812182c)
	void GetAvatarAsValidFortPlayerPawn(enum EFortGetPlayerPawnExecutions& OutExec, class AFortPlayerPawn*& OutFortPlayerPawn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.GetAvatarAsFortPlayerPawn (Underlying native function: GetAvatarAsFortPlayerPawn 0x81217e8)
	class AFortPlayerPawn* GetAvatarAsFortPlayerPawn(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetAimLocationNearestPawn (Underlying native function: GetAimLocationNearestPawn 0x8121408)
	struct FVector GetAimLocationNearestPawn(class AFortPawn*& Instigator); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.GetAIAbilityTarget (Underlying native function: GetAIAbilityTarget 0x812133c)
	class AActor* GetAIAbilityTarget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetActivatingPawn (Underlying native function: GetActivatingPawn 0x81213dc)
	class AFortPawn* GetActivatingPawn(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetActivatingAbilityComponent (Underlying native function: GetActivatingAbilityComponent 0x81213b8)
	class UFortAbilitySystemComponent* GetActivatingAbilityComponent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetAbilityTargetingLevel (Underlying native function: GetAbilityTargetingLevel 0x22e464c)
	float GetAbilityTargetingLevel(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.GetAbilityTags (Underlying native function: GetAbilityTags 0x8121360)
	struct FGameplayTagContainer GetAbilityTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.ForceCameraLookDown (Underlying native function: ForceCameraLookDown 0x8121254)
	void ForceCameraLookDown(class APlayerController*& PC); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortGameplayAbility.EquipVehicleWeapon (Underlying native function: EquipVehicleWeapon 0x8121170)
	void EquipVehicleWeapon(class UFortWeaponItemDefinition*& WeaponDefinition, int& SeatIndex, int& ItemLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.EquipAbilityWeapon (Underlying native function: EquipAbilityWeapon 0x81210cc)
	void EquipAbilityWeapon(class UFortWeaponItemDefinition*& WeaponDefinition, int& ItemLevel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.DoesTargetHaveTags (Underlying native function: DoesTargetHaveTags 0x8120fb8)
	bool DoesTargetHaveTags(class AActor*& Target, struct FGameplayTagContainer& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.DoesTargetHaveProhibitedTagsForAI (Underlying native function: DoesTargetHaveProhibitedTagsForAI 0x8120efc)
	bool DoesTargetHaveProhibitedTagsForAI(class AActor*& Target); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.ClearTrackedGroupedActors (Underlying native function: ClearTrackedGroupedActors 0x8120e38)
	void ClearTrackedGroupedActors(struct FGameplayTag& GroupTag, bool& bDestroyActors); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.ClearTrackedActors (Underlying native function: ClearTrackedActors 0x8120db8)
	void ClearTrackedActors(bool& bDestroyActors); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.ClearAIFocalPoint (Underlying native function: ClearAIFocalPoint 0x8120d10)
	void ClearAIFocalPoint(bool& bUseAttackingPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.CalculateProjectileTrajectorySplineWithHitProfile (Underlying native function: CalculateProjectileTrajectorySplineWithHitProfile 0x81206a4)
	static void CalculateProjectileTrajectorySplineWithHitProfile(struct FHitResult& OutHitResult, struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, class AActor*& Instigator, struct FVector& InitialLocation, struct FVector& InitialVelocity, float& MaxSpeed, float& Gravity, float& Friction, float& Bounciness, float& TimeStep, float& TraceExtent, struct FName& CollisionProfile, struct TArray<class AActor*>& ExtraActorsToIgnore, int& MaxBounces, int& MaxSteps, float& MaxDistanceBetweenSplinePoints, float& InitialDistance, float& LinearDamping, bool& bReturnPhysicalMaterial); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.CalculateProjectileTrajectorySplineWithHit (Underlying native function: CalculateProjectileTrajectorySplineWithHit 0x8120038)
	static void CalculateProjectileTrajectorySplineWithHit(struct FHitResult& OutHitResult, struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, class AActor*& Instigator, struct FVector& InitialLocation, struct FVector& InitialVelocity, float& MaxSpeed, float& Gravity, float& Friction, float& Bounciness, float& TimeStep, float& TraceExtent, struct TEnumAsByte<ECollisionChannel>& TraceChannel, struct TArray<class AActor*>& ExtraActorsToIgnore, int& MaxBounces, int& MaxSteps, float& MaxDistanceBetweenSplinePoints, float& InitialDistance, float& LinearDamping, bool& bReturnPhysicalMaterial); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.CalculateProjectileTrajectorySplineProfile (Underlying native function: CalculateProjectileTrajectorySplineProfile 0x811fa34)
	static void CalculateProjectileTrajectorySplineProfile(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, class AActor*& Instigator, struct FVector& InitialLocation, struct FVector& InitialVelocity, float& MaxSpeed, float& Gravity, float& Friction, float& Bounciness, float& TimeStep, float& TraceExtent, struct FName& CollisionProfile, struct TArray<class AActor*>& ExtraActorsToIgnore, int& MaxBounces, int& MaxSteps, float& MaxDistanceBetweenSplinePoints, float& InitialDistance, float& LinearDamping, bool& bReturnPhysicalMaterial); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.CalculateProjectileTrajectorySpline (Underlying native function: CalculateProjectileTrajectorySpline 0x811f430)
	static void CalculateProjectileTrajectorySpline(struct TArray<struct FVector>& OutSplinePoints, struct TArray<struct FVector>& OutSplineTangents, class AActor*& Instigator, struct FVector& InitialLocation, struct FVector& InitialVelocity, float& MaxSpeed, float& Gravity, float& Friction, float& Bounciness, float& TimeStep, float& TraceExtent, struct TEnumAsByte<ECollisionChannel>& TraceChannel, struct TArray<class AActor*>& ExtraActorsToIgnore, int& MaxBounces, int& MaxSteps, float& MaxDistanceBetweenSplinePoints, float& InitialDistance, float& LinearDamping, bool& bReturnPhysicalMaterial); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.BP_GetGameplayEffectContainers (Underlying native function: BP_GetGameplayEffectContainers 0x811f350)
	void BPGetGameplayEffectContainers(struct FGameplayTag& ApplicationTag, struct TArray<struct FFortGameplayEffectContainer>& OutContainers); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.BP_GetGameplayEffectContainer (Underlying native function: BP_GetGameplayEffectContainer 0x811f298)
	struct FFortGameplayEffectContainer BPGetGameplayEffectContainer(struct FGameplayTag& ApplicationTag); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.BP_GetCooldownTags (Underlying native function: BP_GetCooldownTags 0x811f230)
	struct FGameplayTagContainer BPGetCooldownTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.ApplySourcePropertyOverrides (Underlying native function: ApplySourcePropertyOverrides 0x811f0c4)
	bool ApplySourcePropertyOverrides(struct TArray<struct FName>& OverriddenPropertyNames); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.ApplyGameplayEffectContainerWithCSVStats (Underlying native function: ApplyGameplayEffectContainerWithCSVStats 0x811edfc)
	struct TArray<struct FActiveGameplayEffectHandle*> ApplyGameplayEffectContainerWithCSVStats(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag, int& GameplayEffectLevel, struct FString& StatName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.ApplyGameplayEffectContainer (Underlying native function: ApplyGameplayEffectContainer 0x811ec84)
	struct TArray<struct FActiveGameplayEffectHandle*> ApplyGameplayEffectContainer(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag, int& GameplayEffectLevel); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.ApplyAccuracyToTargetLocation (Underlying native function: ApplyAccuracyToTargetLocation 0x811eb2c)
	struct FVector ApplyAccuracyToTargetLocation(struct FVector& SourceLocation, struct FVector& TargetLocation, float& inDesiredThrowAngle); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortGameplayAbility.AllowAIMovement (Underlying native function: AllowAIMovement 0x811ea38)
	static void AllowAIMovement(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortGameplayAbility.AddDynamicGameplayEffectContainer (Underlying native function: AddDynamicGameplayEffectContainer 0x811e930)
	void AddDynamicGameplayEffectContainer(struct FGameplayTag& ApplicationTag, struct FFortGameplayEffectContainer& Container); // (0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

