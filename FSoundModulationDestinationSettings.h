// ScriptStruct /Script/Engine.SoundModulationDestinationSettings
// Size: 0x60
struct FSoundModulationDestinationSettings
{
	float Value; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class USoundModulatorBase* Modulator; // 0x8 (0x8)
	struct TSet<class USoundModulatorBase*> Modulators; // 0x10 (0x50)
};

