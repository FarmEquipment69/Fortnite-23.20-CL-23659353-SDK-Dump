// Class /Script/WmfMediaFactory.WmfMediaSettings
// Size: 0x30
class UWmfMediaSettings : public UObject
{
	bool AllowNonStandardCodecs; // 0x28 (0x1)
	bool LowLatency; // 0x29 (0x1)
	bool NativeAudioOut; // 0x2a (0x1)
	bool HardwareAcceleratedVideoDecoding; // 0x2b (0x1)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

