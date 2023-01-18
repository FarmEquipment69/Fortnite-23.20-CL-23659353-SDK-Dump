// Class /Script/FieldSystemEngine.NoiseField
// Size: 0x110
class UNoiseField : public UFieldNodeFloat
{
	float MinRange; // 0xa0 (0x4)
	float MaxRange; // 0xa4 (0x4)
	unsigned char unreflected_a8[0x8]; // 0xa8 (0x8) 
	struct FTransform Transform; // 0xb0 (0x60)

	/* Functions */

	// Function /Script/FieldSystemEngine.NoiseField.SetNoiseField (Underlying native function: SetNoiseField 0x99a445c)
	class UNoiseField* SetNoiseField(float& MinRange, float& MaxRange, struct FTransform& Transform); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

