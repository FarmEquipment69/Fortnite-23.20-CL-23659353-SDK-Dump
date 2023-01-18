// ScriptStruct /Script/MovieScene.MovieSceneRootEvaluationTemplateInstance
// Size: 0x88
struct FMovieSceneRootEvaluationTemplateInstance
{
	struct TWeakObjectPtr<class UMovieSceneSequence> WeakRootSequence; // 0x0 (0x8)
	class UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8 (0x8)
	unsigned char unreflected_10[0x18]; // 0x10 (0x18) 
	class UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x28 (0x8)
	struct TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances; // 0x30 (0x50)
	unsigned char padding_80[0x8]; // 0x80 (0x8)
};

