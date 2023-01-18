// ScriptStruct /Script/Engine.CameraExposureSettings
// Size: 0x40
struct FCameraExposureSettings
{
	struct TEnumAsByte<EAutoExposureMethod> Method; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float LowPercent; // 0x4 (0x4)
	float HighPercent; // 0x8 (0x4)
	float MinBrightness; // 0xc (0x4)
	float MaxBrightness; // 0x10 (0x4)
	float SpeedUp; // 0x14 (0x4)
	float SpeedDown; // 0x18 (0x4)
	float Bias; // 0x1c (0x4)
	class UCurveFloat* BiasCurve; // 0x20 (0x8)
	class UTexture* MeterMask; // 0x28 (0x8)
	float HistogramLogMin; // 0x30 (0x4)
	float HistogramLogMax; // 0x34 (0x4)
	float CalibrationConstant; // 0x38 (0x4)
	unsigned char ApplyPhysicalCameraExposure; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)
};

