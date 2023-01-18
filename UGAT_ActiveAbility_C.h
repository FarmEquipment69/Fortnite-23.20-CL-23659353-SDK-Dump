// BlueprintGeneratedClass /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C
// Size: 0xb48
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag TCAbilitiesGenericActiveAbilityActivate; // 0xb28 (0x4)
	struct FName NSavedCollisionChannel; // 0xb2c (0x4)
	class UClass* GEKnockBackImmunity; // 0xb30 (0x8)
	struct FActiveGameplayEffectHandle* GEHKnockBackImmunity; // 0xb38 (0x8)
	bool bPlayerHolsterState; // 0xb40 (0x1)
	unsigned char unreflected_b41[0x3]; // 0xb41 (0x3) 
	struct FGameplayTag TCAbilitiesGenericActiveAbilityEndAbility; // 0xb44 (0x4)

	/* Functions */

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.EndAbilityWithReason (Has no native function)
	void EndAbilityWithReason(struct FString& Reason); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.SendHeroAbilityActivationEvent (Has no native function)
	void SendHeroAbilityActivationEvent(struct FGameplayTag& TEventHeroAbilityActivate); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.SetHolsterWeaponWithName (Has no native function)
	void SetHolsterWeaponWithName(class AFortPawn*& TargetFortPawn, bool& ShouldHolster, bool& PlayEquipAnim, bool& ShowDebugPrintName, bool& IsWeaponHolstered, bool& OperationSuccessful, bool& bOperationSuccessful, bool& CallFuncBooleanXORReturnValue, class UClass*& CallFuncGetObjectClassReturnValue, struct FString& CallFuncGetClassDisplayNameReturnValue, struct FName& CallFuncConvStringToNameReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ShouldAbilityRespondToEvent (Has no native function)
	bool K2ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayEventData& Payload); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.ActiveAbilitySetup (Has no native function)
	void ActiveAbilitySetup(class UAbilitySystemComponent*& AbilitySystemIn, class UAbilitySystemComponent*& AbilitySystemOut); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity (Has no native function)
	void SetKnockbackImmunity(bool& ImmunityOn, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingGameplayEffectSpecReturnValue, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision (Has no native function)
	void SetPawnCollision(class AFortPawn*& FortPawn, bool& CollisionOn, bool& CallFuncNotEqualNameNameReturnValue, struct FName& CallFuncGetCollisionProfileNameReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility (Has no native function)
	void ExecuteUbergraphGATActiveAbility(int& EntryPoint, bool& K2NodeEventbWasCancelled); // (Final | 0x00008000)
};

