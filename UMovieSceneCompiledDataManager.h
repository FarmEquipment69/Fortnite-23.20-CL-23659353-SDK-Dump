// Class /Script/MovieScene.MovieSceneCompiledDataManager
// Size: 0x230
class UMovieSceneCompiledDataManager : public UObject
{
	unsigned char unreflected_28[0xb0]; // 0x28 (0xb0) 
	struct TMap<int, struct FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8 (0x50)
	struct TMap<int, struct FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128 (0x50)
	struct TMap<int, struct FMovieSceneEvaluationField> TrackTemplateFields; // 0x178 (0x50)
	struct TMap<int, struct FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8 (0x50)
	unsigned char padding_218[0x18]; // 0x218 (0x18)
};

