// ScriptStruct /Script/MovieSceneTracks.MovieSceneStringChannel
// Size: 0x110
struct FMovieSceneStringChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x50 (0x10)
	struct TArray<struct FString> Values; // 0x60 (0x10)
	struct FString DefaultValue; // 0x70 (0x10)
	bool bHasDefaultValue; // 0x80 (0x1)
	unsigned char padding_81[0x8f]; // 0x81 (0x8f)
};

