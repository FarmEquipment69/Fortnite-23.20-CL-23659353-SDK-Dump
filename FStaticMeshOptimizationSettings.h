// ScriptStruct /Script/Engine.StaticMeshOptimizationSettings
// Size: 0x1c
struct FStaticMeshOptimizationSettings
{
	struct TEnumAsByte<EOptimizationType> ReductionMethod; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float NumOfTrianglesPercentage; // 0x4 (0x4)
	float MaxDeviationPercentage; // 0x8 (0x4)
	float WeldingThreshold; // 0xc (0x4)
	bool bRecalcNormals; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float NormalsThreshold; // 0x14 (0x4)
	unsigned char SilhouetteImportance; // 0x18 (0x1)
	unsigned char TextureImportance; // 0x19 (0x1)
	unsigned char ShadingImportance; // 0x1a (0x1)
	unsigned char padding_1b[0x1]; // 0x1b (0x1)
};

