// ScriptStruct /Script/PoseSearch.MotionMatchingState
// Size: 0x100
struct FMotionMatchingState
{
	float ElapsedPoseJumpTime; // 0x48 (0x4)
	enum EMotionMatchingFlags Flags; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	struct FTransform RootMotionTransformDelta; // 0x50 (0x60)
	unsigned char padding_b0[0x50]; // 0xb0 (0x50)
};

