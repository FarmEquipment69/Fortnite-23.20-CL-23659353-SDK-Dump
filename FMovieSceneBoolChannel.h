// ScriptStruct /Script/MovieScene.MovieSceneBoolChannel
// Size: 0x100
struct FMovieSceneBoolChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x50 (0x10)
	bool DefaultValue; // 0x60 (0x1)
	bool bHasDefaultValue; // 0x61 (0x1)
	unsigned char unreflected_62[0x6]; // 0x62 (0x6) 
	struct TArray<bool> Values; // 0x68 (0x10)
	unsigned char padding_78[0x88]; // 0x78 (0x88)
};

