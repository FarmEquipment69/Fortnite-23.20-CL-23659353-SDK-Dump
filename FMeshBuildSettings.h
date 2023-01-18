// ScriptStruct /Script/Engine.MeshBuildSettings
// Size: 0x48
struct FMeshBuildSettings
{
	unsigned char bUseMikkTSpace; // 0x0 (0x1)
	unsigned char bRecomputeNormals; // 0x0 (0x1)
	unsigned char bRecomputeTangents; // 0x0 (0x1)
	unsigned char bComputeWeightedNormals; // 0x0 (0x1)
	unsigned char bRemoveDegenerates; // 0x0 (0x1)
	unsigned char bBuildReversedIndexBuffer; // 0x0 (0x1)
	unsigned char bUseHighPrecisionTangentBasis; // 0x0 (0x1)
	unsigned char bUseFullPrecisionUVs; // 0x0 (0x1)
	unsigned char bUseBackwardsCompatibleF16TruncUVs; // 0x1 (0x1)
	unsigned char bGenerateLightmapUVs; // 0x1 (0x1)
	unsigned char bGenerateDistanceFieldAsIfTwoSided; // 0x1 (0x1)
	unsigned char bSupportFaceRemap; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int MinLightmapResolution; // 0x4 (0x4)
	int SrcLightmapIndex; // 0x8 (0x4)
	int DstLightmapIndex; // 0xc (0x4)
	float BuildScale; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector BuildScale3D; // 0x18 (0x18)
	float DistanceFieldResolutionScale; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	class UStaticMesh* DistanceFieldReplacementMesh; // 0x38 (0x8)
	int MaxLumenMeshCards; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

