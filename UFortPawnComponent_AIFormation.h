// Class /Script/FortniteAI.FortPawnComponent_AIFormation
// Size: 0xd0
class UFortPawnComponent_AIFormation : public UFortPawnComponent
{
	struct TArray<struct FVector> Slots; // 0xa0 (0x10)
	float MaxDistanceFromSlotToSprint; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct TArray<struct FFortAthenaAIFormationSlotRuntime> RuntimeSlots; // 0xb8 (0x10)
	float MaxDistanceFromSlotToSprintSqr; // 0xc8 (0x4)
	unsigned char padding_cc[0x4]; // 0xcc (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortPawnComponent_AIFormation.OnUserDied (Underlying native function: OnUserDied 0xa35c200)
	void OnUserDied(class AActor*& DamagedActor, float& Damage, class AController*& InstigatedBy, class AActor*& DamageCauser, struct FVector& HitLocation, class UPrimitiveComponent*& FHitComponent, struct FName& BoneName, struct FVector& Momentum); // (Final | Native | Private | HasDefaults)
};

