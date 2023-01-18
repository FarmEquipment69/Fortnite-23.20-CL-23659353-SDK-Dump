// ScriptStruct /Script/MovieSceneTracks.MovieSceneEventSectionData
// Size: 0xf8
struct FMovieSceneEventSectionData : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> Times; // 0x50 (0x10)
	struct TArray<struct FEventPayload> KeyValues; // 0x60 (0x10)
	unsigned char padding_70[0x88]; // 0x70 (0x88)
};

