// Class /Script/MovieScene.MovieSceneTrackInstance
// Size: 0x50
class UMovieSceneTrackInstance : public UObject
{
	class UObject* AnimatedObject; // 0x28 (0x8)
	bool bIsMasterTrackInstance; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	class UMovieSceneEntitySystemLinker* PrivateLinker; // 0x38 (0x8)
	struct TArray<struct FMovieSceneTrackInstanceInput> Inputs; // 0x40 (0x10)
};

