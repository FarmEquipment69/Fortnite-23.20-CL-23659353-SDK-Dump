// BlueprintGeneratedClass /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C
// Size: 0xb48
class UGAT_Creative_TriggeredAbility_C : public UGAT_TriggeredAbility_C
{
	unsigned char unreflected_b2d[0x3]; // 0xb2d (0x3) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb30 (0x8)
	struct TArray<struct FName> OverriddenPropertyNames; // 0xb38 (0x10)

	/* Functions */

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.IsPropertyOverridden (Has no native function)
	void IsPropertyOverridden(struct FName& PropertyName, bool& bResult, bool& CallFuncArrayContainsReturnValue); // (Protected | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.SetupAbilityFailsafeTimer (Has no native function)
	void SetupAbilityFailsafeTimer(double& Duration); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.AbilityTimeout (Has no native function)
	void AbilityTimeout(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Parents/GAT_Creative_TriggeredAbility.GAT_Creative_TriggeredAbility_C.ExecuteUbergraph_GAT_Creative_TriggeredAbility (Has no native function)
	void ExecuteUbergraphGATCreativeTriggeredAbility(int& EntryPoint, struct FString& CallFuncGetDisplayNameReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FString& CallFuncConcatStrStrReturnValue, struct FString& CallFuncConcatStrStrReturnValue1, struct FGameplayEventData& K2NodeEventEventData, struct TArray<struct FName>& CallFuncApplySourcePropertyOverridesOverriddenPropertyNames, bool& CallFuncApplySourcePropertyOverridesReturnValue, double& K2NodeCustomEventDuration, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

