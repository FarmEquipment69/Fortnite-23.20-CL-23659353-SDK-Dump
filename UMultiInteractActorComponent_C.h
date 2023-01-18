// BlueprintGeneratedClass /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C
// Size: 0x179
class UMultiInteractActorComponent_C : public UFortActorComponent_MultiInteract
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x158 (0x8)
	struct FGameplayTag RemoveInteractPlayerTag; // 0x160 (0x4)
	struct FGameplayTag AddInteractPlayerTag; // 0x164 (0x4)
	struct FGameplayTag LoopingMultiInteractTag; // 0x168 (0x4)
	unsigned char unreflected_16c[0x4]; // 0x16c (0x4) 
	double RequiredDuration; // 0x170 (0x8)
	bool GCNLApplied; // 0x178 (0x1)

	/* Functions */

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.AddGCNL (Has no native function)
	void AddGCNL(class AActor*& Owner, int& CallFuncGetInteractingActorCountReturnValue, float& CallFuncConvIntToFloatReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, class AActor*& CallFuncGetOwnerReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.RemoveGCNL (Has no native function)
	void RemoveGCNL(class AActor*& Owner, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetOwnerReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteGCNFromTag (Has no native function)
	void ExecuteGCNFromTag(class AFortPlayerPawn*& PlayerPawn, struct FGameplayTag& InteractTag, int& PreviousInteractPlayerCount, int& CallFuncGetInteractingActorCountReturnValue, bool& CallFuncIsValidReturnValue, float& CallFuncConvIntToFloatReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, class AActor*& CallFuncGetOwnerReturnValue, float& CallFuncGetInteractionDurationReturnValue, double& CallFuncSafeDivideReturnValue, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, double& CallFuncSafeDivideAImplicitCast, float& CallFuncMakeGameplayCueParametersNormalizedMagnitudeImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.SetRequiredDuration (Has no native function)
	void SetRequiredDuration(double& NewRequiredDuration); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustJoinedInteraction (Has no native function)
	void UpdateForPlayerJustJoinedInteraction(class AFortPlayerStateAthena*& JoinedPlayer); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.UpdateForPlayerJustLeftInteraction (Has no native function)
	void UpdateForPlayerJustLeftInteraction(class AFortPlayerStateAthena*& LeftPlayer); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C.ExecuteUbergraph_MultiInteractActorComponent (Has no native function)
	void ExecuteUbergraphMultiInteractActorComponent(int& EntryPoint, int& CallFuncGetInteractingActorCountReturnValue, class AFortPlayerStateAthena*& K2NodeEventJoinedPlayer, int& CallFuncSubtractIntIntReturnValue, class AFortPlayerPawn*& CallFuncGetPlayerPawnOrVehicleDriverReturnValue, class AFortPlayerStateAthena*& K2NodeEventLeftPlayer, class AFortPlayerPawn*& CallFuncGetPlayerPawnOrVehicleDriverReturnValue1, bool& CallFuncIsLocallyControlledReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncBooleanANDReturnValue, int& CallFuncGetInteractingActorCountReturnValue1, bool& CallFuncEqualEqualIntIntReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncBooleanANDReturnValue1, bool& CallFuncBooleanORReturnValue, bool& CallFuncBooleanANDReturnValue2); // (Final | 0x00008000)
};

