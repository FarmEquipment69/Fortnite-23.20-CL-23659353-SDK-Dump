// BlueprintGeneratedClass /Game/Athena/Items/Consumables/PurpleStuff/GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C
// Size: 0xb40
class UGAT_Athena_PurpleStuff_C : public UGAT_TriggeredAbility_C
{
	unsigned char unreflected_b2d[0x3]; // 0xb2d (0x3) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb30 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb38 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/PurpleStuff/GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/PurpleStuff/GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C.ExecuteUbergraph_GAT_Athena_PurpleStuff (Has no native function)
	void ExecuteUbergraphGATAthenaPurpleStuff(int& EntryPoint, bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue); // (Final | 0x00008000 | HasDefaults)
};

