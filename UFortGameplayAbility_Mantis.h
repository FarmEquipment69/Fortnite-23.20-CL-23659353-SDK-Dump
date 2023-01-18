// Class /Script/MantisRuntime.FortGameplayAbility_Mantis
// Size: 0xb68
class UFortGameplayAbility_Mantis : public UFortGameplayAbility
{
	bool bAllowRootMotionWarping; // 0xb20 (0x1)
	bool bApplyEffectContainerOnTechniqueDamage; // 0xb21 (0x1)
	bool bApplyEffectContainerOnTechniqueStart; // 0xb22 (0x1)
	unsigned char unreflected_b23[0x5]; // 0xb23 (0x5) 
	class UFortMantisPawnComponent* MantisPawnComponent; // 0xb28 (0x8)
	class UAbilityTask_PlayMontageAndWait* MontageTask; // 0xb30 (0x8)
	class UFortAbilityTask_ApplyRootMotionMantisForce* RootMotionTask; // 0xb38 (0x8)
	unsigned char padding_b40[0x28]; // 0xb40 (0x28)

	/* Functions */

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageFinished (Underlying native function: OnMontageFinished 0x7194584)
	void OnMontageFinished(); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.OnMontageCancelled (Underlying native function: OnMontageCancelled 0x7194530)
	void OnMontageCancelled(); // (Final | Native | Protected)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.GetLevelForGameplayEffectContainer (Underlying native function: GetLevelForGameplayEffectContainer 0x5309a30)
	int GetLevelForGameplayEffectContainer(struct FGameplayTag& ApplicationTag); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.GetDynamicMontageStartSectionForTechnique (Underlying native function: GetDynamicMontageStartSectionForTechnique 0x5309980)
	struct FName GetDynamicMontageStartSectionForTechnique(struct FName& TechniqueName); // (Native | Event | Protected | BlueprintEvent | Const)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.ConfigureRootMotionWarping (Underlying native function: ConfigureRootMotionWarping 0x71940b8)
	void ConfigureRootMotionWarping(struct FName& TechniqueName, bool& bOutAllowTranslationWarp, bool& bOutAllowRotationWarp, class AActor*& OutTargetActor, bool& bOutSnapshotTargetActorLocation, bool& bOutWarpTranslationToLocation, struct FVector& outTargetLocation); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowStarted (Has no native function)
	void BPOnTechniqueNotifyWindowStarted(enum EFortMantisNotifyWindow& NotifyWindow, class UFortAnimNotifyState_Mantis*& Notify); // (Event | Protected | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnTechniqueNotifyWindowEnded (Has no native function)
	void BPOnTechniqueNotifyWindowEnded(enum EFortMantisNotifyWindow& NotifyWindow, class UFortAnimNotifyState_Mantis*& Notify); // (Event | Protected | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisTechniqueHit (Has no native function)
	void BPOnMantisTechniqueHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, struct FGameplayTag& ApplicationTag); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_OnMantisInputEvent (Has no native function)
	void BPOnMantisInputEvent(enum EFortMantisTechniqueActivationInputType& InputType, enum EFortMantisTechniqueActivationTimingType& InputTiming, bool& bDidInputStartTechnique, bool& bDidInputQueueTechnique); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/MantisRuntime.FortGameplayAbility_Mantis.BP_MantisAbilityTechniqueStarted (Has no native function)
	void BPMantisAbilityTechniqueStarted(struct FGameplayTagContainer& OwningTags, struct FName& SequenceName, bool& StartsSequence, bool& EndsSequence); // (Event | Protected | BlueprintEvent)
};

