// Class /Script/FortniteGame.FortControllerComponent_Interaction
// Size: 0x2a0
class UFortControllerComponent_Interaction : public UFortControllerComponent
{
	struct TWeakObjectPtr<class AActor> ActorPendingNonInteraction; // 0xa0 (0x8)
	float ClearActorPendingNonInteractionTime; // 0xa8 (0x4)
	unsigned char unreflected_ac[0xc4]; // 0xac (0xc4) 
	struct TArray<class UAudioComponent*> LongInteractAudioComponents; // 0x170 (0x10)
	unsigned char unreflected_180[0x20]; // 0x180 (0x20) 
	class UFortInteractContextInfo* PossibleInteractContextInfo; // 0x1a0 (0x8)
	class UFortInteractContextInfo* InteractResponse; // 0x1a8 (0x8)
	struct TWeakObjectPtr<class AActor> InteractActor; // 0x1b0 (0x8)
	unsigned char unreflected_1b8[0x10]; // 0x1b8 (0x10) 
	struct FServerLongInteractInfo LongInteractValidateInfo; // 0x1c8 (0x10)
	float MobileUpdateCachedInteractActorsCooldown; // 0x1d8 (0x4)
	float MobileUpdateCachedInteractActorsCooldownLength; // 0x1dc (0x4)
	unsigned char unreflected_1e0[0x2]; // 0x1e0 (0x2) 
	enum ETouchInteractMode TouchInteractMode; // 0x1e2 (0x1)
	unsigned char unreflected_1e3[0x1]; // 0x1e3 (0x1) 
	float InteractTracesCapsuleReductionPct; // 0x1e4 (0x4)
	bool bInteractTraceStartsAtClosestPointDistance; // 0x1e8 (0x1)
	bool bFilterInteractTracesBehindMyFortPawn; // 0x1e9 (0x1)
	bool bFilterInteractTracesBehindMyFortPawnOtherThanBuildingActors; // 0x1ea (0x1)
	bool bDoNotFilterBuildingActorsThatAreAttachedToPawn; // 0x1eb (0x1)
	bool bFilterInteractTracesBehindMyFortPawnOnlyWithMultipleResults; // 0x1ec (0x1)
	bool bInteractTracesWithStartPenetratingBlock; // 0x1ed (0x1)
	bool bUseReticleAimingIfInitialBlockingInteractTraceBehindMyFortPawn; // 0x1ee (0x1)
	bool bAllowRetryUse; // 0x1ef (0x1)
	bool bTapInteractEnabled; // 0x1f0 (0x1)
	bool bAthena; // 0x1f1 (0x1)
	bool bUsePlayerInsteadOfCameraForTraces; // 0x1f2 (0x1)
	bool bShouldBlockInteractionsForAllVehiclePassengers; // 0x1f3 (0x1)
	unsigned char unreflected_1f4[0xc]; // 0x1f4 (0xc) 
	class UFortInteractContextInfo* AutoDoorInteractResponse; // 0x200 (0x8)
	unsigned char unreflected_208[0x28]; // 0x208 (0x28) 
	struct TArray<class AActor*> CurrentlyHighlightedActors; // 0x230 (0x10)
	struct TMap<struct FGameplayTag, int> InteractionTagHistory; // 0x240 (0x50)
	unsigned char padding_290[0x10]; // 0x290 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.SetShouldAutoOpenSwingingDoors (Underlying native function: SetShouldAutoOpenSwingingDoors 0x86d1b44)
	void SetShouldAutoOpenSwingingDoors(bool& bOpenSwingingDoorsAutomatically); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.ServerNotifyStartLongUse (Underlying native function: ServerNotifyStartLongUse 0x86d127c)
	void ServerNotifyStartLongUse(class AActor*& ReceivingActor); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.ServerNotifyEndLongUse (Underlying native function: ServerNotifyEndLongUse 0x86d11dc)
	void ServerNotifyEndLongUse(class AActor*& ReceivingActor); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.ServerAttemptInteract (Underlying native function: ServerAttemptInteract 0x86d0fc4)
	void ServerAttemptInteract(class AActor*& ReceivingActor, class UPrimitiveComponent*& InteractComponent, struct TEnumAsByte<TInteractionType>& InteractType, class UObject*& OptionalObjectData, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted, int& RequestId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.OnExitAircraft (Underlying native function: OnExitAircraft 0x7570778)
	void OnExitAircraft(class AController*& ExitingController); // (Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.OnEnterAircraft (Underlying native function: OnEnterAircraft 0x75707fc)
	void OnEnterAircraft(class AController*& EnteringController); // (Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.K2_GetInteractResponse (Underlying native function: K2_GetInteractResponse 0x86d041c)
	class UFortInteractContextInfo* K2GetInteractResponse(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.GetInteractActor (Underlying native function: GetInteractActor 0x86d0084)
	class AActor* GetInteractActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.FixupInteractionWidgetsOnUnzoom (Underlying native function: FixupInteractionWidgetsOnUnzoom 0x86cf95c)
	void FixupInteractionWidgetsOnUnzoom(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.ClientSetInteractionDistanceOverride (Underlying native function: ClientSetInteractionDistanceOverride 0x86cf7bc)
	void ClientSetInteractionDistanceOverride(float& Distance); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.ClientResetInteractionDistanceOverride (Underlying native function: ClientResetInteractionDistanceOverride 0x6a4bfa4)
	void ClientResetInteractionDistanceOverride(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_Interaction.BP_ServerAttemptInteractInternal (Underlying native function: BP_ServerAttemptInteractInternal 0x86cf2d4)
	bool BPServerAttemptInteractInternal(class APawn*& InteractingPawn, float& InInteractDistance, class AActor*& ReceivingActor, class UPrimitiveComponent*& InteractComponent, struct TEnumAsByte<TInteractionType>& InteractType, class UObject*& OptionalObjectData, struct TEnumAsByte<EInteractionBeingAttempted>& InteractionBeingAttempted); // (Final | Native | Public | BlueprintCallable)
};

