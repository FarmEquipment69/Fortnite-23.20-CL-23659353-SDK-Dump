// Class /Script/Engine.Texture
// Size: 0x140
class UTexture : public UStreamableRenderAsset
{
	unsigned char unreflected_d0[0x10]; // 0xd0 (0x10) 
	struct FGuid LightingGuid; // 0xe0 (0x10)
	int LevelIndex; // 0xf0 (0x4)
	int LODBias; // 0xf4 (0x4)
	struct TEnumAsByte<TextureCompressionSettings> CompressionSettings; // 0xf8 (0x1)
	struct TEnumAsByte<TextureFilter> Filter; // 0xf9 (0x1)
	enum ETextureMipLoadOptions MipLoadOptions; // 0xfa (0x1)
	struct TEnumAsByte<TextureGroup> LODGroup; // 0xfb (0x1)
	struct FPerPlatformFloat Downscale; // 0xfc (0x4)
	enum ETextureDownscaleOptions DownscaleOptions; // 0x100 (0x1)
	unsigned char SRGB; // 0x101 (0x1)
	unsigned char bNoTiling; // 0x101 (0x1)
	unsigned char VirtualTextureStreaming; // 0x101 (0x1)
	unsigned char CompressionYCoCg; // 0x101 (0x1)
	unsigned char bNotOfflineProcessed; // 0x101 (0x1)
	unsigned char bAsyncResourceReleaseHasBeenStarted; // 0x101 (0x1)
	unsigned char unreflected_102[0x6]; // 0x102 (0x6) 
	struct TArray<class UAssetUserData*> AssetUserData; // 0x108 (0x10)
	unsigned char padding_118[0x28]; // 0x118 (0x28)

	/* Functions */

	// Function /Script/Engine.Texture.Blueprint_GetMemorySize (Underlying native function: Blueprint_GetMemorySize 0x9f95434)
	int64_t BlueprintGetMemorySize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

