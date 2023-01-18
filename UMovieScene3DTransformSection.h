// Class /Script/MovieSceneTracks.MovieScene3DTransformSection
// Size: 0xc30
class UMovieScene3DTransformSection : public UMovieSceneSection
{
	unsigned char unreflected_f0[0x38]; // 0xf0 (0x38) 
	struct FMovieSceneTransformMask TransformMask; // 0x128 (0x4)
	unsigned char unreflected_12c[0x4]; // 0x12c (0x4) 
	struct FMovieSceneDoubleChannel Translation[0x3]; // 0x130 (0x118) (ARRAY) 
	struct FMovieSceneDoubleChannel Rotation[0x3]; // 0x478 (0x118) (ARRAY) 
	struct FMovieSceneDoubleChannel Scale[0x3]; // 0x7c0 (0x118) (ARRAY) 
	struct FMovieSceneFloatChannel ManualWeight; // 0xb08 (0x110)
	class UMovieSceneSectionChannelOverrideRegistry* OverrideRegistry; // 0xc18 (0x8)
	class UMovieScene3DTransformSectionConstraints* Constraints; // 0xc20 (0x8)
	bool bUseQuaternionInterpolation; // 0xc28 (0x1)
	unsigned char padding_c29[0x7]; // 0xc29 (0x7)
};

