// Class /Script/Engine.VectorFieldComponent
// Size: 0x570
class UVectorFieldComponent : public UPrimitiveComponent
{
	class UVectorField* VectorField; // 0x540 (0x8)
	float Intensity; // 0x548 (0x4)
	float Tightness; // 0x54c (0x4)
	unsigned char bPreviewVectorField; // 0x550 (0x1)
	unsigned char padding_551[0x1f]; // 0x551 (0x1f)

	/* Functions */

	// Function /Script/Engine.VectorFieldComponent.SetIntensity (Underlying native function: SetIntensity 0x9c1fdf0)
	void SetIntensity(float& NewIntensity); // (Native | Public | BlueprintCallable)
};

