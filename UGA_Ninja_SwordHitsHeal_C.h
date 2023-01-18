// BlueprintGeneratedClass /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C
// Size: 0xcf0
class UGA_Ninja_SwordHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xcc8 (0x8)
	struct FGameplayTagContainer TCRequiredTags; // 0xcd0 (0x20)

	/* Functions */

	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.SetupAbility (Has no native function)
	void SetupAbility(class UAbilitySystemComponent*& AbilitySystem); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ShouldAbilityRespondToEvent (Has no native function)
	bool K2ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayEventData& Payload); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.ExecuteUbergraph_GA_Ninja_SwordHitsHeal (Has no native function)
	void ExecuteUbergraphGANinjaSwordHitsHeal(int& EntryPoint, struct FGameplayEventData& K2NodeEventEventData); // (Final | 0x00008000 | HasDefaults)
};

