// BlueprintGeneratedClass /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
// Size: 0xb78
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb48 (0x8)
	bool UseHeroLoadoutSystem; // 0xb50 (0x1)
	bool bUseMidAbilityCosts; // 0xb51 (0x1)
	bool bTriggerCooldownOnAbilityEnd; // 0xb52 (0x1)
	unsigned char unreflected_b53[0x5]; // 0xb53 (0x5) 
	class UAbilitySystemComponent* OwnerASC; // 0xb58 (0x8)
	class UClass* GECooldownModifier; // 0xb60 (0x8)
	struct TArray<struct FActiveGameplayEffectHandle*> ActiveCooldownModifiers; // 0xb68 (0x10)

	/* Functions */

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.IncrementAbilityCostAndCooldown (Has no native function)
	void IncrementAbilityCostAndCooldown(double& EnergyCost, bool& AdjustCooldown, double& CooldownIncrement, struct TArray<struct FActiveGameplayEffectHandle*>& ActiveCooldownModifiers, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncIsValidClassReturnValue, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingSpecReturnValue, bool& CallFuncBooleanANDReturnValue, struct FGameplayEffectSpecHandle& CallFuncAssignTagSetByCallerMagnitudeReturnValue, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue, int& CallFuncArrayAddReturnValue, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingSpecReturnValue1, struct FGameplayEffectSpecHandle& CallFuncAssignTagSetByCallerMagnitudeReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue1, float& CallFuncAssignTagSetByCallerMagnitudeMagnitudeImplicitCast, float& CallFuncAssignTagSetByCallerMagnitudeMagnitudeImplicitCast1); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.CommitAbilityWithEvent (Has no native function)
	void CommitAbilityWithEvent(bool& Passed, bool& CallFuncK2CheckAbilityCooldownReturnValue, bool& CallFuncK2CheckAbilityCostReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncK2CommitAbilityReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C.ExecuteUbergraph_GAT_ActiveAbility_Hero (Has no native function)
	void ExecuteUbergraphGATActiveAbilityHero(int& EntryPoint, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, bool& K2NodeEventbWasCancelled, int& CallFuncAddIntIntReturnValue, bool& CallFuncK2CommitAbilityCooldownReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, struct FActiveGameplayEffectHandle*& CallFuncArrayGetItem, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue); // (Final | 0x00008000 | HasDefaults)
};

