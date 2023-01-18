// ScriptStruct /Script/MovieSceneTracks.MovieSceneEventChannel
// Size: 0xf8
struct FMovieSceneEventChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50 (0x10)
	struct TArray<struct FMovieSceneEvent> KeyValues; // 0x60 (0x10)
	unsigned char padding_70[0x88]; // 0x70 (0x88)
};

