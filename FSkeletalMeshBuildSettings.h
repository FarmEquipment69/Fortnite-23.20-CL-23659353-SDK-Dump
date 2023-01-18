// ScriptStruct /Script/Engine.SkeletalMeshBuildSettings
// Size: 0x18
struct FSkeletalMeshBuildSettings
{
	unsigned char bRecomputeNormals; // 0x0 (0x1)
	unsigned char bRecomputeTangents; // 0x0 (0x1)
	unsigned char bUseMikkTSpace; // 0x0 (0x1)
	unsigned char bComputeWeightedNormals; // 0x0 (0x1)
	unsigned char bRemoveDegenerates; // 0x0 (0x1)
	unsigned char bUseHighPrecisionTangentBasis; // 0x0 (0x1)
	unsigned char bUseFullPrecisionUVs; // 0x0 (0x1)
	unsigned char bUseBackwardsCompatibleF16TruncUVs; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float ThresholdPosition; // 0x4 (0x4)
	float ThresholdTangentNormal; // 0x8 (0x4)
	float ThresholdUV; // 0xc (0x4)
	float MorphThresholdPosition; // 0x10 (0x4)
	int BoneInfluenceLimit; // 0x14 (0x4)
};

