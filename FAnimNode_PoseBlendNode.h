// ScriptStruct /Script/AnimGraphRuntime.AnimNode_PoseBlendNode
// Size: 0xb0
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler
{
	struct FPoseLink SourcePose; // 0x90 (0x10)
	enum EAlphaBlendOption BlendOption; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	class UCurveFloat* CustomCurve; // 0xa8 (0x8)
};

