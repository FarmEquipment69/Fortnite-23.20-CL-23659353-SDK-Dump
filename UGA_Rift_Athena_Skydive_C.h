// BlueprintGeneratedClass /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
// Size: 0xc18
class UGA_Rift_Athena_Skydive_C : public UFortGameplayAbility
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xb20 (0x8)
	class UAnimMontage* FallingAnimation; // 0xb28 (0x8)
	double Hangtimee; // 0xb30 (0x8)
	class USkeletalMeshComponent* VehicleSkelMesh; // 0xb38 (0x8)
	struct FScalableFloat HangTime; // 0xb40 (0x28)
	struct FGameplayTag EventTag; // 0xb68 (0x4)
	unsigned char unreflected_b6c[0x4]; // 0xb6c (0x4) 
	struct FScalableFloat KickFromVehicle; // 0xb70 (0x28)
	class USoundBase* LocalPlayerSound; // 0xb98 (0x8)
	class UClass* GameplayCueGE; // 0xba0 (0x8)
	class AFortPlayerPawn* PlayerPawn; // 0xba8 (0x8)
	bool bHolstered; // 0xbb0 (0x1)
	unsigned char unreflected_bb1[0x3]; // 0xbb1 (0x3) 
	struct FName RiftSkydiveHolster; // 0xbb4 (0x4)
	struct FVector ImpulseStrength; // 0xbb8 (0x18)
	bool bNeedsInputEnable; // 0xbd0 (0x1)
	unsigned char unreflected_bd1[0x7]; // 0xbd1 (0x7) 
	struct FTimerHandle* SafetyTimer; // 0xbd8 (0x8)
	struct FVector NewVar0; // 0xbe0 (0x18)
	struct FGameplayTagContainer UnblockTagsIfPassenger; // 0xbf8 (0x20)

	/* Functions */

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.RemoveSkydivingGameplayEffect (Has no native function)
	void RemoveSkydivingGameplayEffect(bool& CallFuncIsValidReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_OnEndAbility (Has no native function)
	void K2OnEndAbility(bool& bWasCancelled, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, class AController*& CallFuncGetControllerReturnValue, bool& CallFuncBooleanANDReturnValue, bool& CallFuncIsValidReturnValue2, class APlayerController*& K2NodeDynamicCastAsPlayerController, bool& K2NodeDynamicCastbSuccess); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCancelled_AA0523504B7CA4F488E1E6A11F48308A (Has no native function)
	void OnCancelledAA0523504B7CA4F488E1E6A11F48308A(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnInterrupted_AA0523504B7CA4F488E1E6A11F48308A (Has no native function)
	void OnInterruptedAA0523504B7CA4F488E1E6A11F48308A(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnBlendOut_AA0523504B7CA4F488E1E6A11F48308A (Has no native function)
	void OnBlendOutAA0523504B7CA4F488E1E6A11F48308A(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnCompleted_AA0523504B7CA4F488E1E6A11F48308A (Has no native function)
	void OnCompletedAA0523504B7CA4F488E1E6A11F48308A(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.Added_C39EFBAB480B446A6927009E5953EC41 (Has no native function)
	void AddedC39EFBAB480B446A6927009E5953EC41(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.K2_ActivateAbility (Has no native function)
	void K2ActivateAbility(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.SetPlayerToSkydive (Has no native function)
	void SetPlayerToSkydive(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnDestroyed_Event_0 (Has no native function)
	void OnDestroyedEvent0(class AActor*& DestroyedActor); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnEnteredWater (Has no native function)
	void OnPawnEnteredWater(class AFortPlayerPawn*& FortPlayerPawn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.OnPawnLanded (Has no native function)
	void OnPawnLanded(struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.HandleForceEnd (Has no native function)
	void HandleForceEnd(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C.ExecuteUbergraph_GA_Rift_Athena_Skydive (Has no native function)
	void ExecuteUbergraphGARiftAthenaSkydive(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FGameplayAbilityActorInfo& CallFuncGetActorInfoReturnValue, class UAbilityTask_PlayMontageAndWait*& CallFuncCreatePlayMontageAndWaitProxyReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue, class AController*& CallFuncGetControllerReturnValue, class APlayerController*& K2NodeDynamicCastAsPlayerController, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsSkydivingReturnValue, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue, bool& CallFuncVehicleIsInAirReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncIsInVehicleReturnValue, bool& CallFuncIsValidReturnValue2, class AController*& CallFuncGetControllerReturnValue1, class APlayerController*& K2NodeDynamicCastAsPlayerController1, bool& K2NodeDynamicCastbSuccess2, struct TScriptInterface<class IGameplayTagAssetInterface>& CallFuncHasMatchingGameplayTagselfCastInput, bool& CallFuncHasMatchingGameplayTagReturnValue, class UPawnMovementComponent*& CallFuncGetMovementComponentReturnValue, class UCharacterMovementComponent*& K2NodeDynamicCastAsCharacterMovementComponent, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncIsValidReturnValue3, bool& CallFuncEqualEqualByteByteReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, bool& CallFuncBooleanORReturnValue, float& CallFuncGetValueAtLevelReturnValue, bool& CallFuncBooleanORReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, float& CallFuncGetValueAtLevelReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue, struct FActiveGameplayEffectHandle*& CallFuncBPApplyGameplayEffectToOwnerReturnValue1, float& CallFuncGetValueAtLevelReturnValue2, float& CallFuncGetValueAtLevelReturnValue3, double& CallFuncAddDoubleDoubleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate2, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue1, class UObject*& CallFuncConvInterfaceToObjectReturnValue, class AFortCharacterVehicle_Ostrich*& K2NodeDynamicCastAsFortCharacterVehicleOstrich, bool& K2NodeDynamicCastbSuccess4, class AFortAthenaJackalVehicle*& K2NodeDynamicCastAsFortAthenaJackalVehicle, bool& K2NodeDynamicCastbSuccess5, class AFortAthenaFerretVehicle*& K2NodeDynamicCastAsFortAthenaFerretVehicle, bool& K2NodeDynamicCastbSuccess6, bool& CallFuncIsValidReturnValue4, class AController*& CallFuncGetControllerReturnValue2, class APlayerController*& K2NodeDynamicCastAsPlayerController2, bool& K2NodeDynamicCastbSuccess7, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue2, bool& CallFuncIsInVehicleReturnValue1, class APlayerController*& CallFuncGetLocalViewingPlayerControllerReturnValue, bool& CallFuncIsValidReturnValue5, class AController*& CallFuncGetControllerReturnValue3, class APlayerController*& K2NodeDynamicCastAsPlayerController3, bool& K2NodeDynamicCastbSuccess8, class UFortAbilitySystemComponent*& CallFuncGetFortAbilitySystemComponentReturnValue, bool& CallFuncIsPassengerInVehicleReturnValue, bool& TempboolIsClosedVariable, class AActor*& K2NodeCustomEventDestroyedActor, class UAbilityTask_WaitGameplayTagAdded*& CallFuncWaitGameplayTagAddReturnValue, bool& CallFuncIsValidReturnValue6, bool& TempboolHasBeenInitdVariable, struct FDelegate& K2NodeCreateDelegateOutputDelegate3, class AFortPlayerPawn*& K2NodeCustomEventFortPlayerPawn, struct FDelegate& K2NodeCreateDelegateOutputDelegate4, struct FHitResult& K2NodeCustomEventHit, struct FDelegate& K2NodeCreateDelegateOutputDelegate5, bool& CallFuncIsValidReturnValue7, struct FDelegate& K2NodeCreateDelegateOutputDelegate6, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate7, struct FDelegate& K2NodeCreateDelegateOutputDelegate8, double& CallFuncGreaterDoubleDoubleAImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncDelayDurationImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

