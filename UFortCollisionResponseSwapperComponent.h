// Class /Script/FortniteAI.FortCollisionResponseSwapperComponent
// Size: 0x120
class UFortCollisionResponseSwapperComponent : public UActorComponent
{
	class UPrimitiveComponent* CollisionPrimitiveComponent; // 0xa0 (0x8)
	class UPrimitiveComponent* OverlapPrimitiveComponent; // 0xa8 (0x8)
	unsigned char unreflected_b0[0x28]; // 0xb0 (0x28) 
	struct TArray<class AFortPawn*> PawnsListenedTo; // 0xd8 (0x10)
	unsigned char unreflected_e8[0x8]; // 0xe8 (0x8) 
	struct FScalableFloat VisibilityModifiedTime; // 0xf0 (0x28)
	struct TEnumAsByte<ECollisionResponse> NewCollisionResponse; // 0x118 (0x1)
	unsigned char padding_119[0x7]; // 0x119 (0x7)

	/* Functions */

	// Function /Script/FortniteAI.FortCollisionResponseSwapperComponent.UnregisterCallbacksForOverlap (Underlying native function: UnregisterCallbacksForOverlap 0xa3e4a20)
	void UnregisterCallbacksForOverlap(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteAI.FortCollisionResponseSwapperComponent.RestoreCollisionResponses (Underlying native function: RestoreCollisionResponses 0xa3e4580)
	void RestoreCollisionResponses(); // (Final | Native | Protected)

	// Function /Script/FortniteAI.FortCollisionResponseSwapperComponent.RegisterCallbacksForOverlap (Underlying native function: RegisterCallbacksForOverlap 0xa3e435c)
	void RegisterCallbacksForOverlap(class UPrimitiveComponent*& InCollisionPrimitiveComponent, class UPrimitiveComponent*& InOverlapPrimitiveComponent); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteAI.FortCollisionResponseSwapperComponent.HandleEndOverlap (Underlying native function: HandleEndOverlap 0xa3e2934)
	void HandleEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Protected)

	// Function /Script/FortniteAI.FortCollisionResponseSwapperComponent.HandleBeginOverlap (Underlying native function: HandleBeginOverlap 0xa3e26f4)
	void HandleBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)
};

