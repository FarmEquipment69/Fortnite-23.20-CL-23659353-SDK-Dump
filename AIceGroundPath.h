// Class /Script/IceRuntime.IceGroundPath
// Size: 0x2e8
class AIceGroundPath : public AActor
{
	class UStaticMesh* StaticMesh; // 0x288 (0x8)
	class UMaterial* Material; // 0x290 (0x8)
	struct TEnumAsByte<ESplineMeshAxis> ForwardAxis; // 0x298 (0x1)
	unsigned char unreflected_299[0x7]; // 0x299 (0x7) 
	struct TArray<struct FVector_NetQuantize> SplinePoints; // 0x2a0 (0x10)
	struct FVector SplineOffset; // 0x2b0 (0x18)
	float SplineColliderExtentWidth; // 0x2c8 (0x4)
	float SplineColliderExtentHeight; // 0x2cc (0x4)
	float LandscapeTraceBuffer; // 0x2d0 (0x4)
	unsigned char unreflected_2d4[0x4]; // 0x2d4 (0x4) 
	struct TArray<class UBoxComponent*> BoxColliderArray; // 0x2d8 (0x10)

	/* Functions */

	// Function /Script/IceRuntime.IceGroundPath.OnRep_SplinePoints (Underlying native function: OnRep_SplinePoints 0x744ff14)
	void OnRepSplinePoints(); // (Final | Native | Private)

	// Function /Script/IceRuntime.IceGroundPath.GetLocationOnLandscape (Underlying native function: GetLocationOnLandscape 0x744f6d4)
	struct FVector GetLocationOnLandscape(struct FVector& Location); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/IceRuntime.IceGroundPath.GetLastSplinePointLocation (Underlying native function: GetLastSplinePointLocation 0x744f5fc)
	bool GetLastSplinePointLocation(struct FVector& LastPointLocation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/IceRuntime.IceGroundPath.AddSplinePoint (Underlying native function: AddSplinePoint 0x744f524)
	void AddSplinePoint(struct FVector& InWorldLoc); // (Final | Native | Public | HasDefaults | BlueprintCallable)
};

