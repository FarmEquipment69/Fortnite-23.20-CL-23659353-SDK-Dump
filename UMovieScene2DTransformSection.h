// Class /Script/UMG.MovieScene2DTransformSection
// Size: 0x870
class UMovieScene2DTransformSection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	struct FMovieScene2DTransformMask TransformMask; // 0xf8 (0x4)
	unsigned char unreflected_fc[0x4]; // 0xfc (0x4) 
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x100 (0x110) (ARRAY) 
	struct FMovieSceneFloatChannel Rotation; // 0x320 (0x110)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x430 (0x110) (ARRAY) 
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x650 (0x110) (ARRAY) 
};

