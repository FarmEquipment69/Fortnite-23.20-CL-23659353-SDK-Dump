// ScriptStruct /Script/AudioMixer.AudioOutputDeviceInfo
// Size: 0x48
struct FAudioOutputDeviceInfo
{
	struct FString Name; // 0x0 (0x10)
	struct FString DeviceID; // 0x10 (0x10)
	int NumChannels; // 0x20 (0x4)
	int SampleRate; // 0x24 (0x4)
	enum EAudioMixerStreamDataFormatType Format; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TArray<enum EAudioMixerChannelType> OutputChannelArray; // 0x30 (0x10)
	unsigned char bIsSystemDefault; // 0x40 (0x1)
	unsigned char bIsCurrentDevice; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

