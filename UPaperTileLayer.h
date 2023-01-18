// Class /Script/Paper2D.PaperTileLayer
// Size: 0x98
class UPaperTileLayer : public UObject
{
	struct FText LayerName; // 0x28 (0x18)
	int LayerWidth; // 0x40 (0x4)
	int LayerHeight; // 0x44 (0x4)
	unsigned char bHiddenInGame; // 0x48 (0x1)
	unsigned char bLayerCollides; // 0x48 (0x1)
	unsigned char bOverrideCollisionThickness; // 0x48 (0x1)
	unsigned char bOverrideCollisionOffset; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	float CollisionThicknessOverride; // 0x4c (0x4)
	float CollisionOffsetOverride; // 0x50 (0x4)
	struct FLinearColor LayerColor; // 0x54 (0x10)
	int AllocatedWidth; // 0x64 (0x4)
	int AllocatedHeight; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x70 (0x10)
	class UPaperTileSet* TileSet; // 0x80 (0x8)
	struct TArray<int> AllocatedGrid; // 0x88 (0x10)
};

