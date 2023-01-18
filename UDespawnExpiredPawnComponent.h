// Class /Script/FortniteAI.DespawnExpiredPawnComponent
// Size: 0xa0
class UDespawnExpiredPawnComponent : public UFortPawnComponent
{

	/* Functions */

	// Function /Script/FortniteAI.DespawnExpiredPawnComponent.GetDespawnRifts (Underlying native function: GetDespawnRifts 0xa3e96a0)
	struct TArray<class ABuildingRift*> GetDespawnRifts(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.DespawnExpiredPawnComponent.DespawnExpired (Underlying native function: DespawnExpired 0x206352c)
	void DespawnExpired(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteAI.DespawnExpiredPawnComponent.AddDespawnRift (Underlying native function: AddDespawnRift 0xa3e9528)
	void AddDespawnRift(class ABuildingRift*& NewRift); // (Final | Native | Public | BlueprintCallable)
};

