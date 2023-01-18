// BlueprintGeneratedClass /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C
// Size: 0xb2d
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag TCAbilitiesGenericTriggeredAbilityActivate; // 0xb28 (0x4)
	bool bPlayerHolsterState; // 0xb2c (0x1)

	/* Functions */

	// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C.EndAbilityWithReason (Has no native function)
	void EndAbilityWithReason(struct FString& Reason); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C.SetHolsterWeaponWithName (Has no native function)
	void SetHolsterWeaponWithName(class AFortPawn*& TargetFortPawn, bool& ShouldHolster, bool& PlayEquipAnim, bool& ShowDebugPrintName, bool& IsWeaponHolstered, bool& OperationSuccessful, bool& bOperationSuccessful, bool& CallFuncBooleanXORReturnValue, class UClass*& CallFuncGetObjectClassReturnValue, struct FString& CallFuncGetClassDisplayNameReturnValue, struct FName& CallFuncConvStringToNameReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C.TriggeredAbilitySetup (Has no native function)
	void TriggeredAbilitySetup(class UAbilitySystemComponent*& AbilitySystemIn, class UAbilitySystemComponent*& AbilitySystemOut); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility (Has no native function)
	void ExecuteUbergraphGATTriggeredAbility(int& EntryPoint, struct FGameplayEventData& K2NodeEventEventData); // (Final | 0x00008000 | HasDefaults)
};

