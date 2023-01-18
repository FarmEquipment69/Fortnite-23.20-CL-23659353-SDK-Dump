// ScriptStruct /Script/Engine.LightmassWorldInfoSettings
// Size: 0x4c
struct FLightmassWorldInfoSettings
{
	float StaticLightingLevelScale; // 0x0 (0x4)
	int NumIndirectLightingBounces; // 0x4 (0x4)
	int NumSkyLightingBounces; // 0x8 (0x4)
	float IndirectLightingQuality; // 0xc (0x4)
	float IndirectLightingSmoothness; // 0x10 (0x4)
	struct FColor EnvironmentColor; // 0x14 (0x4)
	float EnvironmentIntensity; // 0x18 (0x4)
	float EmissiveBoost; // 0x1c (0x4)
	float DiffuseBoost; // 0x20 (0x4)
	struct TEnumAsByte<EVolumeLightingMethod> VolumeLightingMethod; // 0x24 (0x1)
	unsigned char bUseAmbientOcclusion; // 0x25 (0x1)
	unsigned char bGenerateAmbientOcclusionMaterialMask; // 0x25 (0x1)
	unsigned char bVisualizeMaterialDiffuse; // 0x25 (0x1)
	unsigned char bVisualizeAmbientOcclusion; // 0x25 (0x1)
	unsigned char bCompressLightmaps; // 0x25 (0x1)
	unsigned char unreflected_26[0x2]; // 0x26 (0x2) 
	float VolumetricLightmapDetailCellSize; // 0x28 (0x4)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c (0x4)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30 (0x4)
	float VolumeLightSamplePlacementScale; // 0x34 (0x4)
	float DirectIlluminationOcclusionFraction; // 0x38 (0x4)
	float IndirectIlluminationOcclusionFraction; // 0x3c (0x4)
	float OcclusionExponent; // 0x40 (0x4)
	float FullyOccludedSamplesFraction; // 0x44 (0x4)
	float MaxOcclusionDistance; // 0x48 (0x4)
};

