// ScriptStruct /Script/MovieScene.MovieSceneSequenceHierarchy
// Size: 0x118
struct FMovieSceneSequenceHierarchy
{
	struct FMovieSceneSequenceHierarchyNode RootNode; // 0x0 (0x18)
	struct FMovieSceneSubSequenceTree Tree; // 0x18 (0x60)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences; // 0x78 (0x50)
	struct TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8 (0x50)
};

