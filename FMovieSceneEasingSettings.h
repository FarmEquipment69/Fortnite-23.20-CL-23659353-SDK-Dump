// ScriptStruct /Script/MovieScene.MovieSceneEasingSettings
// Size: 0x38
struct FMovieSceneEasingSettings
{
	int AutoEaseInDuration; // 0x0 (0x4)
	int AutoEaseOutDuration; // 0x4 (0x4)
	struct TScriptInterface<class IMovieSceneEasingFunction> EaseIn; // 0x8 (0x10)
	bool bManualEaseIn; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	int ManualEaseInDuration; // 0x1c (0x4)
	struct TScriptInterface<class IMovieSceneEasingFunction> EaseOut; // 0x20 (0x10)
	bool bManualEaseOut; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int ManualEaseOutDuration; // 0x34 (0x4)
};

