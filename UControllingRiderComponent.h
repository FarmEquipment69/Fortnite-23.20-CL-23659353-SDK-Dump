// Class /Script/RidingCodeRuntime.ControllingRiderComponent
// Size: 0x680
class UControllingRiderComponent : public URiderComponent
{
	bool bCanControlRidable; // 0x640 (0x1)
	bool bIsControllingRidable; // 0x641 (0x1)
	enum ERidingControlInputStyle ControlInputStyle; // 0x642 (0x1)
	unsigned char unreflected_643[0xd]; // 0x643 (0xd) 
	struct FRidingControlInputState ReplicatedControlInputState; // 0x650 (0xc)
	struct FRidingControlInputStateReliable ReplicatedControlInputStateReliable; // 0x65c (0x1)
	struct FRidingControlInputStateUnreliable ReplicatedControlInputStateUnreliable; // 0x65d (0x2)
	unsigned char unreflected_65f[0x1]; // 0x65f (0x1) 
	class UFortInputComponent* ControllingRiderInputComponent; // 0x660 (0x8)
	unsigned char unreflected_668[0x10]; // 0x668 (0x10) 
	float AutoRunDoubleTapTimestamp; // 0x678 (0x4)
	bool bCanBePet; // 0x67c (0x1)
	unsigned char padding_67d[0x3]; // 0x67d (0x3)

	/* Functions */

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput (Underlying native function: UpdateFromInput 0x735d978)
	void UpdateFromInput(float& DeltaTime, struct FRidingControlInputState& InputState); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable (Underlying native function: ServerUpdateControlInputStateUnreliable 0x735d604)
	void ServerUpdateControlInputStateUnreliable(struct FRidingControlInputStateUnreliable& InputState); // (Net | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable (Underlying native function: ServerUpdateControlInputStateReliable 0x735d568)
	void ServerUpdateControlInputStateReliable(struct FRidingControlInputStateReliable& InputState); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting (Underlying native function: ServerCancelPetting 0x27a6fc8)
	void ServerCancelPetting(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ReloadPressed (Underlying native function: ReloadPressed 0x735d428)
	void ReloadPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled (Underlying native function: OnSprintCanceled 0x6a4bfbc)
	void OnSprintCanceled(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable (Underlying native function: OnRep_IsControllingRidable 0x2a06258)
	void OnRepIsControllingRidable(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable (Underlying native function: OnRep_ControlInputUnreliable 0x2b6b908)
	void OnRepControlInputUnreliable(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable (Underlying native function: OnRep_ControlInputReliable 0x2db2b4c)
	void OnRepControlInputReliable(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.IsTryingToMove (Underlying native function: IsTryingToMove 0x559a5e0)
	bool IsTryingToMove(float& Tolerance); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityReleased (Underlying native function: HandleSpotActorOrPettingAbilityReleased 0x735cef8)
	void HandleSpotActorOrPettingAbilityReleased(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityPressed (Underlying native function: HandleSpotActorOrPettingAbilityPressed 0x735cee4)
	void HandleSpotActorOrPettingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased (Underlying native function: HandleRidingAbilityReleased 0x735cea8)
	void HandleRidingAbilityReleased(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed (Underlying native function: HandleRidingAbilityPressed 0x735ce94)
	void HandleRidingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop (Has no native function)
	void HandleRequestPettingStop(); // (Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart (Has no native function)
	void HandleRequestPettingStart(); // (Event | Protected | BlueprintEvent)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed (Underlying native function: HandlePettingAbilityPressed 0x735c978)
	void HandlePettingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed (Underlying native function: HandleGamepadRidingAbilityPressed 0x735c788)
	void HandleGamepadRidingAbilityPressed(); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.GetControlInputState (Underlying native function: GetControlInputState 0x735c278)
	struct FRidingControlInputState GetControlInputState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight (Underlying native function: ControllingActor_OnMoveRight 0x735c148)
	void ControllingActorOnMoveRight(float& Val); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward (Underlying native function: ControllingActor_OnMoveForward 0x735c0c4)
	void ControllingActorOnMoveForward(float& Val); // (Final | Native | Protected)

	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput (Underlying native function: ControllingActor_OnJumpInput 0x735c044)
	void ControllingActorOnJumpInput(bool& bPressed); // (Final | Native | Protected)
};

