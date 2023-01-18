// Class /Script/Procedural.ProceduralSurfaceSlopeAngleMap
// Size: 0xc8
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap
{
	bool bNormalizedSlopeAngle; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	struct FFloatInterval* SlopeAngleRange; // 0xbc (0x8)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)

	/* Functions */

	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMin (Underlying native function: SetSlopeAngleRangeMin 0x7f92a14)
	void SetSlopeAngleRangeMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.SetSlopeAngleRangeMax (Underlying native function: SetSlopeAngleRangeMax 0x7f9297c)
	void SetSlopeAngleRangeMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetValue (Underlying native function: GetValue 0x7f928e8)
	float GetValue(float& InSlopeAngle); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMin (Underlying native function: GetSlopeAngleRangeMin 0x711ff44)
	float GetSlopeAngleRangeMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralSurfaceSlopeAngleMap.GetSlopeAngleRangeMax (Underlying native function: GetSlopeAngleRangeMax 0x71cfd34)
	float GetSlopeAngleRangeMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

