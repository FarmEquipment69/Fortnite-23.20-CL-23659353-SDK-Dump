// Class /Script/LandscapePatch.LandscapeTextureBackedRenderTargetBase
// Size: 0x50
class ULandscapeTextureBackedRenderTargetBase : public UObject
{
	class UTextureRenderTarget2D* PostLoadRT; // 0x28 (0x8)
	class UTexture2D* InternalTexture; // 0x30 (0x8)
	class UTextureRenderTarget2D* RenderTarget; // 0x38 (0x8)
	int SizeX; // 0x40 (0x4)
	int SizeY; // 0x44 (0x4)
	bool bUseInternalTextureOnly; // 0x48 (0x1)
	unsigned char padding_49[0x7]; // 0x49 (0x7)
};

