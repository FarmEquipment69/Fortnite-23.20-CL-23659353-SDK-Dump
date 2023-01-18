// Class /Script/GameplayAbilities.GameplayAbility
// Size: 0x3b8
class UGameplayAbility : public UObject
{
	unsigned char unreflected_28[0x80]; // 0x28 (0x80) 
	struct FGameplayTagContainer AbilityTags; // 0xa8 (0x20)
	bool bReplicateInputDirectly; // 0xc8 (0x1)
	bool RemoteInstanceEnded; // 0xc9 (0x1)
	unsigned char unreflected_ca[0x4]; // 0xca (0x4) 
	struct TEnumAsByte<EGameplayAbilityReplicationPolicy> ReplicationPolicy; // 0xce (0x1)
	struct TEnumAsByte<EGameplayAbilityInstancingPolicy> InstancingPolicy; // 0xcf (0x1)
	bool bServerRespectsRemoteAbilityCancellation; // 0xd0 (0x1)
	bool bRetriggerInstancedAbility; // 0xd1 (0x1)
	unsigned char unreflected_d2[0x6]; // 0xd2 (0x6) 
	struct FGameplayAbilityActivationInfo CurrentActivationInfo; // 0xd8 (0x20)
	struct FGameplayEventData CurrentEventData; // 0xf8 (0xb0)
	struct TEnumAsByte<EGameplayAbilityNetExecutionPolicy> NetExecutionPolicy; // 0x1a8 (0x1)
	struct TEnumAsByte<EGameplayAbilityNetSecurityPolicy> NetSecurityPolicy; // 0x1a9 (0x1)
	unsigned char unreflected_1aa[0x6]; // 0x1aa (0x6) 
	class UClass* CostGameplayEffectClass; // 0x1b0 (0x8)
	struct TArray<struct FAbilityTriggerData*> AbilityTriggers; // 0x1b8 (0x10)
	class UClass* CooldownGameplayEffectClass; // 0x1c8 (0x8)
	struct FGameplayTagContainer CancelAbilitiesWithTag; // 0x1d0 (0x20)
	struct FGameplayTagContainer BlockAbilitiesWithTag; // 0x1f0 (0x20)
	struct FGameplayTagContainer ActivationOwnedTags; // 0x210 (0x20)
	struct FGameplayTagContainer ActivationRequiredTags; // 0x230 (0x20)
	struct FGameplayTagContainer ActivationBlockedTags; // 0x250 (0x20)
	struct FGameplayTagContainer SourceRequiredTags; // 0x270 (0x20)
	struct FGameplayTagContainer SourceBlockedTags; // 0x290 (0x20)
	struct FGameplayTagContainer TargetRequiredTags; // 0x2b0 (0x20)
	struct FGameplayTagContainer TargetBlockedTags; // 0x2d0 (0x20)
	unsigned char unreflected_2f0[0x20]; // 0x2f0 (0x20) 
	struct TArray<class UGameplayTask*> ActiveTasks; // 0x310 (0x10)
	unsigned char unreflected_320[0x10]; // 0x320 (0x10) 
	class UAnimMontage* CurrentMontage; // 0x330 (0x8)
	unsigned char unreflected_338[0x60]; // 0x338 (0x60) 
	bool bIsActive; // 0x398 (0x1)
	bool bIsAbilityEnding; // 0x399 (0x1)
	bool bIsCancelable; // 0x39a (0x1)
	bool bIsBlockingOtherAbilities; // 0x39b (0x1)
	unsigned char unreflected_39c[0x14]; // 0x39c (0x14) 
	bool bMarkPendingKillOnAbilityEnd; // 0x3b0 (0x1)
	unsigned char padding_3b1[0x7]; // 0x3b1 (0x7)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities (Underlying native function: SetShouldBlockOtherAbilities 0x6ae9ee8)
	void SetShouldBlockOtherAbilities(bool& bShouldBlockAbilities); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled (Underlying native function: SetCanBeCanceled 0x6ae9d38)
	void SetCanBeCanceled(bool& bCanBeCanceled); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent (Underlying native function: SendGameplayEvent 0x6ae8510)
	void SendGameplayEvent(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload); // (Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect (Underlying native function: RemoveGrantedByEffect 0x6ae83e0)
	void RemoveGrantedByEffect(); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop (Underlying native function: MontageStop 0x6ae5fe8)
	void MontageStop(float& OverrideBlendOutTime); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName (Underlying native function: MontageSetNextSectionName 0x6ae5f10)
	void MontageSetNextSectionName(struct FName& FromSectionName, struct FName& ToSectionName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection (Underlying native function: MontageJumpToSection 0x6ae5e7c)
	void MontageJumpToSection(struct FName& SectionName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent (Underlying native function: MakeTargetLocationInfoFromOwnerSkeletalMeshComponent 0x6ae5dc4)
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(struct FName& SocketName); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor (Underlying native function: MakeTargetLocationInfoFromOwnerActor 0x6ae5d68)
	struct FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec (Underlying native function: MakeOutgoingGameplayEffectSpec 0x6ae5920)
	struct FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(class UClass*& GameplayEffectClass, float& Level); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent (Has no native function)
	bool K2ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayEventData& Payload); // (Event | Protected | BlueprintEvent | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue (Underlying native function: K2_RemoveGameplayCue 0x6ae56a0)
	void K2RemoveGameplayCue(struct FGameplayTag& GameplayCueTag); // (Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority (Underlying native function: K2_HasAuthority 0x6ae55c0)
	bool K2HasAuthority(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams (Underlying native function: K2_ExecuteGameplayCueWithParams 0x6ae52c4)
	void K2ExecuteGameplayCueWithParams(struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameters); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue (Underlying native function: K2_ExecuteGameplayCue 0x6ae5194)
	void K2ExecuteGameplayCue(struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context); // (Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbilityLocally (Underlying native function: K2_EndAbilityLocally 0x6ae517c)
	void K2EndAbilityLocally(); // (Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility (Underlying native function: K2_EndAbility 0x6ae5164)
	void K2EndAbility(); // (Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute (Has no native function)
	void K2CommitExecute(); // (Event | Public | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost (Underlying native function: K2_CommitAbilityCost 0x6ae50cc)
	bool K2CommitAbilityCost(bool& BroadcastCommitEvent); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown (Underlying native function: K2_CommitAbilityCooldown 0x6ae4ff0)
	bool K2CommitAbilityCooldown(bool& BroadcastCommitEvent, bool& ForceCooldown); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility (Underlying native function: K2_CommitAbility 0x6ae4fc8)
	bool K2CommitAbility(); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost (Underlying native function: K2_CheckAbilityCost 0x6ae4fa0)
	bool K2CheckAbilityCost(); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown (Underlying native function: K2_CheckAbilityCooldown 0x6ae4f78)
	bool K2CheckAbilityCooldown(); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility (Underlying native function: K2_CancelAbility 0x6ae4f28)
	void K2CancelAbility(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility (Has no native function)
	bool K2CanActivateAbility(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer& RelevantTags); // (Event | Protected | HasOutParms | BlueprintEvent | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget (Underlying native function: K2_ApplyGameplayEffectSpecToTarget 0x6ae4db4)
	struct TArray<struct FActiveGameplayEffectHandle*> K2ApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& EffectSpecHandle, struct FGameplayAbilityTargetDataHandle& TargetData); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner (Underlying native function: K2_ApplyGameplayEffectSpecToOwner 0x6ae4cd0)
	struct FActiveGameplayEffectHandle* K2ApplyGameplayEffectSpecToOwner(struct FGameplayEffectSpecHandle& EffectSpecHandle); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams (Underlying native function: K2_AddGameplayCueWithParams 0x6ae4b9c)
	void K2AddGameplayCueWithParams(struct FGameplayTag& GameplayCueTag, struct FGameplayCueParameters& GameplayCueParameter, bool& bRemoveOnAbilityEnd); // (Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue (Underlying native function: K2_AddGameplayCue 0x6ae4a30)
	void K2AddGameplayCue(struct FGameplayTag& GameplayCueTag, struct FGameplayEffectContextHandle& Context, bool& bRemoveOnAbilityEnd); // (Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled (Underlying native function: IsLocallyControlled 0x6ae4904)
	bool IsLocallyControlled(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey (Underlying native function: InvalidateClientPredictionKey 0x6ae46f8)
	void InvalidateClientPredictionKey(); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP (Underlying native function: GetSourceObject_BP 0x6ae413c)
	class UObject* GetSourceObjectBP(struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo (Underlying native function: GetOwningComponentFromActorInfo 0x6ae40c8)
	class USkeletalMeshComponent* GetOwningComponentFromActorInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo (Underlying native function: GetOwningActorFromActorInfo 0x6ae40a4)
	class AActor* GetOwningActorFromActorInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext (Underlying native function: GetGrantedByEffectContext 0x6ae38ac)
	struct FGameplayEffectContextHandle GetGrantedByEffectContext(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject (Underlying native function: GetCurrentSourceObject 0x6ae21f0)
	class UObject* GetCurrentSourceObject(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage (Underlying native function: GetCurrentMontage 0x6ae21d8)
	class UAnimMontage* GetCurrentMontage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining (Underlying native function: GetCooldownTimeRemaining 0x6ae219c)
	float GetCooldownTimeRemaining(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner (Underlying native function: GetContextFromOwner 0x6ae2028)
	struct FGameplayEffectContextHandle GetContextFromOwner(struct FGameplayAbilityTargetDataHandle& OptionalTargetData); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo (Underlying native function: GetAvatarActorFromActorInfo 0x6ae2004)
	class AActor* GetAvatarActorFromActorInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo (Underlying native function: GetActorInfo 0x6ae1a0c)
	struct FGameplayAbilityActorInfo GetActorInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo (Underlying native function: GetAbilitySystemComponentFromActorInfo 0x6ae12e0)
	class UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP (Underlying native function: GetAbilityLevel_BP 0x6ae11e4)
	int GetAbilityLevelBP(struct FGameplayAbilitySpecHandle& Handle, struct FGameplayAbilityActorInfo& ActorInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel (Underlying native function: GetAbilityLevel 0x6ae11c0)
	int GetAbilityLevel(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName (Underlying native function: EndTaskByInstanceName 0x6adf960)
	void EndTaskByInstanceName(struct FName& InstanceName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState (Underlying native function: EndAbilityState 0x6adf8c8)
	void EndAbilityState(struct FName& OptionalStateNameToEnd); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName (Underlying native function: ConfirmTaskByInstanceName 0x6ade320)
	void ConfirmTaskByInstanceName(struct FName& InstanceName, bool& bEndTask); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName (Underlying native function: CancelTaskByInstanceName 0x6add89c)
	void CancelTaskByInstanceName(struct FName& InstanceName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle (Underlying native function: BP_RemoveGameplayEffectFromOwnerWithHandle 0x6add40c)
	void BPRemoveGameplayEffectFromOwnerWithHandle(struct FActiveGameplayEffectHandle*& Handle, int& StacksToRemove); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags (Underlying native function: BP_RemoveGameplayEffectFromOwnerWithGrantedTags 0x6add308)
	void BPRemoveGameplayEffectFromOwnerWithGrantedTags(struct FGameplayTagContainer& WithGrantedTags, int& StacksToRemove); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags (Underlying native function: BP_RemoveGameplayEffectFromOwnerWithAssetTags 0x6add204)
	void BPRemoveGameplayEffectFromOwnerWithAssetTags(struct FGameplayTagContainer& WithAssetTags, int& StacksToRemove); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget (Underlying native function: BP_ApplyGameplayEffectToTarget 0x6add008)
	struct TArray<struct FActiveGameplayEffectHandle*> BPApplyGameplayEffectToTarget(struct FGameplayAbilityTargetDataHandle& TargetData, class UClass*& GameplayEffectClass, int& GameplayEffectLevel, int& Stacks); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner (Underlying native function: BP_ApplyGameplayEffectToOwner 0x6adcf04)
	struct FActiveGameplayEffectHandle* BPApplyGameplayEffectToOwner(class UClass*& GameplayEffectClass, int& GameplayEffectLevel, int& Stacks); // (Final | Native | Protected | BlueprintCallable)
};

