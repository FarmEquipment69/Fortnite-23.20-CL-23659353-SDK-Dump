// BlueprintGeneratedClass /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C
// Size: 0xbd2
class ABGA_Athena_SCMachine_Pickup_C : public ABuildingGameplayActorSpawnChip
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xae0 (0x8)
	class UCapsuleComponent* OverlapCollision; // 0xae8 (0x8)
	class UStaticMeshComponent* ParentMesh; // 0xaf0 (0x8)
	class UFortLinkToActorComponent* FortLinkToActor; // 0xaf8 (0x8)
	class UAudioComponent* SCMachineMemoryCardLoopCue; // 0xb00 (0x8)
	class UParticleSystemComponent* SpawnInEffect; // 0xb08 (0x8)
	class UStaticMeshComponent* BackgroundGlow; // 0xb10 (0x8)
	class UStaticMeshComponent* Card; // 0xb18 (0x8)
	int UnHide; // 0xb20 (0x4)
	unsigned char unreflected_b24[0x4]; // 0xb24 (0x4) 
	double DelayBeforeUnhide; // 0xb28 (0x8)
	unsigned char OwnerTeam; // 0xb30 (0x1)
	unsigned char unreflected_b31[0x7]; // 0xb31 (0x7) 
	struct FTimerHandle* TimerDestroyPickup; // 0xb38 (0x8)
	struct FScalableFloat RowPickupLife; // 0xb40 (0x28)
	struct FText InteractText; // 0xb68 (0x18)
	class UParticleSystem* SpawnOutParticle; // 0xb80 (0x8)
	class USoundBase* PickupSound; // 0xb88 (0x8)
	bool SpawnSoundPlayed; // 0xb90 (0x1)
	unsigned char unreflected_b91[0x7]; // 0xb91 (0x7) 
	class USoundBase* SpawnInSound; // 0xb98 (0x8)
	bool IsPendingKill; // 0xba0 (0x1)
	bool HideAndKill; // 0xba1 (0x1)
	unsigned char unreflected_ba2[0x6]; // 0xba2 (0x6) 
	struct FScalableFloat RowPickUpInteractTime; // 0xba8 (0x28)
	bool IsDelayingDeath; // 0xbd0 (0x1)
	bool OwnerDiedInVortex; // 0xbd1 (0x1)

	/* Functions */

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill (Has no native function)
	void OnRepHideAndKill(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie (Has no native function)
	bool ShouldDie(float& Damage, class AController*& EventInstigator, class AActor*& DamageCauser); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString (Has no native function)
	struct FText BlueprintGetInteractionString(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract (Has no native function)
	bool BlueprintCanInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, struct TEnumAsByte<TInteractionType>& InteractionType); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide (Has no native function)
	void OnRepUnHide(bool& CallFuncConvIntToBoolReturnValue, int& TempintArrayIndexVariable, double& CallFuncGetGameTimeInSecondsReturnValue, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, int& TempintLoopCounterVariable, class AFortPlayerController*& CallFuncArrayGetItem, unsigned char& CallFuncGetActorTeamReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncConvIntToBoolReturnValue1, float& CallFuncSetScalarParameterValueOnMaterialsParameterValueImplicitCast); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup (Has no native function)
	void DestroyPickup(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract (Has no native function)
	void BlueprintOnInteract(class AFortPawn*& InteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup (Has no native function)
	void CollectPickup(); // (Net | NetMulticast | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup (Has no native function)
	void OnDestroyPickup(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound (Has no native function)
	void SpawnSound(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer (Has no native function)
	void OnDeathServer(float& Damage, struct FGameplayTagContainer& DamageTags, struct FVector& Momentum, struct FHitResult& HitInfo, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FGameplayEffectContextHandle& EffectContext); // (BlueprintAuthorityOnly | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup (Has no native function)
	void HideAndKillPickup(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DelayDestroyPickup (Has no native function)
	void DelayDestroyPickup(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__Collision_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature (Has no native function)
	void BndEvtCollisionK2NodeComponentBoundEvent0ComponentBeginOverlapSignatureDelegateSignature(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BndEvt__BGA_Athena_SCMachine_Pickup_FortLinkToActor_K2Node_ComponentBoundEvent_4_OnLinkedActorDestroyed__DelegateSignature (Has no native function)
	void BndEvtBGAAthenaSCMachinePickupFortLinkToActorK2NodeComponentBoundEvent4OnLinkedActorDestroyedDelegateSignature(class AActor*& DamageCauser); // (BlueprintEvent)

	// Function /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup (Has no native function)
	void ExecuteUbergraphBGAAthenaSCMachinePickup(int& EntryPoint, bool& CallFuncWakeUpReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, class AFortPawn*& K2NodeEventInteractingPawn, struct TEnumAsByte<EInteractionBeingAttempted>& K2NodeEventInteractionBeingAttempted, int& CallFuncAddIntIntReturnValue, bool& CallFuncIsVisibleReturnValue, float& CallFuncGetValueAtLevelReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAtLocationReturnValue, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue, int& CallFuncArrayLengthReturnValue, int& TempintArrayIndexVariable1, class AFortPlayerController*& CallFuncArrayGetItem, class AFortPlayerPawn*& CallFuncGetPlayerPawnReturnValue, unsigned char& CallFuncGetActorTeamReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncEqualEqualByteByteReturnValue, class UParticleSystemComponent*& CallFuncSpawnEmitterAttachedReturnValue, struct TArray<class AFortPlayerController*>& CallFuncGetLocalFortPlayerControllersReturnValue1, class AFortPlayerController*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, unsigned char& CallFuncGetActorTeamReturnValue1, bool& CallFuncLessIntIntReturnValue, bool& CallFuncEqualEqualByteByteReturnValue1, float& K2NodeEventDamage, struct FGameplayTagContainer& K2NodeEventDamageTags, struct FVector& K2NodeEventMomentum, struct FHitResult& K2NodeEventHitInfo, class AController*& K2NodeEventInstigatedBy, class AActor*& K2NodeEventDamageCauser, struct FGameplayEffectContextHandle& K2NodeEventEffectContext, double& CallFuncRandomFloatInRangeReturnValue, bool& CallFuncIsServerReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, float& CallFuncGetValueAtLevelReturnValue1, class UPrimitiveComponent*& K2NodeComponentBoundEventOverlappedComponent, class AActor*& K2NodeComponentBoundEventOtherActor, class UPrimitiveComponent*& K2NodeComponentBoundEventOtherComp, int& K2NodeComponentBoundEventOtherBodyIndex, bool& K2NodeComponentBoundEventbFromSweep, struct FHitResult& K2NodeComponentBoundEventSweepResult, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, class AController*& CallFuncGetControllerReturnValue, unsigned char& CallFuncGetActorTeamReturnValue2, class AFortPlayerControllerAthena*& K2NodeDynamicCastAsFortPlayerControllerAthena, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncEqualEqualByteByteReturnValue2, bool& CallFuncNotEqualObjectObjectReturnValue, bool& CallFuncIsServerReturnValue1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, class APawn*& CallFuncK2GetPawnReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess2, bool& CallFuncIsServerReturnValue2, bool& CallFuncIsInVortexReturnValue, class AActor*& K2NodeComponentBoundEventDamageCauser, int& TempintLoopCounterVariable1, bool& CallFuncWakeUpReturnValue1, bool& CallFuncLessIntIntReturnValue1, int& CallFuncAddIntIntReturnValue1, float& CallFuncDelayDurationImplicitCast, float& CallFuncSetLifeSpanInLifespanImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

