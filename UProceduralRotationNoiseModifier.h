// Class /Script/Procedural.ProceduralRotationNoiseModifier
// Size: 0x60
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier
{
	unsigned char bRandomRoll; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FFloatInterval* RandomRoll; // 0x3c (0x8)
	unsigned char bRandomPitch; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct FFloatInterval* RandomPitch; // 0x48 (0x8)
	unsigned char bRandomYaw; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	struct FFloatInterval* RandomYaw; // 0x54 (0x8)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)

	/* Functions */

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomYawMin (Underlying native function: SetRandomYawMin 0x7f92f24)
	void SetRandomYawMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomYawMax (Underlying native function: SetRandomYawMax 0x7f92e94)
	void SetRandomYawMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomRollMin (Underlying native function: SetRandomRollMin 0x7f92e04)
	void SetRandomRollMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomRollMax (Underlying native function: SetRandomRollMax 0x7f92d74)
	void SetRandomRollMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMin (Underlying native function: SetRandomPitchMin 0x7f92ce4)
	void SetRandomPitchMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.SetRandomPitchMax (Underlying native function: SetRandomPitchMax 0x7f92c54)
	void SetRandomPitchMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomYawMin (Underlying native function: GetRandomYawMin 0x7f92890)
	float GetRandomYawMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomYawMax (Underlying native function: GetRandomYawMax 0x7f9287c)
	float GetRandomYawMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomRollMin (Underlying native function: GetRandomRollMin 0x28a35b8)
	float GetRandomRollMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomRollMax (Underlying native function: GetRandomRollMax 0x7f92868)
	float GetRandomRollMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMin (Underlying native function: GetRandomPitchMin 0x2d00a38)
	float GetRandomPitchMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationNoiseModifier.GetRandomPitchMax (Underlying native function: GetRandomPitchMax 0x2d00a24)
	float GetRandomPitchMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

