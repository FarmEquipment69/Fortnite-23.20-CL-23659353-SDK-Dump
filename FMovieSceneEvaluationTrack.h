// ScriptStruct /Script/MovieScene.MovieSceneEvaluationTrack
// Size: 0x70
struct FMovieSceneEvaluationTrack
{
	struct FGuid ObjectBindingID; // 0x0 (0x10)
	uint16_t EvaluationPriority; // 0x10 (0x2)
	enum EEvaluationMethod EvaluationMethod; // 0x12 (0x1)
	unsigned char unreflected_13[0x1]; // 0x13 (0x1) 
	struct TWeakObjectPtr<class UMovieSceneTrack> SourceTrack; // 0x14 (0x8)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20 (0x10)
	struct FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30 (0x38)
	struct FName EvaluationGroup; // 0x68 (0x4)
	unsigned char bEvaluateInPreroll; // 0x6c (0x1)
	unsigned char bEvaluateInPostroll; // 0x6c (0x1)
	unsigned char bTearDownPriority; // 0x6c (0x1)
	unsigned char padding_6d[0x3]; // 0x6d (0x3)
};

