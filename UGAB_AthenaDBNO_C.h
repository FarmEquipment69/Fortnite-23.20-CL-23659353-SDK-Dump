// BlueprintGeneratedClass /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C
// Size: 0xcd1
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UAnimMontage* DeathMontage; // 0xb28 (0x8)
	struct FVector DeathHitDirection; // 0xb30 (0x18)
	struct FHitResult DeathHitResult; // 0xb48 (0xe0)
	struct FGameplayTagContainer DamageTags; // 0xc28 (0x20)
	struct FGameplayTagContainer GameplayStatusAfflicted; // 0xc48 (0x20)
	class UAnimMontage* DeathMontageSkydive; // 0xc68 (0x8)
	struct FActiveGameplayEffectHandle* DBNOBleedGEHandle; // 0xc70 (0x8)
	struct FName HolsterId; // 0xc78 (0x4)
	unsigned char unreflected_c7c[0x4]; // 0xc7c (0x4) 
	class UAnimMontage* DeathMontageSwimming; // 0xc80 (0x8)
	class AFortPlayerPawnAthena* FortPlayerPawn; // 0xc88 (0x8)
	class UClass* DBNOStartGEClass; // 0xc90 (0x8)
	bool ImprovedDBNO; // 0xc98 (0x1)
	unsigned char unreflected_c99[0x7]; // 0xc99 (0x7) 
	struct FGameplayTagContainer OldDBNOBlockTags; // 0xca0 (0x20)
	struct FActiveGameplayEffectHandle* GEHandleHealthBonus; // 0xcc0 (0x8)
	double TenacityAmount; // 0xcc8 (0x8)
	enum ETenacityType TenacityType; // 0xcd0 (0x1)

	/* Functions */

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Custom Tenacity (Has no native function)
	void GetCustomTenacity(double& Tenacity); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Max Health Tenacity (Has no native function)
	void GetMaxHealthTenacity(double& Tenacity, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, bool& CallFuncGetFloatAttributebSuccessfullyFoundAttribute, float& CallFuncGetFloatAttributeReturnValue, double& K2NodeFunctionResultTenacityImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Default Tenacity Amount (Has no native function)
	void GetDefaultTenacityAmount(double& Tenacity, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, bool& CallFuncGetFloatAttributebSuccessfullyFoundAttribute, float& CallFuncGetFloatAttributeReturnValue, bool& K2NodeSwitchEnumCmpSuccess, double& CallFuncSubtractDoubleDoubleReturnValue, double& K2NodeFunctionResultTenacityImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.Apply Health Bonus (Has no native function)
	void ApplyHealthBonus(struct FActiveGameplayEffectHandle*& EffectHandle, double& LocalTenacityAmount, double& CallFuncGetCustomTenacityTenacity, double& CallFuncGetMaxHealthTenacityTenacity, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingGameplayEffectSpecReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct FGameplayEffectSpecHandle& CallFuncAssignTagSetByCallerMagnitudeReturnValue, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue, float& CallFuncAssignTagSetByCallerMagnitudeMagnitudeImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.ApplyBleeding (Has no native function)
	void ApplyBleeding(struct FActiveGameplayEffectHandle*& EffectHandle, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get DBNO Montage (Has no native function)
	class UAnimMontage* GetDBNOMontage(); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.Get Initial Heal Amount (Has no native function)
	void GetInitialHealAmount(double& Health, double& CallFuncGetCustomTenacityTenacity, double& CallFuncGetMaxHealthTenacityTenacity, double& CallFuncGetDefaultTenacityAmountTenacity, bool& K2NodeSwitchEnumCmpSuccess); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection (Has no native function)
	void InitializeDeathHitDirection(struct FGameplayEventData& EventHitData, struct FVector& CallFuncGetImpulseDataImpulseDirection, float& CallFuncGetImpulseDataKnockbackMagnitude, float& CallFuncGetImpulseDataKnockbackZAngle, struct FHitResult& CallFuncEffectContextGetHitResultReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F (Has no native function)
	void OnCancelledF0F6785443BD2E74F5591884CB19F35F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F (Has no native function)
	void OnInterruptedF0F6785443BD2E74F5591884CB19F35F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F (Has no native function)
	void OnBlendOutF0F6785443BD2E74F5591884CB19F35F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F (Has no native function)
	void OnCompletedF0F6785443BD2E74F5591884CB19F35F(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6 (Has no native function)
	void OnStateInterruptedC85094F843D5075FE4872C95AFC5D6B6(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6 (Has no native function)
	void OnStateEndedC85094F843D5075FE4872C95AFC5D6B6(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45 (Has no native function)
	void OnFinish4C169D40441E45B462D83CBBA67F6E45(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.DropHeldObjects (Has no native function)
	void DropHeldObjects(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO (Has no native function)
	void ExecuteUbergraphGABAthenaDBNO(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, class UAbilityTask_StartAbilityState*& CallFuncStartAbilityStateReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, bool& CallFuncIsValidReturnValue, class UAbilityTask_WaitDelay*& CallFuncWaitDelayReturnValue, bool& CallFuncIsImprovedDBNOEnabledReturnValue, bool& CallFuncIsValidReturnValue1, struct FGameplayEventData& K2NodeEventEventData, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, double& CallFuncGetInitialHealAmountHealth, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, bool& K2NodeEventbWasCancelled, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UAnimMontage*& CallFuncGetDBNOMontageReturnValue, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, bool& CallFuncIsValidReturnValue2, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, struct FActiveGameplayEffectHandle*& CallFuncApplyBleedingEffectHandle, class UFortHeldObjectComponent*& CallFuncGetHeldObjectComponentAttachedToPlayerReturnValue, bool& CallFuncIsValidReturnValue3, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue2, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingGameplayEffectSpecReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FGameplayEffectSpecHandle& CallFuncAssignSetByCallerMagnitudeReturnValue, class UFortAbilitySystemComponent*& K2NodeDynamicCastAsFortAbilitySystemComponent, bool& K2NodeDynamicCastbSuccess2, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue3, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, class UFortAbilitySystemComponent*& K2NodeDynamicCastAsFortAbilitySystemComponent1, bool& K2NodeDynamicCastbSuccess3, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue4, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn2, bool& K2NodeDynamicCastbSuccess4, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess5, struct FActiveGameplayEffectHandle*& CallFuncApplyHealthBonusEffectHandle, float& CallFuncAssignSetByCallerMagnitudeMagnitudeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

