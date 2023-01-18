// ScriptStruct /Script/PoseSearch.MotionMatchingSettings
// Size: 0x28
struct FMotionMatchingSettings
{
	float BlendTime; // 0x0 (0x4)
	int MaxActiveBlends; // 0x4 (0x4)
	class UBlendProfile* BlendProfile; // 0x8 (0x8)
	enum EAlphaBlendOption BlendOption; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float MirrorChangeBlendTime; // 0x14 (0x4)
	float PoseJumpThresholdTime; // 0x18 (0x4)
	float PoseReselectHistory; // 0x1c (0x4)
	float SearchThrottleTime; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

