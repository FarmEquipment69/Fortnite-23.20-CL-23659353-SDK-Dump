// Class /Script/PoseSearch.PoseSearchFeatureChannel_Trajectory
// Size: 0x58
class UPoseSearchFeatureChannel_Trajectory : public UPoseSearchFeatureChannel
{
	enum EPoseSearchFeatureDomain Domain; // 0x40 (0x4)
	float Weight; // 0x44 (0x4)
	struct TArray<struct FPoseSearchTrajectorySample> Samples; // 0x48 (0x10)
};

