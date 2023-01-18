// Class /Script/MovieScene.MovieSceneTrack
// Size: 0x98
class UMovieSceneTrack : public UMovieSceneSignedObject
{
	struct FMovieSceneTrackEvalOptions EvalOptions; // 0x58 (0x4)
	unsigned char unreflected_5c[0x1]; // 0x5c (0x1) 
	bool bIsEvalDisabled; // 0x5d (0x1)
	unsigned char unreflected_5e[0x2]; // 0x5e (0x2) 
	struct TArray<int> RowsDisabled; // 0x60 (0x10)
	unsigned char unreflected_70[0x4]; // 0x70 (0x4) 
	struct FGuid EvaluationFieldGuid; // 0x74 (0x10)
	unsigned char unreflected_84[0x4]; // 0x84 (0x4) 
	struct FMovieSceneTrackEvaluationField EvaluationField; // 0x88 (0x10)
};

