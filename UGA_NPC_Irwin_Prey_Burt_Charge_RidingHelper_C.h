// BlueprintGeneratedClass /RidingContent/Abilities/Irwin/GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C
// Size: 0xb58
class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UControllableRidableComponent* ControllableRidableComponentCached; // 0xb28 (0x8)
	class AFortAIPawn* FortAIPawnCached; // 0xb30 (0x8)
	double InitialMaxAcceleration; // 0xb38 (0x8)
	double MaxRotationRateYaw; // 0xb40 (0x8)
	struct FGameplayTag GCNBoostTag; // 0xb48 (0x4)
	unsigned char unreflected_b4c[0x4]; // 0xb4c (0x4) 
	class UFortGameplayAbility* TargetAbilityCached; // 0xb50 (0x8)

	/* Functions */

	// Function /RidingContent/Abilities/Irwin/GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /RidingContent/Abilities/Irwin/GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.FireBoostEffectsOnPlayerMulti (Has no native function)
	void FireBoostEffectsOnPlayerMulti(class AActor*& PlayerTarget); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Abilities/Irwin/GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C.ExecuteUbergraph_GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper (Has no native function)
	void ExecuteUbergraphGANPCIrwinPreyBurtChargeRidingHelper(int& EntryPoint, bool& CallFuncIsValidReturnValue, struct FGameplayEventData& K2NodeEventEventData, bool& CallFuncIsValidReturnValue1, class UFortGameplayAbility*& K2NodeDynamicCastAsFortGameplayAbility, bool& K2NodeDynamicCastbSuccess, bool& GameplayTagsK2NodeSwitchGameplayTagCmpSuccess, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortAIPawn*& K2NodeDynamicCastAsFortAIPawn, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue2, class UControllableRidableComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncMakeRotatorReturnValue, class AActor*& K2NodeCustomEventPlayerTarget, bool& CallFuncIsValidReturnValue5, bool& CallFuncIsValidReturnValue6, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue7, bool& CallFuncK2HasAuthorityReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncIsValidReturnValue8, double& K2NodeVariableSetInitialMaxAccelerationImplicitCast, float& K2NodeVariableSetMaxAccelerationImplicitCast, float& CallFuncMakeRotatorYawImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

