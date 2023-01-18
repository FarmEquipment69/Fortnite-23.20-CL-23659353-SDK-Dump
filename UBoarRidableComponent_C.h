// BlueprintGeneratedClass /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C
// Size: 0xb9c
class UBoarRidableComponent_C : public UCreatureBaseRidableComponent_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb50 (0x8)
	class USoundBase* BurtChargeStartSound; // 0xb58 (0x8)
	class UAudioComponent* ChargeSoundComp; // 0xb60 (0x8)
	class ANPC_Pawn_Irwin_Prey_Burt_C* BurtPawnRef; // 0xb68 (0x8)
	double SprintCooldDownTime; // 0xb70 (0x8)
	class UClass* GESprintImpactPawn; // 0xb78 (0x8)
	struct FGameplayTag SprintImpactGameplayCueTag; // 0xb80 (0x4)
	unsigned char unreflected_b84[0x4]; // 0xb84 (0x4) 
	class UClass* GESprintImpactVehicle; // 0xb88 (0x8)
	struct FGameplayTag SprintChargeImpactDefaultCueTag; // 0xb90 (0x4)
	struct FGameplayTag SprintChargeImpactPawnCueTag; // 0xb94 (0x4)
	struct FGameplayTag SprintChargeImpactDestroyBuildCueTag; // 0xb98 (0x4)

	/* Functions */

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.OnReaction (Has no native function)
	void OnReaction(class UObject*& Object, struct FHitResult& HitResult, class AActor*& RiderActor, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersFromHitResultReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue1, class AFortAthenaVehicle*& K2NodeDynamicCastAsFortAthenaVehicle, bool& K2NodeDynamicCastbSuccess, class APawn*& K2NodeDynamicCastAsPawn, bool& K2NodeDynamicCastbSuccess1, class ABuildingActor*& K2NodeDynamicCastAsBuildingActor, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsValidReturnValue, float& CallFuncGetHealthReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, class AActor*& CallFuncGetOwnerReturnValue, bool& CallFuncIsValidReturnValue1, class AActor*& CallFuncGetOwnerReturnValue1, class AActor*& CallFuncGetOwnerReturnValue2, class AActor*& CallFuncGetOwnerReturnValue3, struct FVector& CallFuncK2GetActorLocationReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, struct TArray<class UClass*>& K2NodeMakeArrayArray, bool& CallFuncIsValidClassReturnValue, bool& CallFuncIsValidClassReturnValue1, struct TArray<class UClass*>& K2NodeMakeArrayArray1, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleRiderStoppedRiding (Has no native function)
	void HandleRiderStoppedRiding(class URiderComponent*& Rider); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleRiderStartedRiding (Has no native function)
	void HandleRiderStartedRiding(class URiderComponent*& Rider); // (Event | Protected | BlueprintEvent)

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.HandleAbilityStarted (Has no native function)
	void HandleAbilityStarted(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.OnReactionEvent (Has no native function)
	void OnReactionEvent(class AActor*& HitActor, bool& bFromAsyncSweepBox, enum FCollisionReactionType& CollisionReactionType, bool& bIsFirstContinuousReactionOnDelayableActor, struct FHitResult& HitResult); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Public | BlueprintEvent)

	// Function /RidingContent/Components/BoarRidableComponent.BoarRidableComponent_C.ExecuteUbergraph_BoarRidableComponent (Has no native function)
	void ExecuteUbergraphBoarRidableComponent(int& EntryPoint, class AActor*& CallFuncGetOwnerReturnValue, class UFortAthenaCollisionReactionComponent*& CallFuncGetComponentByClassReturnValue, class URiderComponent*& K2NodeEventRider1, bool& CallFuncIsValidReturnValue, struct FGameplayEventData& K2NodeMakeStructGameplayEventData, class AActor*& CallFuncGetOwnerReturnValue1, class URiderComponent*& K2NodeEventRider, class AActor*& CallFuncGetOwnerReturnValue2, bool& CallFuncIsValidReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UAbilitySystemComponent*& CallFuncGetAbilitySystemComponentReturnValue, bool& CallFuncIsValidReturnValue2, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToSelfReturnValue, class AActor*& CallFuncGetOwnerReturnValue3, class AActor*& K2NodeCustomEventHitActor, bool& K2NodeCustomEventbFromAsyncSweepBox, enum FCollisionReactionType& K2NodeCustomEventCollisionReactionType, bool& K2NodeCustomEventbIsFirstContinuousReactionOnDelayableActor, struct FHitResult& K2NodeCustomEventHitResult, class UFortAthenaCollisionReactionComponent*& CallFuncGetComponentByClassReturnValue1, bool& CallFuncIsValidReturnValue3, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason); // (Final | 0x00008000 | HasDefaults)
};

