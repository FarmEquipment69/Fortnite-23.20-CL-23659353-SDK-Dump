// Class /Script/GameplayAbilities.AbilitySystemComponent
// Size: 0x1398
class UAbilitySystemComponent : public UGameplayTasksComponent
{
	unsigned char unreflected_118[0x10]; // 0x118 (0x10) 
	struct TArray<struct FAttributeDefaults> DefaultStartingData; // 0x128 (0x10)
	struct FName AffectedAnimInstanceTag; // 0x138 (0x4)
	unsigned char unreflected_13c[0x19c]; // 0x13c (0x19c) 
	float OutgoingDuration; // 0x2d8 (0x4)
	float IncomingDuration; // 0x2dc (0x4)
	unsigned char unreflected_2e0[0x20]; // 0x2e0 (0x20) 
	struct TArray<struct FString> ClientDebugStrings; // 0x300 (0x10)
	struct TArray<struct FString> ServerDebugStrings; // 0x310 (0x10)
	unsigned char unreflected_320[0x60]; // 0x320 (0x60) 
	bool UserAbilityActivationInhibited; // 0x380 (0x1)
	bool ReplicationProxyEnabled; // 0x381 (0x1)
	bool bSuppressGrantAbility; // 0x382 (0x1)
	bool bSuppressGameplayCues; // 0x383 (0x1)
	unsigned char unreflected_384[0x4]; // 0x384 (0x4) 
	struct TArray<class AGameplayAbilityTargetActor*> SpawnedTargetActors; // 0x388 (0x10)
	unsigned char unreflected_398[0x28]; // 0x398 (0x28) 
	class AActor* OwnerActor; // 0x3c0 (0x8)
	class AActor* AvatarActor; // 0x3c8 (0x8)
	unsigned char unreflected_3d0[0x10]; // 0x3d0 (0x10) 
	struct FGameplayAbilitySpecContainer ActivatableAbilities; // 0x3e0 (0x120)
	unsigned char unreflected_500[0x30]; // 0x500 (0x30) 
	struct TArray<class UGameplayAbility*> AllReplicatedInstancedAbilities; // 0x530 (0x10)
	unsigned char unreflected_540[0x210]; // 0x540 (0x210) 
	struct FGameplayAbilityRepAnimMontage RepAnimMontageInfo; // 0x750 (0x38)
	bool bCachedIsNetSimulated; // 0x788 (0x1)
	bool bPendingMontageRep; // 0x789 (0x1)
	unsigned char unreflected_78a[0x6]; // 0x78a (0x6) 
	struct FGameplayAbilityLocalAnimMontage LocalAnimMontageInfo; // 0x790 (0x30)
	unsigned char unreflected_7c0[0xa0]; // 0x7c0 (0xa0) 
	struct FActiveGameplayEffectsContainer ActiveGameplayEffects; // 0x860 (0x478)
	struct FActiveGameplayCueContainer ActiveGameplayCues; // 0xcd8 (0x128)
	struct FActiveGameplayCueContainer MinimalReplicationGameplayCues; // 0xe00 (0x128)
	unsigned char unreflected_f28[0x128]; // 0xf28 (0x128) 
	struct TArray<unsigned char> BlockedAbilityBindings; // 0x1050 (0x10)
	unsigned char unreflected_1060[0x128]; // 0x1060 (0x128) 
	struct FMinimalReplicationTagCountMap MinimalReplicationTags; // 0x1188 (0x60)
	struct TArray<class UAttributeSet*> SpawnedAttributes; // 0x11e8 (0x10)
	unsigned char unreflected_11f8[0x10]; // 0x11f8 (0x10) 
	struct FMinimalReplicationTagCountMap ReplicatedLooseTags; // 0x1208 (0x60)
	unsigned char unreflected_1268[0x8]; // 0x1268 (0x8) 
	struct FReplicatedPredictionKeyMap ReplicatedPredictionKeyMap; // 0x1270 (0x118)
	unsigned char padding_1388[0x10]; // 0x1388 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes (Underlying native function: UpdateActiveGameplayEffectSetByCallerMagnitudes 0x6aead94)
	void UpdateActiveGameplayEffectSetByCallerMagnitudes(struct FActiveGameplayEffectHandle*& ActiveHandle, struct TMap<struct FGameplayTag, float>& NewSetByCallerValues); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude (Underlying native function: UpdateActiveGameplayEffectSetByCallerMagnitude 0x6aeac90)
	void UpdateActiveGameplayEffectSetByCallerMagnitude(struct FActiveGameplayEffectHandle*& ActiveHandle, struct FGameplayTag& SetByCallerTag, float& NewValue); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass (Underlying native function: TryActivateAbilityByClass 0x6aeabcc)
	bool TryActivateAbilityByClass(class UClass*& InAbilityToActivate, bool& bAllowRemoteActivation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbility (Underlying native function: TryActivateAbility 0x6aeab08)
	bool TryActivateAbility(struct FGameplayAbilitySpecHandle& AbilityToActivate, bool& bAllowRemoteActivation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag (Underlying native function: TryActivateAbilitiesByTag 0x6aea9f4)
	bool TryActivateAbilitiesByTag(struct FGameplayTagContainer& GameplayTagContainer, bool& bAllowRemoteActivation); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm (Underlying native function: TargetConfirm 0xed0df8)
	void TargetConfirm(); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel (Underlying native function: TargetCancel 0x6aea50c)
	void TargetCancel(); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited (Underlying native function: SetUserAbilityActivationInhibited 0x6aea214)
	void SetUserAbilityActivationInhibited(bool& NewInhibit); // (Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery (Underlying native function: SetActiveGameplayEffectLevelUsingQuery 0x6ae9c38)
	void SetActiveGameplayEffectLevelUsingQuery(struct FGameplayEffectQuery& Query, int& NewLevel); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel (Underlying native function: SetActiveGameplayEffectLevel 0x6ae9b6c)
	void SetActiveGameplayEffectLevel(struct FActiveGameplayEffectHandle*& ActiveHandle, int& NewLevel); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData (Underlying native function: ServerTryActivateAbilityWithEventData 0x6ae9944)
	void ServerTryActivateAbilityWithEventData(struct FGameplayAbilitySpecHandle& AbilityToActivate, bool& InputPressed, struct FPredictionKey& PredictionKey, struct FGameplayEventData& TriggerEventData); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility (Underlying native function: ServerTryActivateAbility 0x6ae97d4)
	void ServerTryActivateAbility(struct FGameplayAbilitySpecHandle& AbilityToActivate, bool& InputPressed, struct FPredictionKey& PredictionKey); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled (Underlying native function: ServerSetReplicatedTargetDataCancelled 0x6ae9634)
	void ServerSetReplicatedTargetDataCancelled(struct FGameplayAbilitySpecHandle& AbilityHandle, struct FPredictionKey& AbilityOriginalPredictionKey, struct FPredictionKey& CurrentPredictionKey); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData (Underlying native function: ServerSetReplicatedTargetData 0x6ae93d4)
	void ServerSetReplicatedTargetData(struct FGameplayAbilitySpecHandle& AbilityHandle, struct FPredictionKey& AbilityOriginalPredictionKey, struct FGameplayAbilityTargetDataHandle& ReplicatedTargetDataHandle, struct FGameplayTag& ApplicationTag, struct FPredictionKey& CurrentPredictionKey); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload (Underlying native function: ServerSetReplicatedEventWithPayload 0x6ae9184)
	void ServerSetReplicatedEventWithPayload(struct TEnumAsByte<EAbilityGenericReplicatedEvent>& EventType, struct FGameplayAbilitySpecHandle& AbilityHandle, struct FPredictionKey& AbilityOriginalPredictionKey, struct FPredictionKey& CurrentPredictionKey, struct FVector_NetQuantize100& VectorPayload); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent (Underlying native function: ServerSetReplicatedEvent 0x6ae8fa0)
	void ServerSetReplicatedEvent(struct TEnumAsByte<EAbilityGenericReplicatedEvent>& EventType, struct FGameplayAbilitySpecHandle& AbilityHandle, struct FPredictionKey& AbilityOriginalPredictionKey, struct FPredictionKey& CurrentPredictionKey); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased (Underlying native function: ServerSetInputReleased 0x6ae8f04)
	void ServerSetInputReleased(struct FGameplayAbilitySpecHandle& AbilityHandle); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed (Underlying native function: ServerSetInputPressed 0x6ae8e68)
	void ServerSetInputPressed(struct FGameplayAbilitySpecHandle& AbilityHandle); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings (Underlying native function: ServerPrintDebug_RequestWithStrings 0x6ae8db4)
	void ServerPrintDebugRequestWithStrings(struct TArray<struct FString>& Strings); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request (Underlying native function: ServerPrintDebug_Request 0x6ae8d68)
	void ServerPrintDebugRequest(); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility (Underlying native function: ServerEndAbility 0x6ae8bc4)
	void ServerEndAbility(struct FGameplayAbilitySpecHandle& AbilityToEnd, struct FGameplayAbilityActivationInfo& ActivationInfo, struct FPredictionKey& PredictionKey); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate (Underlying native function: ServerCurrentMontageSetPlayRate 0x6ae8ad4)
	void ServerCurrentMontageSetPlayRate(class UAnimMontage*& ClientAnimMontage, float& InPlayRate); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName (Underlying native function: ServerCurrentMontageSetNextSectionName 0x6ae895c)
	void ServerCurrentMontageSetNextSectionName(class UAnimMontage*& ClientAnimMontage, float& ClientPosition, struct FName& SectionName, struct FName& NextSectionName); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName (Underlying native function: ServerCurrentMontageJumpToSectionName 0x6ae8870)
	void ServerCurrentMontageJumpToSectionName(class UAnimMontage*& ClientAnimMontage, struct FName& SectionName); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility (Underlying native function: ServerCancelAbility 0x6ae8748)
	void ServerCancelAbility(struct FGameplayAbilitySpecHandle& AbilityToCancel, struct FGameplayAbilityActivationInfo& ActivationInfo); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch (Underlying native function: ServerAbilityRPCBatch 0x6ae8630)
	void ServerAbilityRPCBatch(struct FServerAbilityRPCBatch& BatchInfo); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect (Underlying native function: RemoveActiveGameplayEffectBySourceEffect 0x6ae82e4)
	void RemoveActiveGameplayEffectBySourceEffect(class UClass*& GameplayEffect, class UAbilitySystemComponent*& InstigatorAbilitySystemComponent, int& StacksToRemove); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect (Underlying native function: RemoveActiveGameplayEffect 0x1badf8c)
	bool RemoveActiveGameplayEffect(struct FActiveGameplayEffectHandle*& Handle, int& StacksToRemove); // (BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags (Underlying native function: RemoveActiveEffectsWithTags 0x6ae8218)
	int RemoveActiveEffectsWithTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags (Underlying native function: RemoveActiveEffectsWithSourceTags 0x6ae814c)
	int RemoveActiveEffectsWithSourceTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags (Underlying native function: RemoveActiveEffectsWithGrantedTags 0x27dbc0c)
	int RemoveActiveEffectsWithGrantedTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags (Underlying native function: RemoveActiveEffectsWithAppliedTags 0x27dbc0c)
	int RemoveActiveEffectsWithAppliedTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ReleaseInputID (Underlying native function: ReleaseInputID 0x6ae80c8)
	void ReleaseInputID(int& InputID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.PressInputID (Underlying native function: PressInputID 0x6ae8044)
	void PressInputID(int& InputID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed (Underlying native function: OnSpawnedAttributesEndPlayed 0x6ae7c10)
	void OnSpawnedAttributesEndPlayed(class AActor*& InActor, struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes (Underlying native function: OnRep_SpawnedAttributes 0x24d519c)
	void OnRepSpawnedAttributes(struct TArray<class UAttributeSet*>& PreviousSpawnedAttributes); // (Final | Native | Private | HasOutParms)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString (Underlying native function: OnRep_ServerDebugString 0x6ae7bc0)
	void OnRepServerDebugString(); // (Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage (Underlying native function: OnRep_ReplicatedAnimMontage 0x2fc7e8c)
	void OnRepReplicatedAnimMontage(); // (Native | Protected)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor (Underlying native function: OnRep_OwningActor 0x1aebc30)
	void OnRepOwningActor(); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString (Underlying native function: OnRep_ClientDebugString 0x250b1f4)
	void OnRepClientDebugString(); // (Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities (Underlying native function: OnRep_ActivateAbilities 0x22e4330)
	void OnRepActivateAbilities(); // (Native | Protected)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed (Underlying native function: OnOwnerActorDestroyed 0x23863bc)
	void OnOwnerActorDestroyed(class AActor*& InActor); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed (Underlying native function: OnAvatarActorDestroyed 0x22c0044)
	void OnAvatarActorDestroyed(class AActor*& InActor); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted_WithParams 0x6ae6b7c)
	void NetMulticastInvokeGameplayCuesExecutedWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted (Underlying native function: NetMulticast_InvokeGameplayCuesExecuted 0x6ae6998)
	void NetMulticastInvokeGameplayCuesExecuted(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams 0x6ae67dc)
	void NetMulticastInvokeGameplayCuesAddedAndWhileActiveWithParams(struct FGameplayTagContainer& GameplayCueTags, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_WithParams 0x274e61c)
	void NetMulticastInvokeGameplayCueExecutedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueExecuted_FromSpec 0x267b1e0)
	void NetMulticastInvokeGameplayCueExecutedFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted (Underlying native function: NetMulticast_InvokeGameplayCueExecuted 0x6ae6648)
	void NetMulticastInvokeGameplayCueExecuted(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams 0x6ae64dc)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& GameplayCueParameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec (Underlying native function: NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec 0x6ae63dc)
	void NetMulticastInvokeGameplayCueAddedAndWhileActiveFromSpec(struct FGameplayEffectSpecForRPC& Spec, struct FPredictionKey& PredictionKey); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams (Underlying native function: NetMulticast_InvokeGameplayCueAdded_WithParams 0x26c6c64)
	void NetMulticastInvokeGameplayCueAddedWithParams(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayCueParameters& Parameters); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded (Underlying native function: NetMulticast_InvokeGameplayCueAdded 0x6ae6248)
	void NetMulticastInvokeGameplayCueAdded(struct FGameplayTag& GameplayCueTag, struct FPredictionKey& PredictionKey, struct FGameplayEffectContextHandle& EffectContext); // (Net | Native | Event | NetMulticast | Public)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec (Underlying native function: MakeOutgoingSpec 0x6ae5a40)
	struct FGameplayEffectSpecHandle MakeOutgoingSpec(class UClass*& GameplayEffectClass, float& Level, struct FGameplayEffectContextHandle& Context); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext (Underlying native function: MakeEffectContext 0x6ae5724)
	struct FGameplayEffectContextHandle MakeEffectContext(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats (Underlying native function: K2_InitStats 0x6ae55dc)
	void K2InitStats(class UClass*& Attributes, class UDataTable*& DataTable); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce (Underlying native function: K2_GiveAbilityAndActivateOnce 0x6ae54bc)
	struct FGameplayAbilitySpecHandle K2GiveAbilityAndActivateOnce(class UClass*& AbilityClass, int& Level, int& InputID); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbility (Underlying native function: K2_GiveAbility 0x6ae53b8)
	struct FGameplayAbilitySpecHandle K2GiveAbility(class UClass*& AbilityClass, int& Level, int& InputID); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive (Underlying native function: IsGameplayCueActive 0x6ae470c)
	bool IsGameplayCueActive(struct FGameplayTag& GameplayCueTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputConfirm (Underlying native function: InputConfirm 0x14f9120)
	void InputConfirm(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputCancel (Underlying native function: InputCancel 0x2346ed8)
	void InputCancel(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited (Underlying native function: GetUserAbilityActivationInhibited 0x6ae461c)
	bool GetUserAbilityActivationInhibited(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount (Underlying native function: GetGameplayTagCount 0x6ae37f0)
	int GetGameplayTagCount(struct FGameplayTag& GameplayTag); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude (Underlying native function: GetGameplayEffectMagnitude 0x6ae35fc)
	float GetGameplayEffectMagnitude(struct FActiveGameplayEffectHandle*& Handle, struct FGameplayAttribute& Attribute); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded (Underlying native function: GetGameplayEffectCount_IfLoaded 0x6ae338c)
	int GetGameplayEffectCountIfLoaded(struct TWeakObjectPtr<class UClass>& SoftSourceGameplayEffect, class UAbilitySystemComponent*& OptionalInstigatorFilterComponent, bool& bEnforceOnGoingCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount (Underlying native function: GetGameplayEffectCount 0x6ae3290)
	int GetGameplayEffectCount(class UClass*& SourceGameplayEffect, class UAbilitySystemComponent*& OptionalInstigatorFilterComponent, bool& bEnforceOnGoingCheck); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue (Underlying native function: GetGameplayAttributeValue 0x6ae2e5c)
	float GetGameplayAttributeValue(struct FGameplayAttribute& Attribute, bool& bFound); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAttributeSet (Underlying native function: GetAttributeSet 0x6ae1f74)
	class UAttributeSet* GetAttributeSet(class UClass*& AttributeSetClass); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAttributes (Underlying native function: GetAllAttributes 0x6ae1d58)
	void GetAllAttributes(struct TArray<struct FGameplayAttribute>& OutAttributes); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAbilities (Underlying native function: GetAllAbilities 0x6ae1bb8)
	void GetAllAbilities(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags (Underlying native function: GetActiveEffectsWithAllTags 0x1c71414)
	struct TArray<struct FActiveGameplayEffectHandle*> GetActiveEffectsWithAllTags(struct FGameplayTagContainer& Tags); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects (Underlying native function: GetActiveEffects 0x6ae1304)
	struct TArray<struct FActiveGameplayEffectHandle*> GetActiveEffects(struct FGameplayEffectQuery& Query); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags (Underlying native function: FindAllAbilitiesWithTags 0x6ae09b4)
	void FindAllAbilitiesWithTags(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagContainer& Tags, bool& bExactMatch); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID (Underlying native function: FindAllAbilitiesWithInputID 0x6ae08c4)
	void FindAllAbilitiesWithInputID(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, int& InputID); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery (Underlying native function: FindAllAbilitiesMatchingQuery 0x6ae0764)
	void FindAllAbilitiesMatchingQuery(struct TArray<struct FGameplayAbilitySpecHandle>& OutAbilityHandles, struct FGameplayTagQuery& Query); // (Final | Native | Public | HasOutParms | BlueprintCallable | Const)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility (Underlying native function: ClientTryActivateAbility 0x6ade134)
	void ClientTryActivateAbility(struct FGameplayAbilitySpecHandle& AbilityToActivate); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent (Underlying native function: ClientSetReplicatedEvent 0x6ade018)
	void ClientSetReplicatedEvent(struct TEnumAsByte<EAbilityGenericReplicatedEvent>& EventType, struct FGameplayAbilitySpecHandle& AbilityHandle, struct FPredictionKey& AbilityOriginalPredictionKey); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response (Underlying native function: ClientPrintDebug_Response 0x6addf44)
	void ClientPrintDebugResponse(struct TArray<struct FString>& Strings, int& GameFlags); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility (Underlying native function: ClientEndAbility 0x6adde54)
	void ClientEndAbility(struct FGameplayAbilitySpecHandle& AbilityToEnd, struct FGameplayAbilityActivationInfo& ActivationInfo); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility (Underlying native function: ClientCancelAbility 0x6addd64)
	void ClientCancelAbility(struct FGameplayAbilitySpecHandle& AbilityToCancel, struct FGameplayAbilityActivationInfo& ActivationInfo); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData (Underlying native function: ClientActivateAbilitySucceedWithEventData 0x6addbf0)
	void ClientActivateAbilitySucceedWithEventData(struct FGameplayAbilitySpecHandle& AbilityToActivate, struct FPredictionKey& PredictionKey, struct FGameplayEventData& TriggerEventData); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed (Underlying native function: ClientActivateAbilitySucceed 0x6addb04)
	void ClientActivateAbilitySucceed(struct FGameplayAbilitySpecHandle& AbilityToActivate, struct FPredictionKey& PredictionKey); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed (Underlying native function: ClientActivateAbilityFailed 0x6adda3c)
	void ClientActivateAbilityFailed(struct FGameplayAbilitySpecHandle& AbilityToActivate, int16_t& PredictionKey); // (Net | NetReliable | Native | Event | Protected | NetClient)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID (Underlying native function: ClearAllAbilitiesWithInputID 0x6add9bc)
	void ClearAllAbilitiesWithInputID(int& InputID); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilities (Underlying native function: ClearAllAbilities 0x6add9a8)
	void ClearAllAbilities(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAbility (Underlying native function: ClearAbility 0x6add91c)
	void ClearAbility(struct FGameplayAbilitySpecHandle& Handle); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget (Underlying native function: BP_ApplyGameplayEffectToTarget 0x268faa0)
	struct FActiveGameplayEffectHandle* BPApplyGameplayEffectToTarget(class UClass*& GameplayEffectClass, class UAbilitySystemComponent*& Target, float& Level, struct FGameplayEffectContextHandle& Context); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf (Underlying native function: BP_ApplyGameplayEffectToSelf 0x1730324)
	struct FActiveGameplayEffectHandle* BPApplyGameplayEffectToSelf(class UClass*& GameplayEffectClass, float& Level, struct FGameplayEffectContextHandle& EffectContext); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget (Underlying native function: BP_ApplyGameplayEffectSpecToTarget 0x6adcda0)
	struct FActiveGameplayEffectHandle* BPApplyGameplayEffectSpecToTarget(struct FGameplayEffectSpecHandle& SpecHandle, class UAbilitySystemComponent*& Target); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf (Underlying native function: BP_ApplyGameplayEffectSpecToSelf 0x6adcc88)
	struct FActiveGameplayEffectHandle* BPApplyGameplayEffectSpecToSelf(struct FGameplayEffectSpecHandle& SpecHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature (Has no native function)
	void AbilityConfirmOrCancelDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature (Has no native function)
	void AbilityAbilityKeyDelegateSignature(int& InputID); // (MulticastDelegate | Public | Delegate)
};

