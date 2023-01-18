// Class /Script/PoseSearch.PoseSearchFeatureChannel_Position
// Size: 0x60
class UPoseSearchFeatureChannel_Position : public UPoseSearchFeatureChannel
{
	struct FBoneReference bone; // 0x40 (0xc)
	float Weight; // 0x4c (0x4)
	float SampleTimeOffset; // 0x50 (0x4)
	int8_t SchemaBoneIdx; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	int ColorPresetIndex; // 0x58 (0x4)
	enum EInputQueryPose InputQueryPose; // 0x5c (0x1)
	bool bUseSampleTimeOffsetRootBone; // 0x5d (0x1)
	unsigned char padding_5e[0x2]; // 0x5e (0x2)
};

