// ScriptStruct /Script/MovieSceneTracks.MovieScene3DTransformKeyStruct
// Size: 0x60
struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct
{
	struct FVector Location; // 0x8 (0x18)
	struct FRotator Rotation; // 0x20 (0x18)
	struct FVector3f Scale; // 0x38 (0xc)
	struct FFrameNumber Time; // 0x44 (0x4)
	unsigned char padding_48[0x18]; // 0x48 (0x18)
};

