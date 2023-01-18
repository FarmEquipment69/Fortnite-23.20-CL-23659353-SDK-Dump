// Class /Script/Engine.SoundSourceBus
// Size: 0x468
class USoundSourceBus : public USoundWave
{
	enum ESourceBusChannels SourceBusChannels; // 0x450 (0x1)
	unsigned char unreflected_451[0x3]; // 0x451 (0x3) 
	float SourceBusDuration; // 0x454 (0x4)
	class UAudioBus* AudioBus; // 0x458 (0x8)
	unsigned char bAutoDeactivateWhenSilent; // 0x460 (0x1)
	unsigned char padding_461[0x7]; // 0x461 (0x7)
};

