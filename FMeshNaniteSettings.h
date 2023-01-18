// ScriptStruct /Script/Engine.MeshNaniteSettings
// Size: 0x1c
struct FMeshNaniteSettings
{
	unsigned char bEnabled; // 0x0 (0x1)
	unsigned char bPreserveArea; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int PositionPrecision; // 0x4 (0x4)
	uint32_t TargetMinimumResidencyInKB; // 0x8 (0x4)
	float KeepPercentTriangles; // 0xc (0x4)
	float TrimRelativeError; // 0x10 (0x4)
	float FallbackPercentTriangles; // 0x14 (0x4)
	float FallbackRelativeError; // 0x18 (0x4)
};

