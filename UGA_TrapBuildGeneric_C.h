// BlueprintGeneratedClass /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
// Size: 0xb2c
class UGA_TrapBuildGeneric_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag PlacedCue; // 0xb28 (0x4)

	/* Functions */

	// Function /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.ExecuteUbergraph_GA_TrapBuildGeneric (Has no native function)
	void ExecuteUbergraphGATrapBuildGeneric(int& EntryPoint, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncApplyGameplayEffectContainerReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue); // (Final | 0x00008000 | HasDefaults)
};

