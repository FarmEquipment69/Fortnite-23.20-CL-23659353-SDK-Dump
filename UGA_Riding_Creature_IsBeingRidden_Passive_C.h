// BlueprintGeneratedClass /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
// Size: 0xe60
class UGA_Riding_Creature_IsBeingRidden_Passive_C : public UGA_NPC_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xe58 (0x8)

	/* Functions */

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C.ExecuteUbergraph_GA_Riding_Creature_IsBeingRidden_Passive (Has no native function)
	void ExecuteUbergraphGARidingCreatureIsBeingRiddenPassive(int& EntryPoint, bool& K2NodeEventbWasCancelled, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo); // (Final | 0x00008000 | HasDefaults)
};

