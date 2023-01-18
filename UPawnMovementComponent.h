// Class /Script/Engine.PawnMovementComponent
// Size: 0x150
class UPawnMovementComponent : public UNavMovementComponent
{
	class APawn* PawnOwner; // 0x148 (0x8)

	/* Functions */

	// Function /Script/Engine.PawnMovementComponent.IsMoveInputIgnored (Underlying native function: IsMoveInputIgnored 0x89ea234)
	bool IsMoveInputIgnored(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PawnMovementComponent.GetPendingInputVector (Underlying native function: GetPendingInputVector 0x9cf743c)
	struct FVector GetPendingInputVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PawnMovementComponent.GetPawnOwner (Underlying native function: GetPawnOwner 0x9cf7424)
	class APawn* GetPawnOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PawnMovementComponent.GetLastInputVector (Underlying native function: GetLastInputVector 0x9cf7378)
	struct FVector GetLastInputVector(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.PawnMovementComponent.ConsumeInputVector (Underlying native function: ConsumeInputVector 0x9cf6a84)
	struct FVector ConsumeInputVector(); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.PawnMovementComponent.AddInputVector (Underlying native function: AddInputVector 0x9cf6448)
	void AddInputVector(struct FVector& WorldVector, bool& bForce); // (Native | Public | HasDefaults | BlueprintCallable)
};

