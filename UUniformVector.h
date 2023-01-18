// Class /Script/FieldSystemEngine.UniformVector
// Size: 0xc0
class UUniformVector : public UFieldNodeVector
{
	float Magnitude; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct FVector Direction; // 0xa8 (0x18)

	/* Functions */

	// Function /Script/FieldSystemEngine.UniformVector.SetUniformVector (Underlying native function: SetUniformVector 0x99a4b64)
	class UUniformVector* SetUniformVector(float& Magnitude, struct FVector& Direction); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

