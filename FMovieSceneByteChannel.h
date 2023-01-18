// ScriptStruct /Script/MovieScene.MovieSceneByteChannel
// Size: 0x108
struct FMovieSceneByteChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x50 (0x10)
	unsigned char DefaultValue; // 0x60 (0x1)
	bool bHasDefaultValue; // 0x61 (0x1)
	unsigned char unreflected_62[0x6]; // 0x62 (0x6) 
	struct TArray<unsigned char> Values; // 0x68 (0x10)
	class UEnum* Enum; // 0x78 (0x8)
	unsigned char padding_80[0x88]; // 0x80 (0x88)
};

