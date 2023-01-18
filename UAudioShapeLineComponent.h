// Class /Script/AudioShapes.AudioShapeLineComponent
// Size: 0x1f8
class UAudioShapeLineComponent : public UAudioShapePrimitiveComponent
{
	struct FVector StartPoint; // 0x1c8 (0x18)
	struct FVector EndPoint; // 0x1e0 (0x18)

	/* Functions */

	// Function /Script/AudioShapes.AudioShapeLineComponent.SetStartPoint (Underlying native function: SetStartPoint 0x7df7528)
	void SetStartPoint(struct FVector& InStartPoint); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AudioShapes.AudioShapeLineComponent.SetEndPoint (Underlying native function: SetEndPoint 0x7df7378)
	void SetEndPoint(struct FVector& InEndPoint); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

