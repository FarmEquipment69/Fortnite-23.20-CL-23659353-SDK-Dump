// BlueprintGeneratedClass /Game/Athena/DrivableVehicles/GA_AthenaInVehicle.GA_AthenaInVehicle_C
// Size: 0xb48
class UGA_AthenaInVehicle_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTagContainer ExitTag; // 0xb28 (0x20)

	/* Functions */

	// Function /Game/Athena/DrivableVehicles/GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_AthenaInVehicle.GA_AthenaInVehicle_C.ExecuteUbergraph_GA_AthenaInVehicle (Has no native function)
	void ExecuteUbergraphGAAthenaInVehicle(int& EntryPoint, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, bool& CallFuncIsValidReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, bool& K2NodeEventbWasCancelled, bool& CallFuncK2CommitAbilityReturnValue, bool& CallFuncTryActivateAbilitiesByTagReturnValue); // (Final | 0x00008000 | HasDefaults)
};

