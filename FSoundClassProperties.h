// ScriptStruct /Script/Engine.SoundClassProperties
// Size: 0x1b8
struct FSoundClassProperties
{
	float Volume; // 0x0 (0x4)
	float Pitch; // 0x4 (0x4)
	float LowPassFilterFrequency; // 0x8 (0x4)
	float AttenuationDistanceScale; // 0xc (0x4)
	float LFEBleed; // 0x10 (0x4)
	float VoiceCenterChannelVolume; // 0x14 (0x4)
	float RadioFilterVolume; // 0x18 (0x4)
	float RadioFilterVolumeThreshold; // 0x1c (0x4)
	unsigned char bApplyEffects; // 0x20 (0x1)
	unsigned char bAlwaysPlay; // 0x20 (0x1)
	unsigned char bIsUISound; // 0x20 (0x1)
	unsigned char bIsMusic; // 0x20 (0x1)
	unsigned char bCenterChannelOnly; // 0x20 (0x1)
	unsigned char bApplyAmbientVolumes; // 0x20 (0x1)
	unsigned char bReverb; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	float Default2DReverbSendAmount; // 0x24 (0x4)
	struct FSoundModulationDefaultSettings ModulationSettings; // 0x28 (0x180)
	struct TEnumAsByte<EAudioOutputTarget> OutputTarget; // 0x1a8 (0x1)
	enum ESoundWaveLoadingBehavior LoadingBehavior; // 0x1a9 (0x1)
	unsigned char unreflected_1aa[0x6]; // 0x1aa (0x6) 
	class USoundSubmix* DefaultSubmix; // 0x1b0 (0x8)
};

