// ScriptStruct /Script/MovieScene.MovieSceneSectionParameters
// Size: 0x24
struct FMovieSceneSectionParameters
{
	struct FFrameNumber StartFrameOffset; // 0x0 (0x4)
	bool bCanLoop; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct FFrameNumber EndFrameOffset; // 0x8 (0x4)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0xc (0x4)
	float TimeScale; // 0x10 (0x4)
	int HierarchicalBias; // 0x14 (0x4)
	float StartOffset; // 0x18 (0x4)
	float PrerollTime; // 0x1c (0x4)
	float PostrollTime; // 0x20 (0x4)
};

