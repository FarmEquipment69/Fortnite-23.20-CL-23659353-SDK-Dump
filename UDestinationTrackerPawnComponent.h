// Class /Script/FortniteGame.DestinationTrackerPawnComponent
// Size: 0xf8
class UDestinationTrackerPawnComponent : public UPawnComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	struct FVector Destination; // 0xb8 (0x18)
	float DistanceSquared; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct FRotator Direction; // 0xd8 (0x18)
	unsigned char padding_f0[0x8]; // 0xf0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.DestinationTrackerPawnComponent.SetDestination (Underlying native function: SetDestination 0x85472c8)
	void SetDestination(struct FVector& InDestination); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.DestinationTrackerPawnComponent.OnRep_Destination (Underlying native function: OnRep_Destination 0x85469d0)
	void OnRepDestination(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.DestinationTrackerPawnComponent.HasDestination (Underlying native function: HasDestination 0x854636c)
	bool HasDestination(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DestinationTrackerPawnComponent.GetDistanceSquared (Underlying native function: GetDistanceSquared 0x712055c)
	float GetDistanceSquared(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DestinationTrackerPawnComponent.GetDirection (Underlying native function: GetDirection 0x8545494)
	struct FRotator GetDirection(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DestinationTrackerPawnComponent.GetDestination (Underlying native function: GetDestination 0x854546c)
	struct FVector GetDestination(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.DestinationTrackerPawnComponent.ClearDestination (Underlying native function: ClearDestination 0x8545098)
	void ClearDestination(); // (Final | Native | Public | BlueprintCallable)
};

