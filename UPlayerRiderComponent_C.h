// BlueprintGeneratedClass /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C
// Size: 0x790
class UPlayerRiderComponent_C : public UControllingRiderComponent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x680 (0x8)
	struct FGameplayTagContainer TPlayerIsRiding; // 0x688 (0x20)
	class UClass* GEPlayerIsRiding; // 0x6a8 (0x8)
	class AFortPlayerPawn* FortPlayerRef; // 0x6b0 (0x8)
	double JumpOnMountDistanceCheck; // 0x6b8 (0x8)
	struct FMulticastInlineDelegate RiderUINewStats; // 0x6c0 (0x10)
	struct FMulticastInlineDelegate RiderUIEnd; // 0x6d0 (0x10)
	double targetEnergy; // 0x6e0 (0x8)
	double targetHealth; // 0x6e8 (0x8)
	struct FGameplayTagContainer TCannotRideBucket; // 0x6f0 (0x20)
	struct FMulticastInlineDelegate RiderUIUpdateEnergy; // 0x710 (0x10)
	struct FMulticastInlineDelegate RiderUIUpdateHealth; // 0x720 (0x10)
	class AActor* CachedRidableActor; // 0x730 (0x8)
	struct FGameplayTagContainer CannotRideRiderBucket; // 0x738 (0x20)
	struct FGameplayTag JumpOnCreatureCueTag; // 0x758 (0x4)
	unsigned char unreflected_75c[0x4]; // 0x75c (0x4) 
	class UClass* GEPlayerPetting; // 0x760 (0x8)
	struct FGameplayTagContainer TagQuestsWildlifePet; // 0x768 (0x20)
	class UAbilityAsync_WaitGameplayTagAdded* ActiveRidableBlockRidingGameplayTagAsyncAction; // 0x788 (0x8)

	/* Functions */

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.GetRidingInfoFromTarget (Has no native function)
	void GetRidingInfoFromTarget(double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UsesAltRidingMessage); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetHealth (Has no native function)
	void OnReptargetHealth(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.OnRep_targetEnergy (Has no native function)
	void OnReptargetEnergy(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.GetJumpInfo (Has no native function)
	void GetJumpInfo(class AActor*& TargetActor, class UActorComponent*& TargetActorComponent, double& JumpAttachGroundHeightMin, double& JumpAttachGroundHeightBuffer, bool& UseAltRidingMessage, class UCreatureBaseNonRidableComponent_C*& CallFuncGetComponentByClassReturnValue, class UCreatureBaseRidableComponent_C*& CallFuncGetComponentByClassReturnValue1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.TestIfValidForRidingAttempt (Has no native function)
	void TestIfValidForRidingAttempt(class UObject*& Object, bool& Success, class UObject*& TargetObject, bool& UseAltRidingMessage, bool& TempboolVariable, bool& CallFuncIsValidReturnValue, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, struct FVector& CallFuncK2GetActorLocationReturnValue, class UActorComponent*& CallFuncGetJumpInfoTargetActorComponent, double& CallFuncGetJumpInfoJumpAttachGroundHeightMin, double& CallFuncGetJumpInfoJumpAttachGroundHeightBuffer, bool& CallFuncGetJumpInfoUseAltRidingMessage, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncIsValidReturnValue1, class UObject*& K2NodeSelectDefault, class UFortPawnComponent_Convert*& CallFuncGetComponentByClassReturnValue, float& CallFuncGetScaledCapsuleHalfHeightReturnValue, bool& CallFuncIsValidReturnValue2, double& CallFuncSubtractDoubleDoubleReturnValue, bool& CallFuncGetOnlyLeaderInteractionReturnValue, class AFortPlayerPawn*& CallFuncGetConverterPawnReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, bool& CallFuncBooleanORReturnValue, bool& CallFuncIsValidReturnValue4, float& CallFuncGetScaledCapsuleHalfHeightReturnValue1, double& CallFuncBreakVectorX1, double& CallFuncBreakVectorY1, double& CallFuncBreakVectorZ1, struct FVector& CallFuncK2GetActorLocationReturnValue1, bool& CallFuncLessEqualDoubleDoubleReturnValue, double& CallFuncBreakVectorX2, double& CallFuncBreakVectorY2, double& CallFuncBreakVectorZ2, double& CallFuncSubtractDoubleDoubleReturnValue1, double& CallFuncSubtractDoubleDoubleReturnValue2, double& CallFuncSubtractDoubleDoubleReturnValue3, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncBooleanANDReturnValue1, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncSubtractDoubleDoubleBImplicitCast1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRiding (Has no native function)
	void ToggleRiding(class AActor*& PlayerPawn, class AActor*& Target, bool& ShouldRide, bool& bChangedRiding, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface, bool& K2NodeDynamicCastbSuccess, struct TScriptInterface<class IGameplayTagAssetInterface>& K2NodeDynamicCastAsGameplayTagAssetInterface1, bool& K2NodeDynamicCastbSuccess1, class URiderComponent*& CallFuncGetComponentByClassReturnValue, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, bool& CallFuncStopRidingActorReturnValue, bool& CallFuncStartRidingActorReturnValue, class UControllingRiderComponent*& K2NodeDynamicCastAsControllingRiderComponent, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue, bool& TempboolVariable, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue1, bool& CallFuncNotPreBoolReturnValue, bool& TempboolVariable1, bool& CallFuncNotPreBoolReturnValue1); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_E5B5FB5340DB5660002329825657B406 (Has no native function)
	void EventReceivedE5B5FB5340DB5660002329825657B406(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_42EF586645CCFF06FFA4D9A5D59B1298 (Has no native function)
	void Added42EF586645CCFF06FFA4D9A5D59B1298(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_A83C775344FE0F6BDAAC4B971F57425E (Has no native function)
	void AddedA83C775344FE0F6BDAAC4B971F57425E(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.EventReceived_3DA19BC649FB853BA2CC0FADFF8D08F6 (Has no native function)
	void EventReceived3DA19BC649FB853BA2CC0FADFF8D08F6(struct FGameplayEventData& Payload); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.Added_D3DFE4374EED456A4C597E95375A2028 (Has no native function)
	void AddedD3DFE4374EED456A4C597E95375A2028(); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingAlternative (Has no native function)
	void ToggleRidingAlternative(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleStartedRiding (Has no native function)
	void HandleStartedRiding(class URidableComponent*& Ridable); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleStoppedRiding (Has no native function)
	void HandleStoppedRiding(class URidableComponent*& Ridable); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ToggleRidingOnServer (Has no native function)
	void ToggleRidingOnServer(class UObject*& TargetObject, bool& UseAltRidingMessage); // (Net | NetServer | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.SetTargetHealth (Has no native function)
	void SetTargetHealth(double& targetHealth); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIStartClient (Has no native function)
	void RiderUIStartClient(struct FText& Name, struct FSlateBrush& Icon, class AActor*& Ridable); // (Net | NetClient | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEndClient (Has no native function)
	void RiderUIEndClient(class AActor*& Ridable); // (Net | NetClient | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.MovementModeChanged (Has no native function)
	void MovementModeChanged(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.MountLanded (Has no native function)
	void MountLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStart (Has no native function)
	void HandleRequestPettingStart(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRequestPettingStop (Has no native function)
	void HandleRequestPettingStop(); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.HandleRidableFound (Has no native function)
	void HandleRidableFound(struct FHitResult& HitResult); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.ExecuteUbergraph_PlayerRiderComponent (Has no native function)
	void ExecuteUbergraphPlayerRiderComponent(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncHasAuthorityReturnValue, class AActor*& CallFuncGetOwnerReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, bool& CallFuncHasAuthorityReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AActor*& CallFuncGetOwnerReturnValue2, bool& CallFuncIsValidReturnValue1, bool& CallFuncHasAuthorityReturnValue2, class URidableComponent*& K2NodeEventRidable1, class URidableComponent*& K2NodeEventRidable, class AActor*& CallFuncGetOwnerReturnValue3, class AActor*& CallFuncGetOwnerReturnValue4, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, class AFortPawn*& K2NodeDynamicCastAsFortPawn1, bool& K2NodeDynamicCastbSuccess1, class AActor*& CallFuncGetOwnerReturnValue5, struct TEnumAsByte<ENetRole>& CallFuncGetLocalRoleReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPFortApplyGameplayEffectToSelfReturnValue, struct FGameplayEventData& TempstructVariable, class AActor*& CallFuncGetOwnerReturnValue6, int& CallFuncRemoveActiveEffectsWithGrantedTagsReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess2, class UObject*& K2NodeCustomEventTargetObject, bool& K2NodeCustomEventUseAltRidingMessage, struct TScriptInterface<class IRidingGeneric_Interafce_C>& K2NodeDynamicCastAsRidingGenericInterafce, bool& K2NodeDynamicCastbSuccess3, class AActor*& K2NodeDynamicCastAsActor, bool& K2NodeDynamicCastbSuccess4, bool& CallFuncToggleRidingbChangedRiding, struct FGameplayEventData& TempstructVariable1, double& K2NodeCustomEventtargetHealth, struct FText& K2NodeCustomEventName, struct FSlateBrush& K2NodeCustomEventIcon, class AActor*& K2NodeCustomEventRidable1, class AActor*& K2NodeCustomEventRidable, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, bool& CallFuncStopRidingActorReturnValue, bool& CallFuncIsValidReturnValue2, struct FGameplayEventData& K2NodeCustomEventPayload, struct FGameplayEventData& K2NodeCustomEventPayload1, bool& CallFuncIsValidReturnValue3, class AActor*& CallFuncGetOwnerReturnValue7, bool& CallFuncStopRidingActorReturnValue1, class UAbilityAsync_WaitGameplayEvent*& CallFuncWaitGameplayEventToActorReturnValue, class UAbilityAsync_WaitGameplayEvent*& CallFuncWaitGameplayEventToActorReturnValue1, bool& CallFuncIsValidReturnValue4, bool& CallFuncIsValidReturnValue5, bool& TempboolHasBeenInitdVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, class AActor*& CallFuncGetOwnerReturnValue8, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, class UAbilityAsync_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddToActorReturnValue, bool& CallFuncIsValidReturnValue6, class UAbilityAsync_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddToActorReturnValue1, bool& CallFuncIsValidReturnValue7, struct FHitResult& K2NodeCustomEventHit, class AActor*& CallFuncGetOwnerReturnValue9, bool& TempboolIsClosedVariable, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, class AActor*& CallFuncGetOwnerReturnValue10, bool& CallFuncIsValidReturnValue8, bool& CallFuncIsValidReturnValue9, bool& CallFuncHasAuthorityReturnValue3, class AActor*& CallFuncGetOwnerReturnValue11, class AFortPawn*& K2NodeDynamicCastAsFortPawn2, bool& K2NodeDynamicCastbSuccess5, class UCreatureBaseRidableComponent_C*& K2NodeDynamicCastAsCreatureBaseRidableComponent, bool& K2NodeDynamicCastbSuccess6, class AActor*& CallFuncGetOwnerReturnValue12, struct TEnumAsByte<ENetRole>& CallFuncGetLocalRoleReturnValue1, bool& CallFuncIsRidingActorReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncIsValidReturnValue10, bool& CallFuncCanBePetReturnValue, class AActor*& CallFuncGetOwnerReturnValue13, bool& CallFuncIsValidReturnValue11, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue1, class AActor*& CallFuncGetOwnerReturnValue14, bool& CallFuncIsValidReturnValue12, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue2, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FHitResult& K2NodeEventHitResult, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, bool& CallFuncIsValidReturnValue13, bool& CallFuncTestIfValidForRidingAttemptSuccess, class UObject*& CallFuncTestIfValidForRidingAttemptTargetObject, bool& CallFuncTestIfValidForRidingAttemptUseAltRidingMessage, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, class AActor*& CallFuncGetOwnerReturnValue15, bool& CallFuncIsValidReturnValue14, class UAbilityAsync_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddToActorReturnValue2, bool& CallFuncIsValidReturnValue15); // (Final | 0x00008000 | HasDefaults)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateHealth__DelegateSignature (Has no native function)
	void RiderUIUpdateHealthDelegateSignature(double& Health); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIUpdateEnergy__DelegateSignature (Has no native function)
	void RiderUIUpdateEnergyDelegateSignature(double& Energy); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUIEnd__DelegateSignature (Has no native function)
	void RiderUIEndDelegateSignature(class AActor*& RidableActor); // (Public | Delegate | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/PlayerRiderComponent.PlayerRiderComponent_C.RiderUINewStats__DelegateSignature (Has no native function)
	void RiderUINewStatsDelegateSignature(struct FText& Name, struct FSlateBrush& Icon, class AActor*& RidableActor); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

