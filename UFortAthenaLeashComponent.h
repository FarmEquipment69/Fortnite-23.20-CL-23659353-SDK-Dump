// Class /Script/FortniteAI.FortAthenaLeashComponent
// Size: 0xe8
class UFortAthenaLeashComponent : public UActorComponent
{
	struct FScalableFloat LeashRadius; // 0xa0 (0x28)
	struct FVector LeashCenter; // 0xc8 (0x18)
	float LeashRadiusSqr; // 0xe0 (0x4)
	unsigned char padding_e4[0x4]; // 0xe4 (0x4)

	/* Functions */

	// Function /Script/FortniteAI.FortAthenaLeashComponent.SetLeashRadius (Underlying native function: SetLeashRadius 0xa3c1e78)
	void SetLeashRadius(float& NewRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteAI.FortAthenaLeashComponent.IsInsideLeash (Underlying native function: IsInsideLeash 0xa3c1c14)
	bool IsInsideLeash(struct FVector& Location); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaLeashComponent.GetLeashRadius (Underlying native function: GetLeashRadius 0xa3c1be0)
	float GetLeashRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteAI.FortAthenaLeashComponent.GetLeashCenter (Underlying native function: GetLeashCenter 0xa3c1bb8)
	struct FVector GetLeashCenter(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

