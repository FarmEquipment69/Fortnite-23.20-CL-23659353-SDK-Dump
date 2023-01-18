// Class /Script/FortniteGame.FortPickupComponent_ItemAttachedActor
// Size: 0xa8
class UFortPickupComponent_ItemAttachedActor : public UActorComponent
{
	class AActor* AttachedActor; // 0xa0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPickupComponent_ItemAttachedActor.OnPickupPickedUpByPlayer (Underlying native function: OnPickupPickedUpByPlayer 0x85467a8)
	void OnPickupPickedUpByPlayer(class AFortPickup*& SelfActor, class AFortPawn*& InteractingPawn, class UFortWorldItemDefinition*& WorldItemDefinition, struct FVector& PickupLocation); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortPickupComponent_ItemAttachedActor.OnAttachedActorDestroyed (Underlying native function: OnAttachedActorDestroyed 0x71a663c)
	void OnAttachedActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPickupComponent_ItemAttachedActor.AttachActorToPickup (Underlying native function: AttachActorToPickup 0x70dc290)
	static void AttachActorToPickup(class AFortPickup*& PickUp, class AActor*& ActorToAttach); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Static | Public | BlueprintCallable)
};

