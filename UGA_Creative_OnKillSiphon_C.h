// BlueprintGeneratedClass /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
// Size: 0xb9c
class UGA_Creative_OnKillSiphon_C : public UGAT_Creative_TriggeredAbility_Pawn_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb58 (0x8)
	class AFortGameStateAthena* GameState; // 0xb60 (0x8)
	bool IsCreativeOrPlayground; // 0xb68 (0x1)
	unsigned char unreflected_b69[0x7]; // 0xb69 (0x7) 
	class UClass* GEHealPlayer; // 0xb70 (0x8)
	bool bShouldConvertExcessHealthToShields; // 0xb78 (0x1)
	unsigned char unreflected_b79[0x7]; // 0xb79 (0x7) 
	class UClass* ShieldGE; // 0xb80 (0x8)
	struct FGameplayTag ConsumedCue; // 0xb88 (0x4)
	bool bDebugBypasLocalMapEnable; // 0xb8c (0x1)
	bool bAttemptHealthRestore; // 0xb8d (0x1)
	bool bAttemptMatsRestore; // 0xb8e (0x1)
	unsigned char unreflected_b8f[0x1]; // 0xb8f (0x1) 
	struct FName NameGrantWood; // 0xb90 (0x4)
	struct FName NameGrantStone; // 0xb94 (0x4)
	struct FName NameGrantMetal; // 0xb98 (0x4)

	/* Functions */

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.GiveResourcesToPlayer (Has no native function)
	void GiveResourcesToPlayer(bool& bShouldGrant, int& GiveAmount, struct TEnumAsByte<EFortResourceType>& GiveType, bool& Success, struct TScriptInterface<class IFortInventoryOwnerInterface>& InventoryOwner, class UFortWorldItemDefinition*& LocalItemToGive, bool& K2NodeSwitchEnumCmpSuccess, class AController*& CallFuncGetControllerFromActorReturnValue, class AFortAthenaAIBotController*& K2NodeDynamicCastAsFortAthenaAIBotController, bool& K2NodeDynamicCastbSuccess, class UFortWorldItem*& CallFuncGiveItemToInventoryOwnerReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, bool& CallFuncIsValidReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.CalculateResources (Has no native function)
	void CalculateResources(struct TEnumAsByte<EFortResourceType>& ResourceGrantType, bool& bSuccess, int& ResourceToGive, struct TEnumAsByte<EFortResourceType>& ResourceType, struct FName& LocalDataTableRowName, int& iLocalResourceToGive, float& CallFuncGetOverridenSiphonGoldValueReturnValue, bool& CallFuncGreaterIntIntReturnValue, int& CallFuncFTruncReturnValue, bool& CallFuncGreaterIntIntReturnValue1, float& CallFuncGetOverridenSiphonMetalValueReturnValue, int& CallFuncFTruncReturnValue1, float& CallFuncGetOverridenSiphonWoodValueReturnValue, int& CallFuncFTruncReturnValue2, bool& K2NodeSwitchEnumCmpSuccess, bool& K2NodeSwitchEnumCmpSuccess1, float& CallFuncGetOverridenSiphonStoneValueReturnValue, int& CallFuncFTruncReturnValue3, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, int& CallFuncFTruncReturnValue4, bool& K2NodeSwitchEnumCmpSuccess2, double& CallFuncFTruncAImplicitCast, double& CallFuncFTruncAImplicitCast1, double& CallFuncFTruncAImplicitCast2, double& CallFuncFTruncAImplicitCast3, double& CallFuncFTruncAImplicitCast4); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptMats (Has no native function)
	void AttemptMats(bool& CallFuncCalculateResourcesbSuccess, int& CallFuncCalculateResourcesResourceToGive, struct TEnumAsByte<EFortResourceType>& CallFuncCalculateResourcesResourceType, bool& CallFuncCalculateResourcesbSuccess1, int& CallFuncCalculateResourcesResourceToGive1, struct TEnumAsByte<EFortResourceType>& CallFuncCalculateResourcesResourceType1, bool& CallFuncGiveResourcesToPlayerSuccess, bool& CallFuncGiveResourcesToPlayerSuccess1, bool& CallFuncCalculateResourcesbSuccess2, int& CallFuncCalculateResourcesResourceToGive2, struct TEnumAsByte<EFortResourceType>& CallFuncCalculateResourcesResourceType2, bool& CallFuncCalculateResourcesbSuccess3, int& CallFuncCalculateResourcesResourceToGive3, struct TEnumAsByte<EFortResourceType>& CallFuncCalculateResourcesResourceType3, bool& CallFuncGiveResourcesToPlayerSuccess2, bool& CallFuncGiveResourcesToPlayerSuccess3); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AttemptHeal (Has no native function)
	void AttemptHeal(bool& CallFuncRestoreHealthSuccess, double& CallFuncRestoreHealthInitialHealAmount, double& CallFuncRestoreHealthActualAppliedHeal, double& CallFuncRestoreHealthExcessHealing, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncAddShieldsbAddedShields, double& CallFuncAddShieldsShieldAdded, bool& CallFuncBooleanORReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.SetupRestoreModes (Has no native function)
	void SetupRestoreModes(bool& ShouldContinue, bool& CallFuncIsCreativeOrPlaygroundModePlaylistReturnValue, bool& CallFuncBooleanORReturnValue, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult1, float& CallFuncEvaluateCurveTableRowOutXY1, bool& CallFuncEqualEqualDoubleDoubleReturnValue, bool& CallFuncEqualEqualDoubleDoubleReturnValue1, bool& CallFuncBooleanORReturnValue1, bool& CallFuncBooleanORReturnValue2, bool& K2NodeSwitchEnumCmpSuccess, bool& K2NodeSwitchEnumCmpSuccess1, class AGameStateBase*& CallFuncGetGameStateReturnValue, class AFortGameStateAthena*& K2NodeDynamicCastAsFortGameStateAthena, bool& K2NodeDynamicCastbSuccess, double& CallFuncEqualEqualDoubleDoubleAImplicitCast, double& CallFuncEqualEqualDoubleDoubleAImplicitCast1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.DetermineHealthDelta (Has no native function)
	void DetermineHealthDelta(double& HealingAmount, double& MaxHealth, double& CurrentHealth, double& HealthDelta, double& ExcessHealh, double& TemprealVariable, bool& TempboolVariable, float& CallFuncGetHealthReturnValue, float& CallFuncGetMaxHealthReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue, double& CallFuncSubtractDoubleDoubleReturnValue1, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, double& K2NodeSelectDefault, double& K2NodeFunctionResultMaxHealthImplicitCast, double& K2NodeFunctionResultCurrentHealthImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.AddShields (Has no native function)
	void AddShields(bool& bShouldConvertExcessHealthToShields, double& ShieldToAdd, bool& bAddedShields, double& ShieldAdded, bool& CallFuncGreaterDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingGameplayEffectSpecReturnValue, struct FGameplayEffectSpecHandle& CallFuncAssignTagSetByCallerMagnitudeReturnValue, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue, float& CallFuncAssignTagSetByCallerMagnitudeMagnitudeImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.RestoreHealth (Has no native function)
	void RestoreHealth(bool& Success, double& InitialHealAmount, double& ActualAppliedHeal, double& ExcessHealing, double& fShieldRestored, double& fActualAmountHealed, double& fInitialAmountToHeal, bool& TempboolVariable, double& CallFuncDetermineHealthDeltaMaxHealth, double& CallFuncDetermineHealthDeltaCurrentHealth, double& CallFuncDetermineHealthDeltaHealthDelta, double& CallFuncDetermineHealthDeltaExcessHealh, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncFMinReturnValue, struct FGameplayEffectSpecHandle& CallFuncMakeOutgoingGameplayEffectSpecReturnValue, struct FGameplayEffectSpecHandle& CallFuncAssignTagSetByCallerMagnitudeReturnValue, struct FActiveGameplayEffectHandle*& CallFuncK2ApplyGameplayEffectSpecToOwnerReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue1, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, bool& K2NodeSwitchEnumCmpSuccess, float& CallFuncGetOverridenSiphonHealthValueReturnValue, double& K2NodeSelectDefault, float& CallFuncAssignTagSetByCallerMagnitudeMagnitudeImplicitCast, double& K2NodeSelectOption0ImplicitCast, double& K2NodeSelectOption1ImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ShouldAbilityRespondToEvent (Has no native function)
	bool K2ShouldAbilityRespondToEvent(struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayEventData& Payload); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Creative/Abilities/Siphon/GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C.ExecuteUbergraph_GA_Creative_OnKillSiphon (Has no native function)
	void ExecuteUbergraphGACreativeOnKillSiphon(int& EntryPoint, struct FGameplayEventData& K2NodeEventEventData, bool& CallFuncSetupRestoreModesShouldContinue); // (Final | 0x00008000 | HasDefaults)
};

