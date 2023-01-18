// Class /Script/PoseSearch.PoseSearchFeatureChannel_Pose
// Size: 0x80
class UPoseSearchFeatureChannel_Pose : public UPoseSearchFeatureChannel
{
	float Weight; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FPoseSearchBone> SampledBones; // 0x48 (0x10)
	struct TArray<float> SampleTimes; // 0x58 (0x10)
	struct TArray<int8_t> SchemaBoneIdx; // 0x68 (0x10)
	enum EInputQueryPose InputQueryPose; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

