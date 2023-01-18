// ScriptStruct /Script/MovieScene.MovieSceneEditorData
// Size: 0xf0
struct FMovieSceneEditorData
{
	struct TMap<struct FString, struct FMovieSceneExpansionState> ExpansionStates; // 0x0 (0x50)
	struct TArray<struct FString> PinnedNodes; // 0x50 (0x10)
	double ViewStart; // 0x60 (0x8)
	double ViewEnd; // 0x68 (0x8)
	double WorkStart; // 0x70 (0x8)
	double WorkEnd; // 0x78 (0x8)
	struct TSet<struct FFrameNumber> MarkedFrames; // 0x80 (0x50)
	struct FFloatRange WorkingRange; // 0xd0 (0x10)
	struct FFloatRange ViewRange; // 0xe0 (0x10)
};

