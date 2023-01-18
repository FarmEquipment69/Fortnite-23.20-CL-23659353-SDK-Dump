// BlueprintGeneratedClass /RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C
// Size: 0xe60
class UGA_Riding_Creature_EnergyDepleted_Base_C : public UGA_NPC_Parent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xe58 (0x8)

	/* Functions */

	// Function /RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C.ExecuteUbergraph_GA_Riding_Creature_EnergyDepleted_Base (Has no native function)
	void ExecuteUbergraphGARidingCreatureEnergyDepletedBase(int& EntryPoint, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, bool& K2NodeSwitchEnumCmpSuccess, bool& K2NodeEventbWasCancelled, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class UCreatureBaseRidableComponent_C*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue); // (Final | 0x00008000 | HasDefaults)
};

