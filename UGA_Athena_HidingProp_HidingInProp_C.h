// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C
// Size: 0xb70
class UGA_Athena_HidingProp_HidingInProp_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xb28 (0x20)
	struct FScalableFloat RowbDisablePlayerCollision; // 0xb48 (0x28)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.GrapplerFailSafe (Has no native function)
	void GrapplerFailSafe(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C.ExecuteUbergraph_GA_Athena_HidingProp_HidingInProp (Has no native function)
	void ExecuteUbergraphGAAthenaHidingPropHidingInProp(int& EntryPoint, bool& CallFuncGetValueAsBoolReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UFortAbilitySystemComponent*& K2NodeDynamicCastAsFortAbilitySystemComponent, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue, bool& K2NodeEventbWasCancelled, bool& CallFuncGetValueAsBoolReturnValue1, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue2, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess2, float& CallFuncPlayAnimMontageReturnValue); // (Final | 0x00008000)
};

