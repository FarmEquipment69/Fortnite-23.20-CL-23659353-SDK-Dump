// Class /Script/VirtualHeightfieldMesh.HeightfieldMinMaxTexture
// Size: 0x70
class UHeightfieldMinMaxTexture : public UObject
{
	class UTexture2D* Texture; // 0x28 (0x8)
	class UTexture2D* LodBiasTexture; // 0x30 (0x8)
	class UTexture2D* LodBiasMinMaxTexture; // 0x38 (0x8)
	int MaxCPULevels; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FVector2D> TextureData; // 0x48 (0x10)
	struct FIntPoint* TextureDataSize; // 0x58 (0x8)
	struct TArray<int> TextureDataMips; // 0x60 (0x10)
};

