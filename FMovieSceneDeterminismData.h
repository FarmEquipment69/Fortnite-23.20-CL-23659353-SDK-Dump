// ScriptStruct /Script/MovieScene.MovieSceneDeterminismData
// Size: 0x18
struct FMovieSceneDeterminismData
{
	struct TArray<struct FFrameTime*> Fences; // 0x0 (0x10)
	bool bParentSequenceRequiresLowerFence; // 0x10 (0x1)
	bool bParentSequenceRequiresUpperFence; // 0x11 (0x1)
	unsigned char padding_12[0x6]; // 0x12 (0x6)
};

