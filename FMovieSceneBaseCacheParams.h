// ScriptStruct /Script/MovieSceneTracks.MovieSceneBaseCacheParams
// Size: 0x20
struct FMovieSceneBaseCacheParams
{
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8 (0x4)
	struct FFrameNumber StartFrameOffset; // 0xc (0x4)
	struct FFrameNumber EndFrameOffset; // 0x10 (0x4)
	float PlayRate; // 0x14 (0x4)
	unsigned char bReverse; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};

