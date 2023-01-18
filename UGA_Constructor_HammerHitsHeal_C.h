// BlueprintGeneratedClass /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
// Size: 0xcf0
class UGA_Constructor_HammerHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xcc8 (0x8)
	struct FGameplayTagContainer TCRequiredTags; // 0xcd0 (0x20)

	/* Functions */

	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility (Has no native function)
	void SetupAbility(class UAbilitySystemComponent*& AbilitySystem); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent (Has no native function)
	bool K2ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayEventData& Payload); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal (Has no native function)
	void ExecuteUbergraphGAConstructorHammerHitsHeal(int& EntryPoint, struct FGameplayEventData& K2NodeEventEventData); // (Final | 0x00008000 | HasDefaults)
};

