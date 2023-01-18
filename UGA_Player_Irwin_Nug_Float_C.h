// BlueprintGeneratedClass /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C
// Size: 0xbc0
class UGA_Player_Irwin_Nug_Float_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FName FloatTask; // 0xb28 (0x4)
	struct FGameplayTag FloatStart; // 0xb2c (0x4)
	struct FGameplayTag FloatEnd; // 0xb30 (0x4)
	unsigned char unreflected_b34[0x4]; // 0xb34 (0x4) 
	class AActor* NugRef; // 0xb38 (0x8)
	class AFortPlayerPawn* OwningPlayerPawn; // 0xb40 (0x8)
	struct FActiveGameplayEffectHandle* GEHandleQuest; // 0xb48 (0x8)
	class UClass* GELandTagGCN; // 0xb50 (0x8)
	class UClass* GEPlayerGlide; // 0xb58 (0x8)
	struct FActiveGameplayEffectHandle* GEHandleGlide; // 0xb60 (0x8)
	bool CanGlide; // 0xb68 (0x1)
	unsigned char unreflected_b69[0x7]; // 0xb69 (0x7) 
	struct FScalableFloat FloatLaunchXY; // 0xb70 (0x28)
	struct FScalableFloat FloatLaunchZ; // 0xb98 (0x28)

	/* Functions */

	// Function /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.Set Refs (Has no native function)
	void SetRefs(class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AActor*& CallFuncGetHeldObjectAttachedToPlayerReturnValue, bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.OnSync_AA9C58E84960A4F80E0BF99666A4FA98 (Has no native function)
	void OnSyncAA9C58E84960A4F80E0BF99666A4FA98(); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.OnChange_6109C9314D7ACBDCDB7F008F1748AF26 (Has no native function)
	void OnChange6109C9314D7ACBDCDB7F008F1748AF26(struct TEnumAsByte<EMovementMode>& NewMovementMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.On Land (Has no native function)
	void OnLand(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Irwin/AI/Prey/Nug/Abilities/PlayerAbilities/GA_Player_Irwin_Nug_Float.GA_Player_Irwin_Nug_Float_C.ExecuteUbergraph_GA_Player_Irwin_Nug_Float (Has no native function)
	void ExecuteUbergraphGAPlayerIrwinNugFloat(int& EntryPoint, class UAbilityTask_NetworkSyncPoint*& CallFuncWaitNetSyncReturnValue, float& CallFuncGetValueReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventNewMovementMode, struct TEnumAsByte<EMovementMode>& TempbyteVariable, class UAbilityTask_WaitMovementModeChange*& CallFuncCreateWaitMovementModeChangeReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue3, bool& CallFuncRemoveActiveGameplayEffectReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, bool& CallFuncIsValidReturnValue5, bool& CallFuncRemoveActiveGameplayEffectReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue1, struct FGameplayEventData& K2NodeEventEventData, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue4, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue2, bool& CallFuncRemoveActiveGameplayEffectReturnValue2, bool& K2NodeEventbWasCancelled, struct FVector& CallFuncGetActorForwardVectorReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue5, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, float& CallFuncGetValueReturnValue1, struct FVector& CallFuncMultiplyVectorFloatReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncMakeVectorReturnValue, double& CallFuncMakeVectorZImplicitCast, double& CallFuncMultiplyVectorFloatBImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

