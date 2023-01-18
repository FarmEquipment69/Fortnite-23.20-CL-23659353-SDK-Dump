// ScriptStruct /Script/Engine.MeshProxySettings
// Size: 0xd0
struct FMeshProxySettings
{
	int ScreenSize; // 0x0 (0x4)
	float VoxelSize; // 0x4 (0x4)
	struct FMaterialProxySettings MaterialSettings; // 0x8 (0x94)
	float MergeDistance; // 0x9c (0x4)
	struct FColor UnresolvedGeometryColor; // 0xa0 (0x4)
	float MaxRayCastDist; // 0xa4 (0x4)
	float HardAngleThreshold; // 0xa8 (0x4)
	int LightMapResolution; // 0xac (0x4)
	struct TEnumAsByte<EProxyNormalComputationMethod> NormalCalculationMethod; // 0xb0 (0x1)
	struct TEnumAsByte<ELandscapeCullingPrecision> LandscapeCullingPrecision; // 0xb1 (0x1)
	unsigned char bCalculateCorrectLODModel; // 0xb2 (0x1)
	unsigned char bOverrideVoxelSize; // 0xb2 (0x1)
	unsigned char bOverrideTransferDistance; // 0xb2 (0x1)
	unsigned char bUseHardAngleThreshold; // 0xb2 (0x1)
	unsigned char bComputeLightMapResolution; // 0xb2 (0x1)
	unsigned char bRecalculateNormals; // 0xb2 (0x1)
	unsigned char bUseLandscapeCulling; // 0xb2 (0x1)
	unsigned char bSupportRayTracing; // 0xb2 (0x1)
	unsigned char bAllowDistanceField; // 0xb3 (0x1)
	unsigned char bReuseMeshLightmapUVs; // 0xb3 (0x1)
	unsigned char bGroupIdenticalMeshesForBaking; // 0xb3 (0x1)
	unsigned char bCreateCollision; // 0xb3 (0x1)
	unsigned char bAllowVertexColors; // 0xb3 (0x1)
	unsigned char bGenerateLightmapUVs; // 0xb3 (0x1)
	struct FMeshNaniteSettings NaniteSettings; // 0xb4 (0x1c)
};

