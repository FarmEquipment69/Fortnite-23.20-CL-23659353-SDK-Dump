// BlueprintGeneratedClass /Game/Athena/DrivableVehicles/GA_AthenaExitVehicle.GA_AthenaExitVehicle_C
// Size: 0xb50
class UGA_AthenaExitVehicle_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag KeepDBNOplayersinVehicles; // 0xb28 (0x4)
	unsigned char unreflected_b2c[0x4]; // 0xb2c (0x4) 
	struct FGameplayTagContainer EventDamageDiedTags; // 0xb30 (0x20)

	/* Functions */

	// Function /Game/Athena/DrivableVehicles/GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/DrivableVehicles/GA_AthenaExitVehicle.GA_AthenaExitVehicle_C.ExecuteUbergraph_GA_AthenaExitVehicle (Has no native function)
	void ExecuteUbergraphGAAthenaExitVehicle(int& EntryPoint, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncK2CommitAbilityReturnValue, float& CallFuncGetHealthReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, class AActor*& CallFuncGetVehicleActorReturnValue, class AFortAthenaVehicle*& CallFuncServerOnExitVehicleReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncHasAuthorityReturnValue, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, bool& TempboolVariable, bool& CallFuncBooleanANDReturnValue, double& CallFuncLessEqualDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

