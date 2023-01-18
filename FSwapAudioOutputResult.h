// ScriptStruct /Script/AudioMixer.SwapAudioOutputResult
// Size: 0x28
struct FSwapAudioOutputResult
{
	struct FString CurrentDeviceId; // 0x0 (0x10)
	struct FString RequestedDeviceId; // 0x10 (0x10)
	enum ESwapAudioOutputDeviceResultState Result; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

