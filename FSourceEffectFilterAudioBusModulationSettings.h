// ScriptStruct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
// Size: 0x28
struct FSourceEffectFilterAudioBusModulationSettings
{
	class UAudioBus* AudioBus; // 0x0 (0x8)
	int EnvelopeFollowerAttackTimeMsec; // 0x8 (0x4)
	int EnvelopeFollowerReleaseTimeMsec; // 0xc (0x4)
	float EnvelopeGainMultiplier; // 0x10 (0x4)
	enum ESourceEffectFilterParam FilterParam; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float MinFrequencyModulation; // 0x18 (0x4)
	float MaxFrequencyModulation; // 0x1c (0x4)
	float MinResonanceModulation; // 0x20 (0x4)
	float MaxResonanceModulation; // 0x24 (0x4)
};

