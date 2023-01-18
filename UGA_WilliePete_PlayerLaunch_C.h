// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C
// Size: 0xb98
class UGA_WilliePete_PlayerLaunch_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class AFortPlayerPawnAthena* OwningPawn; // 0xb28 (0x8)
	class UAnimMontage* ExitMontage; // 0xb30 (0x8)
	struct FScalableFloat LaunchHeightValue; // 0xb38 (0x28)
	class AB_HidingProp_WilliePete_C* WilliePeteLauncher; // 0xb60 (0x8)
	struct FGameplayTagContainer PlayerLaunchTag; // 0xb68 (0x20)
	class UClass* GEWilliePetePlayerLaunchApplyGC; // 0xb88 (0x8)
	class AFortPlayerPawnAthena* TeleportExitPlayer; // 0xb90 (0x8)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.StructureTraceLoop (Has no native function)
	void StructureTraceLoop(bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable, struct TArray<class AActor*>& TempobjectVariable, int& CallFuncAddIntIntReturnValue, struct TArray<struct TEnumAsByte<EObjectTypeQuery>>& K2NodeMakeArrayArray, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, struct TArray<struct FHitResult>& CallFuncCapsuleTraceMultiForObjectsOutHits, bool& CallFuncCapsuleTraceMultiForObjectsReturnValue, int& CallFuncArrayLengthReturnValue, struct FHitResult& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.BreakBlockingStructure (Has no native function)
	void BreakBlockingStructure(class AActor*& HitActor, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, class AAthenaBarrierObjective*& K2NodeDynamicCastAsAthenaBarrierObjective, bool& K2NodeDynamicCastbSuccess, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, class AAthena_Prop_ParentBuildingContainerBlueprint_C*& K2NodeDynamicCastAsAthenaPropParentBuildingContainerBlueprint, bool& K2NodeDynamicCastbSuccess1, class ABuildingProp*& K2NodeDynamicCastAsBuildingProp, bool& K2NodeDynamicCastbSuccess2, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncAthenaCheckActorHasTagsbDidActorHaveTags); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyEnd_A0F03A1445141EA659E282AFE77CEA62 (Has no native function)
	void OnNotifyEndA0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnNotifyBegin_A0F03A1445141EA659E282AFE77CEA62 (Has no native function)
	void OnNotifyBeginA0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCancelled_A0F03A1445141EA659E282AFE77CEA62 (Has no native function)
	void OnCancelledA0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnInterrupted_A0F03A1445141EA659E282AFE77CEA62 (Has no native function)
	void OnInterruptedA0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnBlendOut_A0F03A1445141EA659E282AFE77CEA62 (Has no native function)
	void OnBlendOutA0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.OnCompleted_A0F03A1445141EA659E282AFE77CEA62 (Has no native function)
	void OnCompletedA0F03A1445141EA659E282AFE77CEA62(struct FGameplayTag& NotifyTag); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.Redeploy Glider (Has no native function)
	void RedeployGlider(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.End Skydive (Has no native function)
	void EndSkydive(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ActorHit (Has no native function)
	void ActorHit(class AActor*& SelfActor, class AActor*& OtherActor, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.FailedToActivatePassiveAbility (Has no native function)
	void FailedToActivatePassiveAbility(struct FGameplayAbilityActorInfo& ActorInfo); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C.ExecuteUbergraph_GA_WilliePete_PlayerLaunch (Has no native function)
	void ExecuteUbergraphGAWilliePetePlayerLaunch(int& EntryPoint, struct FGameplayTag& K2NodeCustomEventNotifyTag4, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayTag& K2NodeCustomEventNotifyTag3, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FGameplayTag& K2NodeCustomEventNotifyTag2, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct FGameplayTag& K2NodeCustomEventNotifyTag1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, struct FGameplayTag& K2NodeCustomEventNotifyTag, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FGameplayTag& TempstructVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, class UFortAbilityTask_PlayMontageWaitNotify*& CallFuncPlayMontageAndWaitNotifyReturnValue, bool& CallFuncEquipBestWeaponReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsDBNOReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FGameplayTag& K2NodeCustomEventNotifyTag5, struct FHitResult& K2NodeCustomEventHit1, bool& CallFuncK2CommitAbilityReturnValue, bool& CallFuncGetIsHoldingObjectReturnValue, float& CallFuncGetValueAtLevelReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, struct FGameplayEffectContextHandle& CallFuncGetGrantedByEffectContextReturnValue, class AActor*& CallFuncEffectContextGetInstigatorActorReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AB_HidingProp_WilliePete_C*& K2NodeDynamicCastAsBHidingPropWilliePete, bool& K2NodeDynamicCastbSuccess, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess1, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue, bool& CallFuncIsDBNOReturnValue1, bool& CallFuncNotPreBoolReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsValidReturnValue2, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue1, bool& CallFuncBooleanORReturnValue, class AActor*& K2NodeCustomEventSelfActor, class AActor*& K2NodeCustomEventOtherActor, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, struct FGameplayAbilityActorInfo& K2NodeEventActorInfo, double& CallFuncMakeVectorZImplicitCast, float& CallFuncMakeGameplayCueParametersNormalizedMagnitudeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

