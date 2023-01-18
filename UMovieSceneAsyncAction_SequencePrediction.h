// Class /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction
// Size: 0x80
class UMovieSceneAsyncAction_SequencePrediction : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Result; // 0x30 (0x10)
	struct FMulticastInlineDelegate Failure; // 0x40 (0x10)
	unsigned char unreflected_50[0x10]; // 0x50 (0x10) 
	class UMovieSceneSequencePlayer* SequencePlayer; // 0x60 (0x8)
	class USceneComponent* SceneComponent; // 0x68 (0x8)
	unsigned char padding_70[0x10]; // 0x70 (0x10)

	/* Functions */

	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime (Underlying native function: PredictWorldTransformAtTime 0x9aad524)
	static class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtTime(class UMovieSceneSequencePlayer*& Player, class USceneComponent*& TargetComponent, float& TimeInSeconds); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame (Underlying native function: PredictWorldTransformAtFrame 0x9aad3a4)
	static class UMovieSceneAsyncAction_SequencePrediction* PredictWorldTransformAtFrame(class UMovieSceneSequencePlayer*& Player, class USceneComponent*& TargetComponent, struct FFrameTime*& FrameTime); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime (Underlying native function: PredictLocalTransformAtTime 0x9aad234)
	static class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtTime(class UMovieSceneSequencePlayer*& Player, class USceneComponent*& TargetComponent, float& TimeInSeconds); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame (Underlying native function: PredictLocalTransformAtFrame 0x9aad0b4)
	static class UMovieSceneAsyncAction_SequencePrediction* PredictLocalTransformAtFrame(class UMovieSceneSequencePlayer*& Player, class USceneComponent*& TargetComponent, struct FFrameTime*& FrameTime); // (Final | Native | Static | Public | BlueprintCallable)
};

