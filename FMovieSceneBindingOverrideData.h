// ScriptStruct /Script/MovieScene.MovieSceneBindingOverrideData
// Size: 0x48
struct FMovieSceneBindingOverrideData
{
	struct FMovieSceneObjectBindingID ObjectBindingID; // 0x0 (0x18)
	struct TWeakObjectPtr<class UObject> Object; // 0x18 (0x28)
	bool bOverridesDefault; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

