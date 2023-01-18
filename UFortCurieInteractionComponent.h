// Class /Script/FortniteGame.FortCurieInteractionComponent
// Size: 0x108
class UFortCurieInteractionComponent : public UActorComponent
{
	class UPrimitiveComponent* CollisionComponent; // 0xa0 (0x8)
	struct TArray<struct FFortCurieExecutionEntry> ExecutionEntries; // 0xa8 (0x10)
	unsigned char padding_b8[0x50]; // 0xb8 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortCurieInteractionComponent.UnregisterCollisionComponent (Underlying native function: UnregisterCollisionComponent 0x87f5ce8)
	void UnregisterCollisionComponent(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieInteractionComponent.RegisterCollisionComponent (Underlying native function: RegisterCollisionComponent 0x87f53ac)
	void RegisterCollisionComponent(class UPrimitiveComponent*& InCollisionComponent); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCurieInteractionComponent.OnCurieStateDetached (Underlying native function: OnCurieStateDetached 0x87f4dc8)
	void OnCurieStateDetached(class UObject*& Owner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortCurieInteractionComponent.OnCurieStateAttached (Underlying native function: OnCurieStateAttached 0x87f4cc4)
	void OnCurieStateAttached(class UObject*& Owner, struct FCurieContainerHandle& ContainerHandle, struct FGameplayTag& StateIdentifier); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortCurieInteractionComponent.HandleHit (Underlying native function: HandleHit 0x87f4a6c)
	void HandleHit(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Private | HasOutParms | HasDefaults)

	// Function /Script/FortniteGame.FortCurieInteractionComponent.HandleEndOverlap (Underlying native function: HandleEndOverlap 0x87f4930)
	void HandleEndOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCurieInteractionComponent.HandleBeginOverlap (Underlying native function: HandleBeginOverlap 0x87f475c)
	void HandleBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Private | HasOutParms)
};

