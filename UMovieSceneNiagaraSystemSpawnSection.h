// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0x100
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
	enum ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xf0 (0x4)
	enum ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xf4 (0x4)
	enum ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf8 (0x4)
	enum ENiagaraAgeUpdateMode AgeUpdateMode; // 0xfc (0x1)
	bool bAllowScalability; // 0xfd (0x1)
	unsigned char padding_fe[0x2]; // 0xfe (0x2)
};

