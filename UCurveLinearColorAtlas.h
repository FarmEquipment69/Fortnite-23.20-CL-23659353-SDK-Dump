// Class /Script/Engine.CurveLinearColorAtlas
// Size: 0x180
class UCurveLinearColorAtlas : public UTexture2D
{
	uint32_t TextureSize; // 0x160 (0x4)
	unsigned char bSquareResolution; // 0x164 (0x1)
	unsigned char unreflected_165[0x3]; // 0x165 (0x3) 
	uint32_t TextureHeight; // 0x168 (0x4)
	unsigned char unreflected_16c[0x4]; // 0x16c (0x4) 
	struct TArray<class UCurveLinearColor*> GradientCurves; // 0x170 (0x10)

	/* Functions */

	// Function /Script/Engine.CurveLinearColorAtlas.GetCurvePosition (Underlying native function: GetCurvePosition 0x9d27444)
	bool GetCurvePosition(class UCurveLinearColor*& InCurve, float& Position); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

