// Class /Script/MovieSceneTracks.MovieSceneEventTrack
// Size: 0xc0
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
	unsigned char unreflected_98[0x10]; // 0x98 (0x10) 
	unsigned char bFireEventsWhenForwards; // 0xa8 (0x1)
	unsigned char bFireEventsWhenBackwards; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	enum EFireEventsAtPosition EventPosition; // 0xac (0x1)
	unsigned char unreflected_ad[0x3]; // 0xad (0x3) 
	struct TArray<class UMovieSceneSection*> Sections; // 0xb0 (0x10)
};

