// Class /Script/MovieSceneTracks.MovieScene3DPathSection
// Size: 0x230
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
	struct FMovieSceneFloatChannel TimingCurve; // 0x118 (0x110)
	enum MovieScene3DPathSection_Axis FrontAxisEnum; // 0x228 (0x1)
	enum MovieScene3DPathSection_Axis UpAxisEnum; // 0x229 (0x1)
	unsigned char unreflected_22a[0x2]; // 0x22a (0x2) 
	unsigned char bFollow; // 0x22c (0x1)
	unsigned char bReverse; // 0x22c (0x1)
	unsigned char bForceUpright; // 0x22c (0x1)
	unsigned char padding_22d[0x3]; // 0x22d (0x3)
};

