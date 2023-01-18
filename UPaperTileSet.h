// Class /Script/Paper2D.PaperTileSet
// Size: 0xa8
class UPaperTileSet : public UObject
{
	struct FIntPoint* TileSize; // 0x28 (0x8)
	class UTexture2D* TileSheet; // 0x30 (0x8)
	struct TArray<class UTexture*> AdditionalSourceTextures; // 0x38 (0x10)
	struct FIntMargin BorderMargin; // 0x48 (0x10)
	struct FIntPoint* PerTileSpacing; // 0x58 (0x8)
	struct FIntPoint* DrawingOffset; // 0x60 (0x8)
	int WidthInTiles; // 0x68 (0x4)
	int HeightInTiles; // 0x6c (0x4)
	int AllocatedWidth; // 0x70 (0x4)
	int AllocatedHeight; // 0x74 (0x4)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x78 (0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x88 (0x10)
	int TileWidth; // 0x98 (0x4)
	int TileHeight; // 0x9c (0x4)
	int Margin; // 0xa0 (0x4)
	int Spacing; // 0xa4 (0x4)
};

