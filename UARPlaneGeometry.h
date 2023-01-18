// Class /Script/AugmentedReality.ARPlaneGeometry
// Size: 0x1b0
class UARPlaneGeometry : public UARTrackedGeometry
{
	enum EARPlaneOrientation Orientation; // 0x158 (0x1)
	unsigned char unreflected_159[0x7]; // 0x159 (0x7) 
	struct FVector Center; // 0x160 (0x18)
	struct FVector Extent; // 0x178 (0x18)
	struct TArray<struct FVector> BoundaryPolygon; // 0x190 (0x10)
	class UARPlaneGeometry* SubsumedBy; // 0x1a0 (0x8)
	unsigned char padding_1a8[0x8]; // 0x1a8 (0x8)

	/* Functions */

	// Function /Script/AugmentedReality.ARPlaneGeometry.GetSubsumedBy (Underlying native function: GetSubsumedBy 0x97bc718)
	class UARPlaneGeometry* GetSubsumedBy(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPlaneGeometry.GetOrientation (Underlying native function: GetOrientation 0x97bc5c8)
	enum EARPlaneOrientation GetOrientation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPlaneGeometry.GetExtent (Underlying native function: GetExtent 0x97bb140)
	struct FVector GetExtent(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPlaneGeometry.GetCenter (Underlying native function: GetCenter 0x97baf68)
	struct FVector GetCenter(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace (Underlying native function: GetBoundaryPolygonInLocalSpace 0x97bacf0)
	struct TArray<struct FVector> GetBoundaryPolygonInLocalSpace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

