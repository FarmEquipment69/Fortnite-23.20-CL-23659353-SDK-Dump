// ScriptStruct /Script/MovieScene.MovieSceneEvalTemplate
// Size: 0x20
struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase
{
	enum EMovieSceneCompletionMode CompletionMode; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct TWeakObjectPtr<class UMovieSceneSection> SourceSectionPtr; // 0x14 (0x8)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

