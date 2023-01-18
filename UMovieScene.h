// Class /Script/MovieScene.MovieScene
// Size: 0x158
class UMovieScene : public UMovieSceneSignedObject
{
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct TArray<struct FMovieSceneSpawnable> Spawnables; // 0x60 (0x10)
	struct TArray<struct FMovieScenePossessable> Possessables; // 0x70 (0x10)
	struct TArray<struct FMovieSceneBinding> ObjectBindings; // 0x80 (0x10)
	struct TMap<struct FName, struct FMovieSceneObjectBindingIDs> BindingGroups; // 0x90 (0x50)
	struct TArray<class UMovieSceneTrack*> MasterTracks; // 0xe0 (0x10)
	class UMovieSceneTrack* CameraCutTrack; // 0xf0 (0x8)
	struct FMovieSceneFrameRange SelectionRange; // 0xf8 (0x10)
	struct FMovieSceneFrameRange PlaybackRange; // 0x108 (0x10)
	struct FFrameRate* TickResolution; // 0x118 (0x8)
	struct FFrameRate* DisplayRate; // 0x120 (0x8)
	enum EMovieSceneEvaluationType EvaluationType; // 0x128 (0x1)
	enum EUpdateClockSource ClockSource; // 0x129 (0x1)
	unsigned char unreflected_12a[0x6]; // 0x12a (0x6) 
	struct FSoftObjectPath CustomClockSourcePath; // 0x130 (0x18)
	struct TArray<struct FMovieSceneMarkedFrame> MarkedFrames; // 0x148 (0x10)
};

