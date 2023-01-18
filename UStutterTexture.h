// Class /Script/HmxAudioGraphics.StutterTexture
// Size: 0x160
class UStutterTexture : public UHmxTextureBase
{
	struct FName StuttererName; // 0x150 (0x4)
	bool IsInRecordMode; // 0x154 (0x1)
	unsigned char unreflected_155[0x3]; // 0x155 (0x3) 
	int NumBeats; // 0x158 (0x4)
	unsigned char padding_15c[0x4]; // 0x15c (0x4)

	/* Functions */

	// Function /Script/HmxAudioGraphics.StutterTexture.RefreshTexture (Underlying native function: RefreshTexture 0x5589030)
	void RefreshTexture(); // (Final | Native | Private | BlueprintCallable)
};

