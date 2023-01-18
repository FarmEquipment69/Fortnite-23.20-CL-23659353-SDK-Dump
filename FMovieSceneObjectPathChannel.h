// ScriptStruct /Script/MovieScene.MovieSceneObjectPathChannel
// Size: 0x130
struct FMovieSceneObjectPathChannel : FMovieSceneChannel
{
	unsigned char PropertyClass_50[0x8]; // 0x50 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	struct TArray<struct FFrameNumber> Times; // 0x58 (0x10)
	struct TArray<struct FMovieSceneObjectPathChannelKeyValue> Values; // 0x68 (0x10)
	struct FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x78 (0x30)
	unsigned char padding_a8[0x88]; // 0xa8 (0x88)
};

