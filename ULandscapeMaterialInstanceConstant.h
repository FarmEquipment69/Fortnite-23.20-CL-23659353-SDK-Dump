// Class /Script/Landscape.LandscapeMaterialInstanceConstant
// Size: 0x210
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo*> TextureStreamingInfo; // 0x1f8 (0x10)
	unsigned char bIsLayerThumbnail; // 0x208 (0x1)
	unsigned char bDisableTessellation; // 0x208 (0x1)
	unsigned char bMobile; // 0x208 (0x1)
	unsigned char bEditorToolUsage; // 0x208 (0x1)
	unsigned char padding_209[0x7]; // 0x209 (0x7)
};

