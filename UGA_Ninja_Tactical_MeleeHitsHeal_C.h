// BlueprintGeneratedClass /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
// Size: 0xcc8
class UGA_Ninja_Tactical_MeleeHitsHeal_C : public UGAT_GenericTriggeredAbility_C
{
	unsigned char unreflected_bf2[0x6]; // 0xbf2 (0x6) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xbf8 (0x8)
	struct FGameplayTag EventActivation; // 0xc00 (0x4)
	struct FGameplayTag EventComplete; // 0xc04 (0x4)
	class UClass* GENinjaTacticalMeleeHitsHeal; // 0xc08 (0x8)
	struct FGameplayTagContainer TCMelee; // 0xc10 (0x20)
	int MeleeCount; // 0xc30 (0x4)
	unsigned char unreflected_c34[0x4]; // 0xc34 (0x4) 
	double LastHitSwingTime; // 0xc38 (0x8)
	double BaseHealValue; // 0xc40 (0x8)
	double FinalHealValue; // 0xc48 (0x8)
	struct FName DataRowName; // 0xc50 (0x4)
	unsigned char unreflected_c54[0x4]; // 0xc54 (0x4) 
	struct FGameplayAttribute AttributeHealingSourceBaseMultiplier; // 0xc58 (0x38)
	struct FGameplayAttribute AttributeHealingSource; // 0xc90 (0x38)

	/* Functions */

	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.SetupAbility (Has no native function)
	void SetupAbility(class UAbilitySystemComponent*& AbilitySystem, bool& CallFuncGetFloatAttributeFromAbilitySystemComponentbSuccessfullyFoundAttribute, float& CallFuncGetFloatAttributeFromAbilitySystemComponentReturnValue, struct FFortBaseWeaponStats& CallFuncGetDataTableRowFromNameOutRow, bool& CallFuncGetDataTableRowFromNameReturnValue, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncEvaluateAttributeValueWithTagsAndBasebSuccess, float& CallFuncEvaluateAttributeValueWithTagsAndBaseReturnValue, double& CallFuncMultiplyDoubleDoubleBImplicitCast, double& K2NodeVariableSetBaseHealValueImplicitCast, float& CallFuncEvaluateAttributeValueWithTagsAndBaseBaseValueImplicitCast, double& K2NodeVariableSetFinalHealValueImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ShouldAbilityRespondToEvent (Has no native function)
	bool K2ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayEventData& Payload); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal (Has no native function)
	void ExecuteUbergraphGANinjaTacticalMeleeHitsHeal(int& EntryPoint, int& TempintVariable, bool& CallFuncGreaterIntIntReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FGameplayEventData& K2NodeEventEventData, bool& CallFuncK2CommitAbilityReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, int& CallFuncAddIntIntReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, bool& K2NodeEventbWasCancelled, double& CallFuncGetGameTimeInSecondsReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncAbsReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue); // (Final | 0x00008000 | HasDefaults)
};

