// BlueprintGeneratedClass /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
// Size: 0xb50
class UGAB_AthenaDBNORevive_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FGameplayTag ECAppliedEffect; // 0xb28 (0x4)
	unsigned char unreflected_b2c[0x4]; // 0xb2c (0x4) 
	class AFortPlayerPawn* PlayerPawn; // 0xb30 (0x8)
	struct FGameplayTag ResurrectCue; // 0xb38 (0x4)
	struct FGameplayTag ResurrectAthenaCue; // 0xb3c (0x4)
	class UAnimMontage* DBNOMontageOutro; // 0xb40 (0x8)
	class UAnimMontage* DBNOMontageOutroSwimming; // 0xb48 (0x8)

	/* Functions */

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Get DBNO Outro Montage (Has no native function)
	void GetDBNOOutroMontage(class UAnimMontage*& DBNOMontageOutro, bool& CallFuncIsSurfaceSwimmingReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6 (Has no native function)
	void Completed23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6 (Has no native function)
	void Cancelled23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6 (Has no native function)
	void Triggered23712DBC45E68EA0C91A4895CBD8B3A6(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609 (Has no native function)
	void Cancelled779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609 (Has no native function)
	void Targeted779E7BAA49FEAD286C5164B83CDFD609(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Removed_620488CD4F8BFC035EC7328664732683 (Has no native function)
	void Removed620488CD4F8BFC035EC7328664732683(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive (Has no native function)
	void ExecuteUbergraphGABAthenaDBNORevive(int& EntryPoint, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData3, struct FGameplayTag& K2NodeCustomEventApplicationTag3, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FGameplayTag& TempstructVariable2, struct FGameplayAbilityTargetDataHandle& TempstructVariable3, class UFortAbilityTask_WaitTargetSelection*& CallFuncWaitTargetSelectionReturnValue, bool& CallFuncIsValidReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UAbilityTask_WaitGameplayTagRemoved*& CallFuncWaitGameplayTagRemoveReturnValue, struct FGameplayEventData& K2NodeEventEventData, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsServerReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, struct FVector& CallFuncGetSocketLocationReturnValue, struct FRotator& CallFuncGetSocketRotationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncConvRotatorToVectorReturnValue, struct FVector_NetQuantize10& CallFuncMakeVectorNetQuantize10ReturnValue, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector_NetQuantizeNormal& CallFuncMakeVectorNetQuantizeNormalReturnValue, bool& K2NodeEventbWasCancelled, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData4, struct FGameplayTag& K2NodeCustomEventApplicationTag4, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, class UAnimMontage*& CallFuncGetDBNOOutroMontageDBNOMontageOutro, struct FFortGameplayAbilityMontageInfo& K2NodeMakeStructFortGameplayAbilityMontageInfo, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageInfoAndWaitForTriggerReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncIsValidReturnValue2); // (Final | 0x00008000 | HasDefaults)
};

