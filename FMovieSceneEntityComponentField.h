// ScriptStruct /Script/MovieScene.MovieSceneEntityComponentField
// Size: 0xf0
struct FMovieSceneEntityComponentField
{
	struct FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0 (0x60)
	struct FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60 (0x60)
	struct TArray<struct FMovieSceneEvaluationFieldEntity> Entities; // 0xc0 (0x10)
	struct TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0 (0x10)
	struct TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0 (0x10)
};

