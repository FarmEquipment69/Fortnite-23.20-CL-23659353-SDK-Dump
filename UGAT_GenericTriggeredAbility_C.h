// BlueprintGeneratedClass /Game/Abilities/Player/Parents/GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
// Size: 0xbf2
class UGAT_GenericTriggeredAbility_C : public UGAT_TriggeredAbility_C
{
	unsigned char unreflected_b2d[0x3]; // 0xb2d (0x3) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb30 (0x8)
	struct FGameplayEventData EventData; // 0xb38 (0xb0)
	class AFortPlayerPawn* FortPlayerPawn; // 0xbe8 (0x8)
	bool isAutoCommitted; // 0xbf0 (0x1)
	bool isStaminaLockedOut; // 0xbf1 (0x1)

	/* Functions */

	// Function /Game/Abilities/Player/Parents/GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility (Has no native function)
	void ExecuteUbergraphGATGenericTriggeredAbility(int& EntryPoint, bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FGameplayEventData& K2NodeEventEventData); // (Final | 0x00008000 | HasDefaults)
};

