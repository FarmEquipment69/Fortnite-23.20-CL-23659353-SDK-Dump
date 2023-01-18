// Class /Script/Engine.CurveLinearColor
// Size: 0x250
class UCurveLinearColor : public UCurveBase
{
	struct FRichCurve FloatCurves[0x4]; // 0x30 (0x80) (ARRAY) 
	float AdjustHue; // 0x230 (0x4)
	float AdjustSaturation; // 0x234 (0x4)
	float AdjustBrightness; // 0x238 (0x4)
	float AdjustBrightnessCurve; // 0x23c (0x4)
	float AdjustVibrance; // 0x240 (0x4)
	float AdjustMinAlpha; // 0x244 (0x4)
	float AdjustMaxAlpha; // 0x248 (0x4)
	unsigned char padding_24c[0x4]; // 0x24c (0x4)

	/* Functions */

	// Function /Script/Engine.CurveLinearColor.GetUnadjustedLinearColorValue (Underlying native function: GetUnadjustedLinearColorValue 0x9d2a548)
	struct FLinearColor GetUnadjustedLinearColorValue(float& InTime); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CurveLinearColor.GetLinearColorValue (Underlying native function: GetLinearColorValue 0x9d2807c)
	struct FLinearColor GetLinearColorValue(float& InTime); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CurveLinearColor.GetClampedLinearColorValue (Underlying native function: GetClampedLinearColorValue 0x9d273a4)
	struct FLinearColor GetClampedLinearColorValue(float& InTime); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

