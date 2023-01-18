// ScriptStruct /Script/MovieScene.MovieSceneIntegerChannel
// Size: 0x100
struct FMovieSceneIntegerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x50 (0x10)
	int DefaultValue; // 0x60 (0x4)
	bool bHasDefaultValue; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	struct TArray<int> Values; // 0x68 (0x10)
	unsigned char padding_78[0x88]; // 0x78 (0x88)
};

