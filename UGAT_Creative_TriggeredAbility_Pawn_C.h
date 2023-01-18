// BlueprintGeneratedClass /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C
// Size: 0xb58
class UGAT_Creative_TriggeredAbility_Pawn_C : public UGAT_Creative_TriggeredAbility_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb48 (0x8)
	class AFortPawn* AbilityOwner; // 0xb50 (0x8)

	/* Functions */

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.SetupPawnActorAbility (Has no native function)
	void SetupPawnActorAbility(class AFortPawn*& FortPawn, class AFortPawn*& LocalFortPawn, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility_Pawn.GAT_Creative_TriggeredAbility_Pawn_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility_Pawn (Has no native function)
	void ExecuteUbergraphGATCreativeTriggeredAbilityPawn(int& EntryPoint, struct FGameplayEventData& K2NodeEventEventData, class AFortPawn*& CallFuncSetupPawnActorAbilityFortPawn); // (Final | 0x00008000 | HasDefaults)
};

