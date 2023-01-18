// Class /Script/Landscape.LandscapeSplinesComponent
// Size: 0x570
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
	struct TArray<class ULandscapeSplineControlPoint*> ControlPoints; // 0x540 (0x10)
	struct TArray<class ULandscapeSplineSegment*> Segments; // 0x550 (0x10)
	struct TArray<class UMeshComponent*> CookedForeignMeshComponents; // 0x560 (0x10)

	/* Functions */

	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents (Underlying native function: GetSplineMeshComponents 0x7308ee4)
	struct TArray<class USplineMeshComponent*> GetSplineMeshComponents(); // (Final | Native | Public | BlueprintCallable)
};

