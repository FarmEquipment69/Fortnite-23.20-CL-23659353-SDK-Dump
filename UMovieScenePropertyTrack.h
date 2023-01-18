// Class /Script/MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xc0
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
	class UMovieSceneSection* SectionToKey; // 0x98 (0x8)
	struct FMovieScenePropertyBinding PropertyBinding; // 0xa0 (0xc)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct TArray<class UMovieSceneSection*> Sections; // 0xb0 (0x10)
};

