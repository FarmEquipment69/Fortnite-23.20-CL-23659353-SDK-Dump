// ScriptStruct /Script/MovieScene.MovieSceneTemplateGenerationLedger
// Size: 0xa8
struct FMovieSceneTemplateGenerationLedger
{
	struct FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8 (0x50)
	struct TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges; // 0x58 (0x50)
};

