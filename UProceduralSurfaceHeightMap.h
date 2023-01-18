// Class /Script/Procedural.ProceduralSurfaceHeightMap
// Size: 0xc8
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap
{
	bool bNormalizedHeight; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	struct FFloatInterval* HeightRange; // 0xbc (0x8)
	unsigned char padding_c4[0x4]; // 0xc4 (0x4)

	/* Functions */

	// Function /Script/Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMin (Underlying native function: SetHeightRangeMin 0x7f92a14)
	void SetHeightRangeMin(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralSurfaceHeightMap.SetHeightRangeMax (Underlying native function: SetHeightRangeMax 0x7f9297c)
	void SetHeightRangeMax(float& InValue); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetValue (Underlying native function: GetValue 0x7f928e8)
	float GetValue(float& InHeight); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMin (Underlying native function: GetHeightRangeMin 0x711ff44)
	float GetHeightRangeMin(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Procedural.ProceduralSurfaceHeightMap.GetHeightRangeMax (Underlying native function: GetHeightRangeMax 0x71cfd34)
	float GetHeightRangeMax(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

