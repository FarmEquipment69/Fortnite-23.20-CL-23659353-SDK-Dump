// Class /Script/Engine.CurveVector
// Size: 0x1b0
class UCurveVector : public UCurveBase
{
	struct FRichCurve FloatCurves[0x3]; // 0x30 (0x80) (ARRAY) 

	/* Functions */

	// Function /Script/Engine.CurveVector.GetVectorValue (Underlying native function: GetVectorValue 0x9d2ac74)
	struct FVector GetVectorValue(float& InTime); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

