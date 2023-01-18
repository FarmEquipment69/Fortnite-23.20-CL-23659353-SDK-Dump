// Class /Script/CableComponent.CableComponent
// Size: 0x630
class UCableComponent : public UMeshComponent
{
	bool bAttachStart; // 0x580 (0x1)
	bool bAttachEnd; // 0x581 (0x1)
	unsigned char unreflected_582[0x6]; // 0x582 (0x6) 
	struct FComponentReference AttachEndTo; // 0x588 (0x28)
	struct FName AttachEndToSocketName; // 0x5b0 (0x4)
	unsigned char unreflected_5b4[0x4]; // 0x5b4 (0x4) 
	struct FVector EndLocation; // 0x5b8 (0x18)
	float CableLength; // 0x5d0 (0x4)
	int NumSegments; // 0x5d4 (0x4)
	float SubstepTime; // 0x5d8 (0x4)
	int SolverIterations; // 0x5dc (0x4)
	bool bEnableStiffness; // 0x5e0 (0x1)
	bool bUseSubstepping; // 0x5e1 (0x1)
	bool bSkipCableUpdateWhenNotVisible; // 0x5e2 (0x1)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x5e3 (0x1)
	bool bEnableCollision; // 0x5e4 (0x1)
	unsigned char unreflected_5e5[0x3]; // 0x5e5 (0x3) 
	float CollisionFriction; // 0x5e8 (0x4)
	unsigned char unreflected_5ec[0x4]; // 0x5ec (0x4) 
	struct FVector CableForce; // 0x5f0 (0x18)
	float CableGravityScale; // 0x608 (0x4)
	float CableWidth; // 0x60c (0x4)
	int NumSides; // 0x610 (0x4)
	float TileMaterial; // 0x614 (0x4)
	unsigned char padding_618[0x18]; // 0x618 (0x18)

	/* Functions */

	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent (Underlying native function: SetAttachEndToComponent 0x7a52350)
	void SetAttachEndToComponent(class USceneComponent*& Component, struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CableComponent.CableComponent.SetAttachEndTo (Underlying native function: SetAttachEndTo 0x7a521c4)
	void SetAttachEndTo(class AActor*& Actor, struct FName& ComponentProperty, struct FName& SocketName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations (Underlying native function: GetCableParticleLocations 0x7a52124)
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CableComponent.CableComponent.GetAttachedComponent (Underlying native function: GetAttachedComponent 0x7a520d0)
	class USceneComponent* GetAttachedComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CableComponent.CableComponent.GetAttachedActor (Underlying native function: GetAttachedActor 0x7a52064)
	class AActor* GetAttachedActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

