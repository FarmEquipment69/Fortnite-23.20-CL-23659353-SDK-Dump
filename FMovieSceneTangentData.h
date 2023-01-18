// ScriptStruct /Script/MovieScene.MovieSceneTangentData
// Size: 0x14
struct FMovieSceneTangentData
{
	float ArriveTangent; // 0x0 (0x4)
	float LeaveTangent; // 0x4 (0x4)
	float ArriveTangentWeight; // 0x8 (0x4)
	float LeaveTangentWeight; // 0xc (0x4)
	struct TEnumAsByte<ERichCurveTangentWeightMode> TangentWeightMode; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

