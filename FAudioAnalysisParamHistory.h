// ScriptStruct /Script/FortniteGame.AudioAnalysisParamHistory
// Size: 0x80
struct FAudioAnalysisParamHistory
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName NameSuffix; // 0x4 (0x4)
	int FrameCount; // 0x8 (0x4)
	float TimeBetweenFrames; // 0xc (0x4)
	struct TArray<struct FString> GeneratedParamNames; // 0x10 (0x10)
	unsigned char padding_20[0x60]; // 0x20 (0x60)
};

