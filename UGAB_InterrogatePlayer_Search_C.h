// BlueprintGeneratedClass /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C
// Size: 0xc68
class UGAB_InterrogatePlayer_Search_C : public UFortGameplayAbility_CarryPlayer
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb50 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb58 (0x8)
	class AFortPlayerControllerAthena* PlayerController; // 0xb60 (0x8)
	class AFortPlayerPawn* InterrogatedPlayer; // 0xb68 (0x8)
	class UAnimMontage* AnimSearch; // 0xb70 (0x8)
	struct FName InterrogateHolster; // 0xb78 (0x4)
	struct FName LootTierGroupName; // 0xb7c (0x4)
	class UFortWorldItemDefinition* ItemDefinition; // 0xb80 (0x8)
	int NumberToSpawn; // 0xb88 (0x4)
	unsigned char unreflected_b8c[0x4]; // 0xb8c (0x4) 
	struct FVector LootSpawnOffset; // 0xb90 (0x18)
	struct FScalableFloat MaxDropsInstance; // 0xba8 (0x28)
	int NumDropsInstance; // 0xbd0 (0x4)
	unsigned char unreflected_bd4[0x4]; // 0xbd4 (0x4) 
	struct FScalableFloat KeycardDropBias; // 0xbd8 (0x28)
	struct TArray<class UFortWorldItemDefinition*> KeycardItemDefinitions; // 0xc00 (0x10)
	struct FGameplayTag TKeycardYacht; // 0xc10 (0x4)
	struct FGameplayTag TKeycardOilRig; // 0xc14 (0x4)
	struct FGameplayTag TKeycardSharkIsland; // 0xc18 (0x4)
	struct FGameplayTag TKeycardHQ; // 0xc1c (0x4)
	struct FGameplayTag TKeycardMountainBase; // 0xc20 (0x4)
	unsigned char unreflected_c24[0x4]; // 0xc24 (0x4) 
	struct FTimerHandle* TimerInterrogation; // 0xc28 (0x8)
	struct FGameplayTagContainer TReticleHUD; // 0xc30 (0x20)
	struct FGameplayTag TNPC; // 0xc50 (0x4)
	unsigned char unreflected_c54[0x4]; // 0xc54 (0x4) 
	class UClass* GECooldown; // 0xc58 (0x8)
	class UClass* GEPickedUp; // 0xc60 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ApplyGameplayEffectToNPC (Has no native function)
	void ApplyGameplayEffectToNPC(class UClass*& GameplayEffect, bool& CallFuncIsDedicatedServerReturnValue, bool& CallFuncIsValidReturnValue, class AFortPlayerPawn*& CallFuncGetDBNOHoisteeReturnValue, bool& CallFuncIsValidReturnValue1, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropKeycard (Has no native function)
	void DropKeycard(bool& CallFuncIsDedicatedServerReturnValue, int& TempintVariable, bool& CallFuncGetKeycardToDropHasKeycard, class UFortWorldItemDefinition*& CallFuncGetKeycardToDropOutput, float& CallFuncGetValueAtLevelReturnValue, int& CallFuncFTruncReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncGreaterIntIntReturnValue, float& CallFuncGetValueAtLevelReturnValue1, bool& CallFuncRandomBoolWithWeightReturnValue, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncGetActorForwardVectorReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncAddVectorVectorReturnValue, class AFortPickup*& CallFuncK2SpawnPickupInWorldReturnValue, double& CallFuncFTruncAImplicitCast); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.GetKeycardToDrop (Has no native function)
	void GetKeycardToDrop(bool& HasKeycard, class UFortWorldItemDefinition*& Output, int& KeycardIndex, class UFortWorldItemDefinition*& CallFuncArrayGetItem, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput1, bool& CallFuncHasMatchingGameplayTagReturnValue1, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput2, bool& CallFuncHasMatchingGameplayTagReturnValue2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput3, bool& CallFuncHasMatchingGameplayTagReturnValue3, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput4, bool& CallFuncHasMatchingGameplayTagReturnValue4, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput5, bool& CallFuncHasMatchingGameplayTagReturnValue5); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.DropLoot (Has no native function)
	void DropLoot(int& TempintArrayIndexVariable, bool& CallFuncIsDedicatedServerReturnValue, float& CallFuncGetValueAtLevelReturnValue, int& CallFuncAddIntIntReturnValue, int& CallFuncFTruncReturnValue, int& TempintVariable, bool& CallFuncGreaterIntIntReturnValue, int& TempintLoopCounterVariable, struct TArray<struct FFortItemEntry>& CallFuncPickLootDropsOutLootToDrop, bool& CallFuncPickLootDropsReturnValue, int& CallFuncAddIntIntReturnValue1, struct FFortItemEntry& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, class UFortWorldItemDefinition*& K2NodeDynamicCastAsFortWorldItemDefinition, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncGetActorForwardVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, class AFortPickup*& CallFuncK2SpawnPickupInWorldReturnValue, double& CallFuncFTruncAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ToggleReticleVisibility (Has no native function)
	void ToggleReticleVisibility(bool& Hide, struct FName& TempnameVariable, class UFortHUDContext*& CallFuncGetContextReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.EndAbilityCleanup (Has no native function)
	void EndAbilityCleanup(bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.InitAbility (Has no native function)
	void InitAbility(bool& CallFuncK2CommitAbilityReturnValue, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AFortPlayerPawn*& CallFuncGetDBNOHoisteeReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class AFortPlayerControllerAthena*& K2NodeDynamicCastAsFortPlayerControllerAthena, bool& K2NodeDynamicCastbSuccess1, struct FGameplayAbilityTargetDataHandle& CallFuncAbilityTargetDataFromActorReturnValue, struct TArray<struct FActiveGameplayEffectHandle*>& CallFuncBPApplyGameplayEffectToTargetReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Completed_6BBDC9B445D4280492A25E8E5EA7A53D (Has no native function)
	void Completed6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Cancelled_6BBDC9B445D4280492A25E8E5EA7A53D (Has no native function)
	void Cancelled6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Triggered_6BBDC9B445D4280492A25E8E5EA7A53D (Has no native function)
	void Triggered6BBDC9B445D4280492A25E8E5EA7A53D(struct FGameplayAbilityTargetDataHandle& TargetData, struct FGameplayTag& ApplicationTag); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.Added_9291D75D4A0949E1C5B7E49C1FD11F8B (Has no native function)
	void Added9291D75D4A0949E1C5B7E49C1FD11F8B(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnPress_2000C5AE43E9D757FF188B85CF911E39 (Has no native function)
	void OnPress2000C5AE43E9D757FF188B85CF911E39(float& TimeWaited); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_0 (Has no native function)
	void OnDiedEvent0(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.OnDied_Event_1 (Has no native function)
	void OnDiedEvent1(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C.ExecuteUbergraph_GAB_InterrogatePlayer_Search (Has no native function)
	void ExecuteUbergraphGABInterrogatePlayerSearch(int& EntryPoint, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData1, struct FGameplayTag& K2NodeCustomEventApplicationTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData, struct FGameplayTag& K2NodeCustomEventApplicationTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayTag& TempstructVariable, struct FGameplayAbilityTargetDataHandle& TempstructVariable1, bool& GameplayTagsK2NodeSwitchGameplayTagCmpSuccess, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, float& K2NodeCustomEventTimeWaited, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, float& TemprealVariable, class UAbilityTask_WaitInputPress*& CallFuncWaitInputPressReturnValue, bool& CallFuncIsValidReturnValue, bool& K2NodeEventbWasCancelled, class UFortAbilityTask_PlayMontageWaitTarget*& CallFuncPlayMontageWaitTargetReturnValue, bool& CallFuncIsValidReturnValue1, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncIsValidReturnValue3, bool& CallFuncIsValidReturnValue4, class AActor*& K2NodeCustomEventDamagedActor1, float& K2NodeCustomEventDamage1, class AController*& K2NodeCustomEventInstigatedBy1, class AActor*& K2NodeCustomEventDamageCauser1, struct FVector& K2NodeCustomEventHitLocation1, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent1, struct FName& K2NodeCustomEventBoneName1, struct FVector& K2NodeCustomEventMomentum1, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, bool& CallFuncIsValidReturnValue5, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, class AFortPlayerPawn*& CallFuncGetDBNOHoisteeReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FGameplayAbilityTargetDataHandle& K2NodeCustomEventTargetData2, struct FGameplayTag& K2NodeCustomEventApplicationTag2, int& CallFuncIncrementAnalyticMatchCountReturnValue); // (Final | 0x00008000 | HasDefaults)
};

