// Class /Script/FortniteGame.BuildingGameplayActorLockOnConsumable
// Size: 0xa68
class ABuildingGameplayActorLockOnConsumable : public ABuildingGameplayActorConsumable
{
	float SecondsBeforeDeathAfterPickup; // 0xa48 (0x4)
	float InteractRadius; // 0xa4c (0x4)
	float PawnInterpSpeed; // 0xa50 (0x4)
	float PawnDisableRotationSeconds; // 0xa54 (0x4)
	unsigned char unreflected_a58[0x8]; // 0xa58 (0x8) 
	class AFortPlayerPawn* InteractingPawn; // 0xa60 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorLockOnConsumable.OnRep_InteractingPawn (Underlying native function: OnRep_InteractingPawn 0x85dfef8)
	void OnRepInteractingPawn(); // (Final | Native | Public)

	// Function /Script/FortniteGame.BuildingGameplayActorLockOnConsumable.OnLocalControllersInteractingPawnSet (Has no native function)
	void OnLocalControllersInteractingPawnSet(class AFortPlayerPawn*& LocalPCPawn); // (Event | Public | BlueprintEvent)
};

