// ScriptStruct /Script/ControlRig.MovieSceneControlRigInstanceData
// Size: 0x148
struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData
{
	bool bAdditive; // 0x8 (0x1)
	bool bApplyBoneFilter; // 0x9 (0x1)
	unsigned char unreflected_a[0x6]; // 0xa (0x6) 
	struct FInputBlendPose BoneFilter; // 0x10 (0x10)
	struct FMovieSceneFloatChannel Weight; // 0x20 (0x110)
	struct FMovieSceneEvaluationOperand Operand; // 0x130 (0x14)
	unsigned char padding_144[0x4]; // 0x144 (0x4)
};

