// BlueprintGeneratedClass /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
// Size: 0xb34
class UGA_Athena_Tethered_PassiveTriggered_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag GCNBoostTag; // 0xb28 (0x4)
	struct FGameplayTag GCNJumpTag; // 0xb2c (0x4)
	struct FGameplayTag ZiplineExit; // 0xb30 (0x4)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C.ExecuteUbergraph_GA_Athena_Tethered_PassiveTriggered (Has no native function)
	void ExecuteUbergraphGAAthenaTetheredPassiveTriggered(int& EntryPoint, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayEventData& K2NodeEventEventData, bool& GameplayTagsK2NodeSwitchGameplayTagCmpSuccess, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, class AActor*& CallFuncGetOwningActorFromActorInfoReturnValue); // (Final | 0x00008000 | HasDefaults)
};

