// BlueprintGeneratedClass /Game/Athena/Items/Consumables/PurpleStuff/GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C
// Size: 0xb50
class UGA_Athena_Slurp_OLD_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb28 (0x8)
	int IncreCheck; // 0xb30 (0x4)
	unsigned char unreflected_b34[0x4]; // 0xb34 (0x4) 
	double MaxTicks; // 0xb38 (0x8)
	struct FTimerHandle* TimerHandle; // 0xb40 (0x8)
	double TickRate; // 0xb48 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/Consumables/PurpleStuff/GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/PurpleStuff/GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/PurpleStuff/GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ApplyHealthOrShield (Has no native function)
	void ApplyHealthOrShield(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Consumables/PurpleStuff/GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C.ExecuteUbergraph_GA_Athena_Slurp_OLD (Has no native function)
	void ExecuteUbergraphGAAthenaSlurpOLD(int& EntryPoint, bool& K2NodeEventbWasCancelled, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, bool& CallFuncK2CommitAbilityReturnValue, bool& CallFuncIsDBNOReturnValue, float& CallFuncGetHealthReturnValue, float& CallFuncGetMaxHealthReturnValue, bool& CallFuncLessDoubleDoubleReturnValue, int& CallFuncAddIntIntReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult1, float& CallFuncEvaluateCurveTableRowOutXY1, bool& K2NodeSwitchEnumCmpSuccess, bool& K2NodeSwitchEnumCmpSuccess1, int& TempintVariable, int& CallFuncFTruncReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncLessIntIntReturnValue, double& CallFuncLessDoubleDoubleAImplicitCast, double& CallFuncLessDoubleDoubleBImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, double& K2NodeVariableSetTickRateImplicitCast, double& K2NodeVariableSetMaxTicksImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

