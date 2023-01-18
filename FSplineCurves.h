// ScriptStruct /Script/Engine.SplineCurves
// Size: 0x70
struct FSplineCurves
{
	struct FInterpCurveVector Position; // 0x0 (0x18)
	struct FInterpCurveQuat Rotation; // 0x18 (0x18)
	struct FInterpCurveVector Scale; // 0x30 (0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48 (0x18)
	class USplineMetadata* MetaData; // 0x60 (0x8)
	uint32_t Version; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

