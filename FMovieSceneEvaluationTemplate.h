// ScriptStruct /Script/MovieScene.MovieSceneEvaluationTemplate
// Size: 0x160
struct FMovieSceneEvaluationTemplate
{
	struct TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks; // 0x0 (0x50)
	unsigned char unreflected_50[0x50]; // 0x50 (0x50) 
	struct FGuid SequenceSignature; // 0xa0 (0x10)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0 (0x4)
	unsigned char unreflected_b4[0x4]; // 0xb4 (0x4) 
	struct FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8 (0xa8)
};

