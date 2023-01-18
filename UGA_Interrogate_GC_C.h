// BlueprintGeneratedClass /Game/Abilities/Player/Interrogation/GA_Interrogate_GC.GA_Interrogate_GC_C
// Size: 0xb2c
class UGA_Interrogate_GC_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag Cue; // 0xb28 (0x4)

	/* Functions */

	// Function /Game/Abilities/Player/Interrogation/GA_Interrogate_GC.GA_Interrogate_GC_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GA_Interrogate_GC.GA_Interrogate_GC_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GA_Interrogate_GC.GA_Interrogate_GC_C.ExecuteUbergraph_GA_Interrogate_GC (Has no native function)
	void ExecuteUbergraphGAInterrogateGC(int& EntryPoint, bool& CallFuncIsServerReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, struct FGameplayEffectContextHandle& CallFuncGetGrantedByEffectContextReturnValue, class UObject*& CallFuncEffectContextGetSourceObjectReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo); // (Final | 0x00008000 | HasDefaults)
};

