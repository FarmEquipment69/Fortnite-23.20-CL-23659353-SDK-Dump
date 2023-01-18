// Class /Script/Procedural.ProceduralRotationMapModifier
// Size: 0x60
class UProceduralRotationMapModifier : public UProceduralRotationModifier
{
	class UProceduralVectorDataMap* Map; // 0x38 (0x8)
	enum EProceduralRotationFormat RotationFormat; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	struct FFloatInterval* Roll; // 0x44 (0x8)
	struct FFloatInterval* Pitch; // 0x4c (0x8)
	struct FFloatInterval* Yaw; // 0x54 (0x8)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)

	/* Functions */

	// Function /Script/Procedural.ProceduralRotationMapModifier.SetYawMin (Underlying native function: SetYawMin 0x7f92f24)
	void SetYawMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationMapModifier.SetYawMax (Underlying native function: SetYawMax 0x7f92e94)
	void SetYawMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationMapModifier.SetRollMin (Underlying native function: SetRollMin 0x7f93044)
	void SetRollMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationMapModifier.SetRollMax (Underlying native function: SetRollMax 0x7f92fb4)
	void SetRollMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationMapModifier.SetPitchMin (Underlying native function: SetPitchMin 0x7f92bc4)
	void SetPitchMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationMapModifier.SetPitchMax (Underlying native function: SetPitchMax 0x7f92b34)
	void SetPitchMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralRotationMapModifier.GetYawMin (Underlying native function: GetYawMin 0x7f92890)
	float GetYawMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationMapModifier.GetYawMax (Underlying native function: GetYawMax 0x7f9287c)
	float GetYawMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationMapModifier.GetRollMin (Underlying native function: GetRollMin 0x7f928a4)
	float GetRollMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationMapModifier.GetRollMax (Underlying native function: GetRollMax 0x2d00a38)
	float GetRollMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationMapModifier.GetPitchMin (Underlying native function: GetPitchMin 0x2d00a24)
	float GetPitchMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralRotationMapModifier.GetPitchMax (Underlying native function: GetPitchMax 0x242f83c)
	float GetPitchMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

