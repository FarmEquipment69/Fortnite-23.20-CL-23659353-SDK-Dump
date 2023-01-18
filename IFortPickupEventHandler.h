// Class /Script/FortniteGame.FortPickupEventHandler
// Size: 0x28
class IFortPickupEventHandler : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupSpawned (Underlying native function: HandlePickupSpawned 0x80a64a0)
	void HandlePickupSpawned(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupDropped (Underlying native function: HandlePickupDropped 0x80a6420)
	void HandlePickupDropped(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupDestroyed (Underlying native function: HandlePickupDestroyed 0x80a63a0)
	void HandlePickupDestroyed(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupDespawned (Underlying native function: HandlePickupDespawned 0x80a6320)
	void HandlePickupDespawned(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupClaimed (Underlying native function: HandlePickupClaimed 0x80a61d0)
	void HandlePickupClaimed(class AFortPickup*& PickUp, class AFortPawn*& InteractingPawn, class UFortWorldItemDefinition*& ItemDefinition, struct FVector& PickupLocation); // (Native | Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandlePickupCaptured (Underlying native function: HandlePickupCaptured 0x80a6150)
	void HandlePickupCaptured(class AFortPickup*& PickUp); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandleItemRemoved (Underlying native function: HandleItemRemoved 0x80a6044)
	void HandleItemRemoved(class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandleItemCaptured (Underlying native function: HandleItemCaptured 0x80a5f3c)
	void HandleItemCaptured(class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Native | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortPickupEventHandler.HandleItemAdded (Underlying native function: HandleItemAdded 0x80a5e30)
	void HandleItemAdded(class APlayerController*& PlayerController, struct FFortItemEntry& ItemEntry); // (Native | Event | Public | HasOutParms | BlueprintEvent)
};

