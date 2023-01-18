// ScriptStruct /Script/Engine.MeshMergingSettings
// Size: 0xd0
struct FMeshMergingSettings
{
	int TargetLightMapResolution; // 0x0 (0x4)
	enum EUVOutput OutputUVs[0x8]; // 0x4 (0x1) (ARRAY) 
	struct FMaterialProxySettings MaterialSettings; // 0xc (0x94)
	int GutterSize; // 0xa0 (0x4)
	enum EMeshLODSelectionType LODSelectionType; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	int SpecificLOD; // 0xa8 (0x4)
	unsigned char bGenerateLightMapUV; // 0xac (0x1)
	unsigned char bComputedLightMapResolution; // 0xac (0x1)
	unsigned char bPivotPointAtZero; // 0xac (0x1)
	unsigned char bMergePhysicsData; // 0xac (0x1)
	unsigned char bMergeMaterials; // 0xac (0x1)
	unsigned char bCreateMergedMaterial; // 0xac (0x1)
	unsigned char bBakeVertexDataToMesh; // 0xac (0x1)
	unsigned char bUseVertexDataForBakingMaterial; // 0xac (0x1)
	unsigned char bUseTextureBinning; // 0xad (0x1)
	unsigned char bReuseMeshLightmapUVs; // 0xad (0x1)
	unsigned char bMergeEquivalentMaterials; // 0xad (0x1)
	unsigned char bUseLandscapeCulling; // 0xad (0x1)
	unsigned char bIncludeImposters; // 0xad (0x1)
	unsigned char bSupportRayTracing; // 0xad (0x1)
	unsigned char bAllowDistanceField; // 0xad (0x1)
	unsigned char unreflected_ae[0x2]; // 0xae (0x2) 
	struct FMeshNaniteSettings NaniteSettings; // 0xb0 (0x1c)
	unsigned char padding_cc[0x4]; // 0xcc (0x4)
};

