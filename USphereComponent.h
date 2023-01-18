// Class /Script/Engine.SphereComponent
// Size: 0x570
class USphereComponent : public UShapeComponent
{
	float SphereRadius; // 0x560 (0x4)
	unsigned char padding_564[0xc]; // 0x564 (0xc)

	/* Functions */

	// Function /Script/Engine.SphereComponent.SetSphereRadius (Underlying native function: SetSphereRadius 0x9d2d298)
	void SetSphereRadius(float& InSphereRadius, bool& bUpdateOverlaps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SphereComponent.GetUnscaledSphereRadius (Underlying native function: GetUnscaledSphereRadius 0x9ce0d68)
	float GetUnscaledSphereRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SphereComponent.GetShapeScale (Underlying native function: GetShapeScale 0x9ce0cd4)
	float GetShapeScale(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SphereComponent.GetScaledSphereRadius (Underlying native function: GetScaledSphereRadius 0x9d29730)
	float GetScaledSphereRadius(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

