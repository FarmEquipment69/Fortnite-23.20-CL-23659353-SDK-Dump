// Class /Script/Procedural.ProceduralPointCloud
// Size: 0x38
class UProceduralPointCloud : public UObject
{
	struct TArray<struct FProceduralPointCloudPoint> Points; // 0x28 (0x10)

	/* Functions */

	// Function /Script/Procedural.ProceduralPointCloud.GetPointsByTag (Underlying native function: GetPointsByTag 0x7f92748)
	struct TArray<struct FProceduralPointCloudPoint> GetPointsByTag(struct FName& InTag); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.ProceduralPointCloud.Empty (Underlying native function: Empty 0x7f923a8)
	void Empty(); // (Final | Native | Public | BlueprintCallable)
};

