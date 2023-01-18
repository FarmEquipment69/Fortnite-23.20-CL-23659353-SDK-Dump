// Class /Script/MovieScene.MovieSceneCompiledData
// Size: 0x3f8
class UMovieSceneCompiledData : public UObject
{
	struct FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28 (0x160)
	struct FMovieSceneSequenceHierarchy Hierarchy; // 0x188 (0x118)
	struct FMovieSceneEntityComponentField EntityComponentField; // 0x2a0 (0xf0)
	struct FMovieSceneEvaluationField TrackTemplateField; // 0x390 (0x30)
	struct TArray<struct FFrameTime*> DeterminismFences; // 0x3c0 (0x10)
	struct FGuid CompiledSignature; // 0x3d0 (0x10)
	struct FGuid CompilerVersion; // 0x3e0 (0x10)
	struct FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f0 (0x1)
	struct FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f1 (0x1)
	enum EMovieSceneSequenceFlags AccumulatedFlags; // 0x3f2 (0x1)
	unsigned char padding_3f3[0x5]; // 0x3f3 (0x5)
};

