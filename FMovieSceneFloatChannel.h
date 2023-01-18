// ScriptStruct /Script/MovieScene.MovieSceneFloatChannel
// Size: 0x110
struct FMovieSceneFloatChannel : FMovieSceneChannel
{
	struct TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap; // 0x50 (0x1)
	struct TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap; // 0x51 (0x1)
	unsigned char unreflected_52[0x6]; // 0x52 (0x6) 
	struct TArray<struct FFrameNumber> Times; // 0x58 (0x10)
	struct TArray<struct FMovieSceneFloatValue> Values; // 0x68 (0x10)
	float DefaultValue; // 0x78 (0x4)
	bool bHasDefaultValue; // 0x7c (0x1)
	unsigned char unreflected_7d[0x3]; // 0x7d (0x3) 
	struct FMovieSceneKeyHandleMap KeyHandles; // 0x80 (0x88)
	struct FFrameRate* TickResolution; // 0x108 (0x8)
};

