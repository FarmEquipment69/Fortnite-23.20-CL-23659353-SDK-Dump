// Class /Script/LandscapePatch.LandscapeWeightPatchTextureInfo
// Size: 0x58
class ULandscapeWeightPatchTextureInfo : public UObject
{
	struct FName WeightmapLayerName; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UTexture* TextureAsset; // 0x30 (0x8)
	class ULandscapeWeightTextureBackedRenderTarget* InternalData; // 0x38 (0x8)
	enum ELandscapeTexturePatchSourceMode SourceMode; // 0x40 (0x1)
	enum ELandscapeTexturePatchSourceMode DetailPanelSourceMode; // 0x41 (0x1)
	bool bUseAlphaChannel; // 0x42 (0x1)
	bool bOverrideBlendMode; // 0x43 (0x1)
	enum ELandscapeTexturePatchBlendMode OverrideBlendMode; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	struct TWeakObjectPtr<class ULandscapeTexturePatch> OwningPatch; // 0x48 (0x8)
	unsigned char padding_50[0x8]; // 0x50 (0x8)
};

