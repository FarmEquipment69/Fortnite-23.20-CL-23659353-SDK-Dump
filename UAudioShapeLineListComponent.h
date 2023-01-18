// Class /Script/AudioShapes.AudioShapeLineListComponent
// Size: 0x1e0
class UAudioShapeLineListComponent : public UAudioShapePrimitiveComponent
{
	struct TArray<struct FVector> PointList; // 0x1c8 (0x10)
	bool bClosedLoop; // 0x1d8 (0x1)
	unsigned char padding_1d9[0x7]; // 0x1d9 (0x7)

	/* Functions */

	// Function /Script/AudioShapes.AudioShapeLineListComponent.UpdatePoint (Underlying native function: UpdatePoint 0x7df765c)
	bool UpdatePoint(int& InIndex, struct FVector& InPoint); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AudioShapes.AudioShapeLineListComponent.RemovePoint (Underlying native function: RemovePoint 0x7df719c)
	bool RemovePoint(int& InIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioShapes.AudioShapeLineListComponent.GetPoints (Underlying native function: GetPoints 0x7df70f8)
	void GetPoints(struct TArray<struct FVector>& OutPoints); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioShapes.AudioShapeLineListComponent.AddPoint (Underlying native function: AddPoint 0x7df6fc0)
	int AddPoint(struct FVector& InPoint); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

