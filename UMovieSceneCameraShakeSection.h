// Class /Script/MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x140
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xf0 (0x28)
	class UClass* ShakeClass; // 0x118 (0x8)
	float PlayScale; // 0x120 (0x4)
	enum ECameraShakePlaySpace Playspace; // 0x124 (0x1)
	unsigned char unreflected_125[0x3]; // 0x125 (0x3) 
	struct FRotator UserDefinedPlaySpace; // 0x128 (0x18)
};

