// ScriptStruct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size: 0x28
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation
{
	struct FFrameNumber SpawnSectionStartFrame; // 0x10 (0x4)
	struct FFrameNumber SpawnSectionEndFrame; // 0x14 (0x4)
	enum ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18 (0x4)
	enum ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c (0x4)
	enum ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20 (0x4)
	enum ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24 (0x1)
	bool bAllowScalability; // 0x25 (0x1)
	unsigned char padding_26[0x2]; // 0x26 (0x2)
};

