// Class /Script/PoseSearch.PoseSearchSchema
// Size: 0xb8
class UPoseSearchSchema : public UDataAsset
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	class USkeleton* Skeleton; // 0x38 (0x8)
	int SampleRate; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<class UPoseSearchFeatureChannel*> Channels; // 0x48 (0x10)
	class UMirrorDataTable* MirrorDataTable; // 0x58 (0x8)
	enum EPoseSearchDataPreprocessor DataPreprocessor; // 0x60 (0x4)
	int SchemaCardinality; // 0x64 (0x4)
	struct TArray<struct FBoneReference> BoneReferences; // 0x68 (0x10)
	struct TArray<uint16_t> BoneIndices; // 0x78 (0x10)
	struct TArray<uint16_t> BoneIndicesWithParents; // 0x88 (0x10)
	float ContinuingPoseCostBias; // 0x98 (0x4)
	float BaseCostBias; // 0x9c (0x4)
	float MirrorMismatchCostBias; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct TArray<struct FPoseSearchSchemaColorPreset> ColorPresets; // 0xa8 (0x10)
};

