// Class /Script/AudioModulation.SoundControlBus
// Size: 0x60
class USoundControlBus : public USoundModulatorBase
{
	bool bBypass; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FString Address; // 0x38 (0x10)
	struct TArray<class USoundModulationGenerator*> Generators; // 0x48 (0x10)
	class USoundModulationParameter* Parameter; // 0x58 (0x8)
};

