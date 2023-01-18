// BlueprintGeneratedClass /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
// Size: 0xc3a
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb78 (0x8)
	struct FGameplayEventData EventData; // 0xb80 (0xb0)
	class AFortPawn* CommandoPlayerPawn; // 0xc30 (0x8)
	bool isAutoCommitted; // 0xc38 (0x1)
	bool isStaminaLockedOut; // 0xc39 (0x1)

	/* Functions */

	// Function /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.ExecuteUbergraph_GAT_CommandoActiveAbility (Has no native function)
	void ExecuteUbergraphGATCommandoActiveAbility(int& EntryPoint, bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue); // (Final | 0x00008000 | HasDefaults)
};

