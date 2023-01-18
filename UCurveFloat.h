// Class /Script/Engine.CurveFloat
// Size: 0xb8
class UCurveFloat : public UCurveBase
{
	struct FRichCurve FloatCurve; // 0x30 (0x80)
	bool bIsEventCurve; // 0xb0 (0x1)
	unsigned char padding_b1[0x7]; // 0xb1 (0x7)

	/* Functions */

	// Function /Script/Engine.CurveFloat.GetFloatValue (Underlying native function: GetFloatValue 0x2719a48)
	float GetFloatValue(float& InTime); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

