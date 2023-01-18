// ScriptStruct /Script/FortniteGame.FortEncounterSequenceSettings
// Size: 0x38
struct FFortEncounterSequenceSettings
{
	struct FFortEncounterTransitionSettings TransitionSettings; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FFortEncounterProfile> EncounterSequence; // 0x8 (0x10)
	struct FGameplayTagContainer SequenceTags; // 0x18 (0x20)
};

