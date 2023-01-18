// ScriptStruct /Script/MovieScene.MovieSceneEvaluationFieldEntityMetaData
// Size: 0x20
struct FMovieSceneEvaluationFieldEntityMetaData
{
	struct FString OverrideBoundPropertyPath; // 0x0 (0x10)
	struct FFrameNumber ForcedTime; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	enum ESectionEvaluationFlags Flags; // 0x18 (0x1)
	unsigned char bEvaluateInSequencePreRoll; // 0x19 (0x1)
	unsigned char bEvaluateInSequencePostRoll; // 0x19 (0x1)
	unsigned char padding_1a[0x6]; // 0x1a (0x6)
};

