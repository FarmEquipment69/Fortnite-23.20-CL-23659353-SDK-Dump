// ScriptStruct /Script/MovieSceneTracks.MovieScene3DPathSectionTemplate
// Size: 0x150
struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneObjectBindingID PathBindingID; // 0x20 (0x18)
	struct FMovieSceneFloatChannel TimingCurve; // 0x38 (0x110)
	enum MovieScene3DPathSection_Axis FrontAxisEnum; // 0x148 (0x1)
	enum MovieScene3DPathSection_Axis UpAxisEnum; // 0x149 (0x1)
	unsigned char unreflected_14a[0x2]; // 0x14a (0x2) 
	unsigned char bFollow; // 0x14c (0x1)
	unsigned char bReverse; // 0x14c (0x1)
	unsigned char bForceUpright; // 0x14c (0x1)
	unsigned char padding_14d[0x3]; // 0x14d (0x3)
};

