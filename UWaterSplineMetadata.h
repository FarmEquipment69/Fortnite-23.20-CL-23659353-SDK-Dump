// Class /Script/Water.WaterSplineMetadata
// Size: 0xa0
class UWaterSplineMetadata : public USplineMetadata
{
	struct FInterpCurveFloat Depth; // 0x28 (0x18)
	struct FInterpCurveFloat WaterVelocityScalar; // 0x40 (0x18)
	struct FInterpCurveFloat RiverWidth; // 0x58 (0x18)
	struct FInterpCurveFloat AudioIntensity; // 0x70 (0x18)
	struct FInterpCurveVector WaterVelocity; // 0x88 (0x18)
};

