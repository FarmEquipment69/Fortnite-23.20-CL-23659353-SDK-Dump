// Class /Script/Engine.DefaultPawn
// Size: 0x338
class ADefaultPawn : public APawn
{
	float BaseTurnRate; // 0x310 (0x4)
	float BaseLookUpRate; // 0x314 (0x4)
	class UPawnMovementComponent* MovementComponent; // 0x318 (0x8)
	class USphereComponent* CollisionComponent; // 0x320 (0x8)
	class UStaticMeshComponent* MeshComponent; // 0x328 (0x8)
	unsigned char bAddDefaultMovementBindings; // 0x330 (0x1)
	unsigned char padding_331[0x7]; // 0x331 (0x7)

	/* Functions */

	// Function /Script/Engine.DefaultPawn.TurnAtRate (Underlying native function: TurnAtRate 0x9d521f0)
	void TurnAtRate(float& Rate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.DefaultPawn.MoveUp_World (Underlying native function: MoveUp_World 0x9d52024)
	void MoveUpWorld(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.DefaultPawn.MoveRight (Underlying native function: MoveRight 0x9d51f9c)
	void MoveRight(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.DefaultPawn.MoveForward (Underlying native function: MoveForward 0x9d51f14)
	void MoveForward(float& Val); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.DefaultPawn.LookUpAtRate (Underlying native function: LookUpAtRate 0x9d51e8c)
	void LookUpAtRate(float& Rate); // (Native | Public | BlueprintCallable)
};

