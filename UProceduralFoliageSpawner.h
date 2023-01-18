// Class /Script/Foliage.ProceduralFoliageSpawner
// Size: 0x68
class UProceduralFoliageSpawner : public UObject
{
	int RandomSeed; // 0x28 (0x4)
	float TileSize; // 0x2c (0x4)
	int NumUniqueTiles; // 0x30 (0x4)
	float MinimumQuadTreeSize; // 0x34 (0x4)
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40 (0x10)
	unsigned char padding_50[0x18]; // 0x50 (0x18)

	/* Functions */

	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate (Underlying native function: Simulate 0x9929f0c)
	void Simulate(int& numSteps); // (Final | Native | Public | BlueprintCallable)
};

