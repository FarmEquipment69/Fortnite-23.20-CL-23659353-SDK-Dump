// Class /Script/MovieSceneTracks.MovieScenePredictionSystem
// Size: 0xf0
class UMovieScenePredictionSystem : public UMovieSceneEntitySystem
{
	unsigned char unreflected_40[0x90]; // 0x40 (0x90) 
	struct TArray<class UMovieSceneAsyncAction_SequencePrediction*> PendingPredictions; // 0xd0 (0x10)
	struct TArray<class UMovieSceneAsyncAction_SequencePrediction*> ProcessingPredictions; // 0xe0 (0x10)
};

