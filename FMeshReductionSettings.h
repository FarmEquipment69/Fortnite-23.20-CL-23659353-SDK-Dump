// ScriptStruct /Script/Engine.MeshReductionSettings
// Size: 0x24
struct FMeshReductionSettings
{
	float PercentTriangles; // 0x0 (0x4)
	float PercentVertices; // 0x4 (0x4)
	float MaxDeviation; // 0x8 (0x4)
	float PixelError; // 0xc (0x4)
	float WeldingThreshold; // 0x10 (0x4)
	float HardAngleThreshold; // 0x14 (0x4)
	int BaseLODModel; // 0x18 (0x4)
	struct TEnumAsByte<EMeshFeatureImportance> SilhouetteImportance; // 0x1c (0x1)
	struct TEnumAsByte<EMeshFeatureImportance> TextureImportance; // 0x1d (0x1)
	struct TEnumAsByte<EMeshFeatureImportance> ShadingImportance; // 0x1e (0x1)
	unsigned char bRecalculateNormals; // 0x1f (0x1)
	unsigned char bGenerateUniqueLightmapUVs; // 0x1f (0x1)
	unsigned char bKeepSymmetry; // 0x1f (0x1)
	unsigned char bVisibilityAided; // 0x1f (0x1)
	unsigned char bCullOccluded; // 0x1f (0x1)
	enum EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20 (0x1)
	struct TEnumAsByte<EMeshFeatureImportance> VisibilityAggressiveness; // 0x21 (0x1)
	struct TEnumAsByte<EMeshFeatureImportance> VertexColorImportance; // 0x22 (0x1)
	unsigned char padding_23[0x1]; // 0x23 (0x1)
};

