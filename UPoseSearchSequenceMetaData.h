// Class /Script/PoseSearch.PoseSearchSequenceMetaData
// Size: 0xe8
class UPoseSearchSequenceMetaData : public UAnimMetaData
{
	class UPoseSearchSchema* Schema; // 0x28 (0x8)
	struct FFloatInterval* SamplingRange; // 0x30 (0x8)
	struct FPoseSearchExtrapolationParameters ExtrapolationParameters; // 0x38 (0xc)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FPoseSearchIndex SearchIndex; // 0x48 (0xa0)
};

