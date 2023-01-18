// Class /Script/MediaAssets.MediaTexture
// Size: 0x220
class UMediaTexture : public UTexture
{
	struct TEnumAsByte<TextureAddress> AddressX; // 0x140 (0x1)
	struct TEnumAsByte<TextureAddress> AddressY; // 0x141 (0x1)
	bool AutoClear; // 0x142 (0x1)
	unsigned char unreflected_143[0x1]; // 0x143 (0x1) 
	struct FLinearColor ClearColor; // 0x144 (0x10)
	bool EnableGenMips; // 0x154 (0x1)
	unsigned char NumMips; // 0x155 (0x1)
	bool NewStyleOutput; // 0x156 (0x1)
	struct TEnumAsByte<MediaTextureOutputFormat> OutputFormat; // 0x157 (0x1)
	float CurrentAspectRatio; // 0x158 (0x4)
	struct TEnumAsByte<MediaTextureOrientation> CurrentOrientation; // 0x15c (0x1)
	unsigned char unreflected_15d[0x3]; // 0x15d (0x3) 
	class UMediaPlayer* MediaPlayer; // 0x160 (0x8)
	unsigned char padding_168[0xb8]; // 0x168 (0xb8)

	/* Functions */

	// Function /Script/MediaAssets.MediaTexture.UpdateResource (Underlying native function: UpdateResource 0x814132c)
	void UpdateResource(); // (Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer (Underlying native function: SetMediaPlayer 0x9bcb07c)
	void SetMediaPlayer(class UMediaPlayer*& NewMediaPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaTexture.GetWidth (Underlying native function: GetWidth 0x8235df0)
	int GetWidth(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips (Underlying native function: GetTextureNumMips 0x9bc8c00)
	int GetTextureNumMips(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer (Underlying native function: GetMediaPlayer 0x9bc8238)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaTexture.GetHeight (Underlying native function: GetHeight 0x9bc810c)
	int GetHeight(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio (Underlying native function: GetAspectRatio 0x9bc7d08)
	float GetAspectRatio(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

