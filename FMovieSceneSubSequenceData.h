// ScriptStruct /Script/MovieScene.MovieSceneSubSequenceData
// Size: 0x108
struct FMovieSceneSubSequenceData
{
	struct FSoftObjectPath Sequence; // 0x0 (0x18)
	struct FMovieSceneSequenceTransform OuterToInnerTransform; // 0x18 (0x20)
	struct FMovieSceneSequenceTransform RootToSequenceTransform; // 0x38 (0x20)
	struct FFrameRate* TickResolution; // 0x58 (0x8)
	struct FMovieSceneSequenceID DeterministicSequenceID; // 0x60 (0x4)
	struct FMovieSceneFrameRange ParentPlayRange; // 0x64 (0x10)
	struct FFrameNumber ParentStartFrameOffset; // 0x74 (0x4)
	struct FFrameNumber ParentEndFrameOffset; // 0x78 (0x4)
	struct FFrameNumber ParentFirstLoopStartFrameOffset; // 0x7c (0x4)
	bool bCanLoop; // 0x80 (0x1)
	unsigned char unreflected_81[0x3]; // 0x81 (0x3) 
	struct FMovieSceneFrameRange PlayRange; // 0x84 (0x10)
	struct FMovieSceneFrameRange FullPlayRange; // 0x94 (0x10)
	struct FMovieSceneFrameRange UnwarpedPlayRange; // 0xa4 (0x10)
	struct FMovieSceneFrameRange PreRollRange; // 0xb4 (0x10)
	struct FMovieSceneFrameRange PostRollRange; // 0xc4 (0x10)
	int16_t HierarchicalBias; // 0xd4 (0x2)
	unsigned char unreflected_d6[0x2]; // 0xd6 (0x2) 
	struct FMovieSceneSequenceInstanceDataPtr InstanceData; // 0xd8 (0x18)
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	struct FGuid SubSectionSignature; // 0xf8 (0x10)
};

