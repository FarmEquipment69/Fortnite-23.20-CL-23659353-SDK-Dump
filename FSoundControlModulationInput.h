// ScriptStruct /Script/AudioModulation.SoundControlModulationInput
// Size: 0xb0
struct FSoundControlModulationInput
{
	unsigned char bSampleAndHold; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FSoundModulationTransform Transform; // 0x8 (0xa0)
	class USoundControlBus* Bus; // 0xa8 (0x8)
};

