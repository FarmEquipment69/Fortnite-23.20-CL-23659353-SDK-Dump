// ScriptStruct /Script/Engine.AnimNode_TransitionPoseEvaluator
// Size: 0xb8
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base
{
	unsigned char unreflected_10[0x88]; // 0x10 (0x88) 
	int FramesToCachePose; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct TEnumAsByte<EEvaluatorDataSource> DataSource; // 0xa0 (0x1)
	struct TEnumAsByte<EEvaluatorMode> EvaluatorMode; // 0xa1 (0x1)
	unsigned char padding_a2[0x16]; // 0xa2 (0x16)
};

