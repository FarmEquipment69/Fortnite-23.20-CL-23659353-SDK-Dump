// ScriptStruct /Script/Engine.SoundModulationDefaultRoutingSettings
// Size: 0x188
struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings
{
	enum EModulationRouting VolumeRouting; // 0x180 (0x1)
	enum EModulationRouting PitchRouting; // 0x181 (0x1)
	enum EModulationRouting HighpassRouting; // 0x182 (0x1)
	enum EModulationRouting LowpassRouting; // 0x183 (0x1)
	unsigned char padding_184[0x4]; // 0x184 (0x4)
};

