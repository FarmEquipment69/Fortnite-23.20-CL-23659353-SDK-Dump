// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C
// Size: 0xbb0
class UGA_Athena_HidingProp_Teleport_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	struct FMulticastInlineDelegate NewEventDispatcher0; // 0xb28 (0x10)
	class AB_HidingProp_C* HidingProp; // 0xb38 (0x8)
	class AB_HidingProp_C* TargetTeleporter; // 0xb40 (0x8)
	struct FGameplayTagContainer THudElementToHide; // 0xb48 (0x20)
	struct FGameplayTag TargetPropTeleportingCue; // 0xb68 (0x4)
	unsigned char unreflected_b6c[0x4]; // 0xb6c (0x4) 
	struct FTimerHandle* WobbleHandle; // 0xb70 (0x8)
	struct FGameplayTag WobbleCue; // 0xb78 (0x4)
	unsigned char unreflected_b7c[0x4]; // 0xb7c (0x4) 
	double ServerWorldTime; // 0xb80 (0x8)
	struct FGameplayTag EnterCue; // 0xb88 (0x4)
	struct FGameplayTag HidingInPropTag; // 0xb8c (0x4)
	struct FGameplayTagContainer ChangeEquipmentTag; // 0xb90 (0x20)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_FD079A2341CDD832DF47CD975DFC3BB3 (Has no native function)
	void AddedFD079A2341CDD832DF47CD975DFC3BB3(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.OnComplete_EE0FA6804073079396C44591432259C0 (Has no native function)
	void OnCompleteEE0FA6804073079396C44591432259C0(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_67FE14EA4DF2D8C2DB494AA89443681B (Has no native function)
	void Added67FE14EA4DF2D8C2DB494AA89443681B(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_CB8220A04B74338E758C11B7371D4630 (Has no native function)
	void AddedCB8220A04B74338E758C11B7371D4630(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Added_F96D6DD549939CA425D2D1BE1AD32090 (Has no native function)
	void AddedF96D6DD549939CA425D2D1BE1AD32090(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.QuestUpdate (Has no native function)
	void QuestUpdate(class AFortPawn*& Pawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.Wobble (Has no native function)
	void Wobble(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.OnPawnDied (Has no native function)
	void OnPawnDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.GrapplerFailSafe (Has no native function)
	void GrapplerFailSafe(class AFortPawn*& FortPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.ExecuteUbergraph_GA_Athena_HidingProp_Teleport (Has no native function)
	void ExecuteUbergraphGAAthenaHidingPropTeleport(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, bool& CallFuncIsValidReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncIsValidReturnValue1, bool& K2NodeEventbWasCancelled, struct FName& TempnameVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue2, bool& CallFuncIsValidReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FRotator& CallFuncK2GetComponentRotationReturnValue, bool& CallFuncIsServerReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FRotator& CallFuncMakeRotatorReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, struct FRotator& CallFuncGetControlRotationReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess1, float& CallFuncBreakRotatorRoll1, float& CallFuncBreakRotatorPitch1, float& CallFuncBreakRotatorYaw1, bool& CallFuncArrayRemoveItemReturnValue, struct FRotator& CallFuncMakeRotatorReturnValue1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess2, struct FActiveGameplayEffectHandle*& CallFuncApplyGlobalEnvironmentGameplayEffectToActorReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn2, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsValidReturnValue3, struct FGameplayEffectContextHandle& CallFuncGetGrantedByEffectContextReturnValue, class UObject*& CallFuncEffectContextGetSourceObjectReturnValue, class AB_HidingProp_C*& K2NodeDynamicCastAsBHidingProp, bool& K2NodeDynamicCastbSuccess4, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, class AFortPawn*& K2NodeCustomEventPawn, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, double& CallFuncRandomFloatInRangeReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncRandomUnitVectorReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncMultiplyVectorFloatReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue2, bool& TempboolVariable, struct FRotator& K2NodeSelectDefault, bool& CallFuncIsServerReturnValue1, class UFortAsyncAction_TeleportAndWaitForLevelStreaming*& CallFuncCreateTeleportAndWaitForLevelStreamingReturnValue, bool& CallFuncIsValidReturnValue4, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue2, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn3, bool& K2NodeDynamicCastbSuccess5, struct FVector& CallFuncK2GetActorLocationReturnValue1, bool& CallFuncTeleportPlayerPawnReturnValue, int& CallFuncIncrementAnalyticMatchCountReturnValue, bool& CallFuncIsServerReturnValue2, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue3, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue1, bool& CallFuncIsServerReturnValue3, float& CallFuncGetServerWorldTimeSecondsReturnValue, float& CallFuncGetServerWorldTimeSecondsReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, class AActor*& K2NodeCustomEventDamagedActor, float& K2NodeCustomEventDamage, class AController*& K2NodeCustomEventInstigatedBy, class AActor*& K2NodeCustomEventDamageCauser, struct FVector& K2NodeCustomEventHitLocation, class UPrimitiveComponent*& K2NodeCustomEventFHitComponent, struct FName& K2NodeCustomEventBoneName, struct FVector& K2NodeCustomEventMomentum, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue4, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess6, bool& CallFuncIsValidReturnValue5, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue5, class AFortPawn*& K2NodeDynamicCastAsFortPawn2, bool& K2NodeDynamicCastbSuccess7, bool& CallFuncIsValidReturnValue6, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue3, bool& CallFuncIsValidReturnValue7, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, struct FName& TempnameVariable1, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue6, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, class UFortHUDContext*& CallFuncGetContextReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToTargetReturnValue, class AFortPawn*& K2NodeCustomEventFortPawn, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, class UFortHUDContext*& CallFuncGetContextReturnValue1, class UFortAbilitySystemComponent*& K2NodeDynamicCastAsFortAbilitySystemComponent, bool& K2NodeDynamicCastbSuccess8, bool& CallFuncIsValidReturnValue8, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, double& CallFuncSubtractDoubleDoubleAImplicitCast, double& K2NodeVariableSetServerWorldTimeImplicitCast, float& CallFuncFireAnalyticEventEnvironmentalItemUsedSessionLengthImplicitCast); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C.NewEventDispatcher_0__DelegateSignature (Has no native function)
	void NewEventDispatcher0DelegateSignature(); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

