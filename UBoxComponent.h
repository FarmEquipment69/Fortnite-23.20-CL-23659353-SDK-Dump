// Class /Script/Engine.BoxComponent
// Size: 0x580
class UBoxComponent : public UShapeComponent
{
	struct FVector BoxExtent; // 0x560 (0x18)
	float LineThickness; // 0x578 (0x4)
	unsigned char padding_57c[0x4]; // 0x57c (0x4)

	/* Functions */

	// Function /Script/Engine.BoxComponent.SetLineThickness (Underlying native function: SetLineThickness 0x9c20800)
	void SetLineThickness(float& Thickness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.BoxComponent.SetBoxExtent (Underlying native function: SetBoxExtent 0x1457f20)
	void SetBoxExtent(struct FVector& InBoxExtent, bool& bUpdateOverlaps); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.BoxComponent.GetUnscaledBoxExtent (Underlying native function: GetUnscaledBoxExtent 0x9ce0d40)
	struct FVector GetUnscaledBoxExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.BoxComponent.GetScaledBoxExtent (Underlying native function: GetScaledBoxExtent 0x9ce092c)
	struct FVector GetScaledBoxExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

