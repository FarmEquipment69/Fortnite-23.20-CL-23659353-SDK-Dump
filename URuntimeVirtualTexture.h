// Class /Script/Engine.RuntimeVirtualTexture
// Size: 0xe0
class URuntimeVirtualTexture : public UObject
{
	int TileCount; // 0x28 (0x4)
	int TileSize; // 0x2c (0x4)
	int TileBorderSize; // 0x30 (0x4)
	enum ERuntimeVirtualTextureMaterialType MaterialType; // 0x34 (0x1)
	bool bCompressTextures; // 0x35 (0x1)
	bool bUseLowQualityCompression; // 0x36 (0x1)
	bool bClearTextures; // 0x37 (0x1)
	bool bSinglePhysicalSpace; // 0x38 (0x1)
	bool bPrivateSpace; // 0x39 (0x1)
	bool bAdaptive; // 0x3a (0x1)
	bool bContinuousUpdate; // 0x3b (0x1)
	int RemoveLowMips; // 0x3c (0x4)
	struct TEnumAsByte<TextureGroup> LODGroup; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	int Size; // 0x44 (0x4)
	class URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48 (0x8)
	unsigned char padding_50[0x90]; // 0x50 (0x90)

	/* Functions */

	// Function /Script/Engine.RuntimeVirtualTexture.GetTileSize (Underlying native function: GetTileSize 0x9fd3e78)
	int GetTileSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.RuntimeVirtualTexture.GetTileCount (Underlying native function: GetTileCount 0x9fd3e50)
	int GetTileCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.RuntimeVirtualTexture.GetTileBorderSize (Underlying native function: GetTileBorderSize 0x9fd3e20)
	int GetTileBorderSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.RuntimeVirtualTexture.GetSize (Underlying native function: GetSize 0x9fd3dfc)
	int GetSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.RuntimeVirtualTexture.GetPageTableSize (Underlying native function: GetPageTableSize 0x9fd3db0)
	int GetPageTableSize(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

