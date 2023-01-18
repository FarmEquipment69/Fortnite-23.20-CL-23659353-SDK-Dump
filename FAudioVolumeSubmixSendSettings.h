// ScriptStruct /Script/Engine.AudioVolumeSubmixSendSettings
// Size: 0x18
struct FAudioVolumeSubmixSendSettings
{
	enum EAudioVolumeLocationState ListenerLocationState; // 0x0 (0x1)
	enum EAudioVolumeLocationState SourceLocationState; // 0x1 (0x1)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	struct TArray<struct FSoundSubmixSendInfo> SubmixSends; // 0x8 (0x10)
};

