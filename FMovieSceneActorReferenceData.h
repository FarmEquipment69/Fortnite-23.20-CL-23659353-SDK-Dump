// ScriptStruct /Script/MovieSceneTracks.MovieSceneActorReferenceData
// Size: 0x118
struct FMovieSceneActorReferenceData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50 (0x10)
	struct FMovieSceneActorReferenceKey DefaultValue; // 0x60 (0x20)
	struct TArray<struct FMovieSceneActorReferenceKey> KeyValues; // 0x80 (0x10)
	unsigned char padding_90[0x88]; // 0x90 (0x88)
};

