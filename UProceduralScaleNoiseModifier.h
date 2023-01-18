// Class /Script/Procedural.ProceduralScaleNoiseModifier
// Size: 0x40
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier
{
	struct FFloatInterval* Scale; // 0x38 (0x8)

	/* Functions */

	// Function /Script/Procedural.ProceduralScaleNoiseModifier.SetScaleMin (Underlying native function: SetScaleMin 0x7f93164)
	void SetScaleMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralScaleNoiseModifier.SetScaleMax (Underlying native function: SetScaleMax 0x7f930d4)
	void SetScaleMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralScaleNoiseModifier.GetScaleMin (Underlying native function: GetScaleMin 0x6d2c944)
	float GetScaleMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralScaleNoiseModifier.GetScaleMax (Underlying native function: GetScaleMax 0x28a35b8)
	float GetScaleMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

