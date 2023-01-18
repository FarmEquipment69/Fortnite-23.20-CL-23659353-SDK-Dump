// Class /Script/FieldSystemEngine.RadialVector
// Size: 0xc0
class URadialVector : public UFieldNodeVector
{
	float Magnitude; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct FVector Position; // 0xa8 (0x18)

	/* Functions */

	// Function /Script/FieldSystemEngine.RadialVector.SetRadialVector (Underlying native function: SetRadialVector 0x2706230)
	class URadialVector* SetRadialVector(float& Magnitude, struct FVector& Position); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

