// ScriptStruct /Script/MovieScene.MovieSceneEvaluationGroup
// Size: 0x30
struct FMovieSceneEvaluationGroup
{
	struct TArray<struct FMovieSceneEvaluationGroupLUTIndex*> LUTIndices; // 0x0 (0x10)
	struct TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10 (0x10)
	struct TArray<struct FMovieSceneFieldEntry_ChildTemplate*> SectionLUT; // 0x20 (0x10)
};

