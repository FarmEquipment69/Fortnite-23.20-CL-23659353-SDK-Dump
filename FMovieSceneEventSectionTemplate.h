// ScriptStruct /Script/MovieSceneTracks.MovieSceneEventSectionTemplate
// Size: 0x120
struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate
{
	struct FMovieSceneEventSectionData EventData; // 0x20 (0xf8)
	unsigned char bFireEventsWhenForwards; // 0x118 (0x1)
	unsigned char bFireEventsWhenBackwards; // 0x118 (0x1)
	unsigned char padding_119[0x7]; // 0x119 (0x7)
};

