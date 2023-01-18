// ScriptStruct /Script/WaveTable.WaveTableSettings
// Size: 0x40
struct FWaveTableSettings
{
	struct FFilePath FilePath; // 0x0 (0x10)
	int ChannelIndex; // 0x10 (0x4)
	float Phase; // 0x14 (0x4)
	float Top; // 0x18 (0x4)
	float Tail; // 0x1c (0x4)
	float FadeIn; // 0x20 (0x4)
	float FadeOut; // 0x24 (0x4)
	bool bNormalize; // 0x28 (0x1)
	bool bRemoveOffset; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct TArray<float> SourcePCMData; // 0x30 (0x10)
};

