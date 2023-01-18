// ScriptStruct /Script/ControlRig.MovieSceneControlRigSpaceChannel
// Size: 0x110
struct FMovieSceneControlRigSpaceChannel : FMovieSceneChannel
{
	struct TArray<struct FFrameNumber> KeyTimes; // 0x50 (0x10)
	struct TArray<struct FMovieSceneControlRigSpaceBaseKey> KeyValues; // 0x60 (0x10)
	unsigned char padding_70[0xa0]; // 0x70 (0xa0)
};

