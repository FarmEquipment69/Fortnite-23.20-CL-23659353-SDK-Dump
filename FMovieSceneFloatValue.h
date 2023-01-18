// ScriptStruct /Script/MovieScene.MovieSceneFloatValue
// Size: 0x1c
struct FMovieSceneFloatValue
{
	float Value; // 0x0 (0x4)
	struct FMovieSceneTangentData Tangent; // 0x4 (0x14)
	struct TEnumAsByte<ERichCurveInterpMode> InterpMode; // 0x18 (0x1)
	struct TEnumAsByte<ERichCurveTangentMode> TangentMode; // 0x19 (0x1)
	unsigned char PaddingByte; // 0x1a (0x1)
	unsigned char padding_1b[0x1]; // 0x1b (0x1)
};

