// BlueprintGeneratedClass /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C
// Size: 0xb28
class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)

	/* Functions */

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C.ExecuteUbergraph_GA_Riding_Creature_Burt_SprintCharge (Has no native function)
	void ExecuteUbergraphGARidingCreatureBurtSprintCharge(int& EntryPoint, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, bool& K2NodeEventbWasCancelled, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, bool& CallFuncK2CommitAbilityReturnValue, bool& CallFuncIsValidReturnValue, class UFortAthenaCollisionReactionComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncRunReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, class UFortAthenaCollisionReactionComponent*& CallFuncGetComponentByClassReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3); // (Final | 0x00008000 | HasDefaults)
};

