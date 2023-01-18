// Class /Script/Paper2D.PaperTileMap
// Size: 0xa8
class UPaperTileMap : public UObject
{
	int MapWidth; // 0x28 (0x4)
	int MapHeight; // 0x2c (0x4)
	int TileWidth; // 0x30 (0x4)
	int TileHeight; // 0x34 (0x4)
	float PixelsPerUnrealUnit; // 0x38 (0x4)
	float SeparationPerTileX; // 0x3c (0x4)
	float SeparationPerTileY; // 0x40 (0x4)
	float SeparationPerLayer; // 0x44 (0x4)
	struct TWeakObjectPtr<class UPaperTileSet> SelectedTileSet; // 0x48 (0x28)
	class UMaterialInterface* Material; // 0x70 (0x8)
	struct TArray<class UPaperTileLayer*> TileLayers; // 0x78 (0x10)
	float CollisionThickness; // 0x88 (0x4)
	struct TEnumAsByte<ESpriteCollisionMode> SpriteCollisionDomain; // 0x8c (0x1)
	struct TEnumAsByte<ETileMapProjectionMode> ProjectionMode; // 0x8d (0x1)
	unsigned char unreflected_8e[0x2]; // 0x8e (0x2) 
	int HexSideLength; // 0x90 (0x4)
	unsigned char unreflected_94[0x4]; // 0x94 (0x4) 
	class UBodySetup* BodySetup; // 0x98 (0x8)
	int LayerNameIndex; // 0xa0 (0x4)
	unsigned char padding_a4[0x4]; // 0xa4 (0x4)
};

