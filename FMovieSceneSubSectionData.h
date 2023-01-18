// ScriptStruct /Script/MovieScene.MovieSceneSubSectionData
// Size: 0x1c
struct FMovieSceneSubSectionData
{
	struct TWeakObjectPtr<class UMovieSceneSubSection> Section; // 0x0 (0x8)
	struct FGuid ObjectBindingID; // 0x8 (0x10)
	enum ESectionEvaluationFlags Flags; // 0x18 (0x1)
	unsigned char padding_19[0x3]; // 0x19 (0x3)
};

