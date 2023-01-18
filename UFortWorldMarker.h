// Class /Script/FortniteGame.FortWorldMarker
// Size: 0x1e0
class UFortWorldMarker : public UObject
{
	class UAthenaMarkerComponent* MarkerComponent; // 0x28 (0x8)
	struct FFortWorldMarkerData MarkerDataCache; // 0x30 (0x160)
	unsigned char unreflected_190[0x18]; // 0x190 (0x18) 
	class AFortPlayerMarkerBase* MarkerActor; // 0x1a8 (0x8)
	class UUserWidget* MarkerWidget; // 0x1b0 (0x8)
	unsigned char padding_1b8[0x28]; // 0x1b8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortWorldMarker.PlayerStateDestroyed (Underlying native function: PlayerStateDestroyed 0x845c944)
	void PlayerStateDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWorldMarker.PickedUp (Underlying native function: PickedUp 0x8460308)
	void PickedUp(class AFortPickup*& SelfActor, class AFortPawn*& InteractingPawn, class UFortWorldItemDefinition*& WorldItemDefinition, struct FVector& PickupLocation); // (Final | Native | Private | HasDefaults)

	// Function /Script/FortniteGame.FortWorldMarker.GetMarkerWidget (Underlying native function: GetMarkerWidget 0x845e0e4)
	class UUserWidget* GetMarkerWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMarker.ActorDestroyed (Underlying native function: ActorDestroyed 0x845c944)
	void ActorDestroyed(class AActor*& DestroyedActor); // (Final | Native | Private)
};

