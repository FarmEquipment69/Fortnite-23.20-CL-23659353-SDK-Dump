// BlueprintGeneratedClass /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C
// Size: 0xb64
class UGA_DudeBro_Vent_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class USkeletalMeshComponent* VehicleSkelMesh; // 0xb28 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xb30 (0x8)
	double GravFloorAltitude; // 0xb38 (0x8)
	double UpwardLaunchVelocity; // 0xb40 (0x8)
	struct TArray<class AActor*> VentsHitBeforeLanding; // 0xb48 (0x10)
	int NumVentsToHitForQuest; // 0xb58 (0x4)
	struct FGameplayTag TagtoCheck; // 0xb5c (0x4)
	struct FGameplayTag VentBlocked; // 0xb60 (0x4)

	/* Functions */

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C.ActuallyCleanPlayerUp (Has no native function)
	void ActuallyCleanPlayerUp(bool& CallFuncIsValidReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, bool& CallFuncIsServerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C.Added_4065C3B14D35BDC4C0608DB5BD4A1EBA (Has no native function)
	void Added4065C3B14D35BDC4C0608DB5BD4A1EBA(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C.PlayerCapsuleHit (Has no native function)
	void PlayerCapsuleHit(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_ActivateAbilityFromEvent (Has no native function)
	void K2ActivateAbilityFromEvent(struct FGameplayEventData& EventData); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C.MovementModeChangedDelegate_Event_0 (Has no native function)
	void MovementModeChangedDelegateEvent0(class ACharacter*& Character, struct TEnumAsByte<EMovementMode>& PrevMovementMode, unsigned char& PreviousCustomMode); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C.ExecuteUbergraph_GA_DudeBro_Vent (Has no native function)
	void ExecuteUbergraphGADudeBroVent(int& EntryPoint, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue, struct FGameplayEffectContextHandle& CallFuncMakeEffectContextReturnValue, struct FGameplayEventData& K2NodeEventEventData, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& GameplayTagsK2NodeSwitchGameplayTagCmpSuccess, bool& CallFuncIsValidReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, bool& CallFuncIsValidReturnValue1, class ACharacter*& K2NodeCustomEventCharacter, struct TEnumAsByte<EMovementMode>& K2NodeCustomEventPrevMovementMode, unsigned char& K2NodeCustomEventPreviousCustomMode, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, class UFortMovementComp_CharacterAthena*& K2NodeDynamicCastAsFortMovementCompCharacterAthena, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsServerReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, int& CallFuncArrayLengthReturnValue, class AFortPlayerController*& CallFuncGetFortPlayerControllerFromActorReturnValue, class AGameStateBase*& CallFuncGetGameStateReturnValue, bool& CallFuncIsValidReturnValue2, bool& CallFuncAthenaCheckCreativeModeCanCompleteQuest, class UFortQuestManager*& CallFuncGetQuestManagerReturnValue, bool& K2NodeEventbWasCancelled, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, bool& CallFuncGreaterEqualIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, class UPrimitiveComponent*& K2NodeCustomEventHitComponent, class AActor*& K2NodeCustomEventOtherActor, class UPrimitiveComponent*& K2NodeCustomEventOtherComp, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncAthenaCheckActorHasTagsbDidActorHaveTags, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue2, bool& CallFuncIsValidReturnValue3, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToTargetReturnValue1, struct FGameplayTagContainer& CallFuncMakeLiteralGameplayTagContainerReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasAnyMatchingGameplayTagsselfCastInput, bool& CallFuncHasAnyMatchingGameplayTagsReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue3, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput1, bool& CallFuncHasMatchingGameplayTagReturnValue1, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, bool& CallFuncIsValidReturnValue4, struct FVector& CallFuncMakeVectorReturnValue, class AActor*& CallFuncGetAvatarActorFromActorInfoReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess3, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput2, bool& CallFuncHasMatchingGameplayTagReturnValue2, float& CallFuncSetInVortexUpwardLaunchVelocityImplicitCast, double& K2NodeVariableSetUpwardLaunchVelocityImplicitCast, float& CallFuncSetInVortexGravityFloorAltitudeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

