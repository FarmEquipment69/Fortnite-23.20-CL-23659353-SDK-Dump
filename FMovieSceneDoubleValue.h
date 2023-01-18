// ScriptStruct /Script/MovieScene.MovieSceneDoubleValue
// Size: 0x20
struct FMovieSceneDoubleValue
{
	double Value; // 0x0 (0x8)
	struct FMovieSceneTangentData Tangent; // 0x8 (0x14)
	struct TEnumAsByte<ERichCurveInterpMode> InterpMode; // 0x1c (0x1)
	struct TEnumAsByte<ERichCurveTangentMode> TangentMode; // 0x1d (0x1)
	unsigned char PaddingByte; // 0x1e (0x1)
	unsigned char padding_1f[0x1]; // 0x1f (0x1)
};

