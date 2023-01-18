// Class /Script/Water.WaterMeshComponent
// Size: 0x6a0
class UWaterMeshComponent : public UMeshComponent
{
	int ForceCollapseDensityLevel; // 0x580 (0x4)
	unsigned char unreflected_584[0x4]; // 0x584 (0x4) 
	class UMaterialInterface* FarDistanceMaterial; // 0x588 (0x8)
	float FarDistanceMeshExtent; // 0x590 (0x4)
	float TileSize; // 0x594 (0x4)
	struct FIntPoint* ExtentInTiles; // 0x598 (0x8)
	unsigned char unreflected_5a0[0x98]; // 0x5a0 (0x98) 
	struct TSet<class UMaterialInterface*> UsedMaterials; // 0x638 (0x50)
	bool bUseFarMeshWithoutOcean; // 0x688 (0x1)
	unsigned char unreflected_689[0xf]; // 0x689 (0xf) 
	int TessellationFactor; // 0x698 (0x4)
	float LODScale; // 0x69c (0x4)

	/* Functions */

	// Function /Script/Water.WaterMeshComponent.IsEnabled (Underlying native function: IsEnabled 0x7120c78)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

