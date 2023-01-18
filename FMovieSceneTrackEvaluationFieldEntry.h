// ScriptStruct /Script/MovieScene.MovieSceneTrackEvaluationFieldEntry
// Size: 0x20
struct FMovieSceneTrackEvaluationFieldEntry
{
	class UMovieSceneSection* Section; // 0x0 (0x8)
	struct FFrameNumberRange Range; // 0x8 (0x10)
	struct FFrameNumber ForcedTime; // 0x18 (0x4)
	enum ESectionEvaluationFlags Flags; // 0x1c (0x1)
	unsigned char unreflected_1d[0x1]; // 0x1d (0x1) 
	int16_t LegacySortOrder; // 0x1e (0x2)
};

