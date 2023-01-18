// ScriptStruct /Script/MovieScene.MovieSceneDoubleChannel
// Size: 0x118
struct FMovieSceneDoubleChannel : FMovieSceneChannel
{
	struct TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap; // 0x50 (0x1)
	struct TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap; // 0x51 (0x1)
	unsigned char unreflected_52[0x6]; // 0x52 (0x6) 
	struct TArray<struct FFrameNumber> Times; // 0x58 (0x10)
	struct TArray<struct FMovieSceneDoubleValue> Values; // 0x68 (0x10)
	double DefaultValue; // 0x78 (0x8)
	bool bHasDefaultValue; // 0x80 (0x1)
	unsigned char unreflected_81[0x7]; // 0x81 (0x7) 
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x88 (0x88)
	struct FFrameRate* TickResolution; // 0x110 (0x8)
};

