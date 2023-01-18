// ScriptStruct /Script/MovieSceneTracks.MovieSceneCameraShakeSourceTriggerChannel
// Size: 0xf8
struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50 (0x10)
	struct TArray<struct FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x60 (0x10)
	unsigned char padding_70[0x88]; // 0x70 (0x88)
};

