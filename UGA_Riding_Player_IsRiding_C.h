// BlueprintGeneratedClass /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
// Size: 0xb38
class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UAnimMontage* SettleMontageRef; // 0xb28 (0x8)
	class UFortAbilityTask_PlayMontageWaitTarget* settleMontageTask; // 0xb30 (0x8)

	/* Functions */

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C.ExecuteUbergraph_GA_Riding_Player_IsRiding (Has no native function)
	void ExecuteUbergraphGARidingPlayerIsRiding(int& EntryPoint, bool& CallFuncIsValidReturnValue, bool& K2NodeEventbWasCancelled, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo); // (Final | 0x00008000 | HasDefaults)
};

