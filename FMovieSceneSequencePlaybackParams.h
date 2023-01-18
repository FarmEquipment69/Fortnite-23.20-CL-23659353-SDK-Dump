// ScriptStruct /Script/MovieScene.MovieSceneSequencePlaybackParams
// Size: 0x28
struct FMovieSceneSequencePlaybackParams
{
	struct FFrameTime* Frame; // 0x0 (0x8)
	float Time; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FString MarkedFrame; // 0x10 (0x10)
	enum EMovieScenePositionType PositionType; // 0x20 (0x1)
	enum EUpdatePositionMethod UpdateMethod; // 0x21 (0x1)
	bool bHasJumped; // 0x22 (0x1)
	unsigned char padding_23[0x5]; // 0x23 (0x5)
};

