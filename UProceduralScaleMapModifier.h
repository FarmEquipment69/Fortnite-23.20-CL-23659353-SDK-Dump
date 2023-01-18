// Class /Script/Procedural.ProceduralScaleMapModifier
// Size: 0x50
class UProceduralScaleMapModifier : public UProceduralScaleModifier
{
	bool bRemapScale; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FFloatInterval* RemapScale; // 0x3c (0x8)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	class UProceduralFloatDataMap* Map; // 0x48 (0x8)

	/* Functions */

	// Function /Script/Procedural.ProceduralScaleMapModifier.SetRemapScaleMin (Underlying native function: SetRemapScaleMin 0x7f92e04)
	void SetRemapScaleMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralScaleMapModifier.SetRemapScaleMax (Underlying native function: SetRemapScaleMax 0x7f92d74)
	void SetRemapScaleMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralScaleMapModifier.GetRemapScaleMin (Underlying native function: GetRemapScaleMin 0x28a35b8)
	float GetRemapScaleMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralScaleMapModifier.GetRemapScaleMax (Underlying native function: GetRemapScaleMax 0x7f92868)
	float GetRemapScaleMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

