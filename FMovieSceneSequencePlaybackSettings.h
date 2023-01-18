// ScriptStruct /Script/MovieScene.MovieSceneSequencePlaybackSettings
// Size: 0x20
struct FMovieSceneSequencePlaybackSettings
{
	unsigned char bAutoPlay; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FMovieSceneSequenceLoopCount LoopCount; // 0x4 (0x4)
	struct FMovieSceneSequenceTickInterval TickInterval; // 0x8 (0xc)
	float PlayRate; // 0x14 (0x4)
	float StartTime; // 0x18 (0x4)
	unsigned char bRandomStartTime; // 0x1c (0x1)
	unsigned char bRestoreState; // 0x1c (0x1)
	unsigned char bDisableMovementInput; // 0x1c (0x1)
	unsigned char bDisableLookAtInput; // 0x1c (0x1)
	unsigned char bHidePlayer; // 0x1c (0x1)
	unsigned char bHideHUD; // 0x1c (0x1)
	unsigned char bDisableCameraCuts; // 0x1c (0x1)
	unsigned char bPauseAtEnd; // 0x1c (0x1)
	unsigned char bInheritTickIntervalFromOwner; // 0x1d (0x1)
	unsigned char bDynamicWeighting; // 0x1d (0x1)
	unsigned char padding_1e[0x2]; // 0x1e (0x2)
};

