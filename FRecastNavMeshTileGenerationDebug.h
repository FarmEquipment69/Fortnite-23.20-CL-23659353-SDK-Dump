// ScriptStruct /Script/NavigationSystem.RecastNavMeshTileGenerationDebug
// Size: 0x14
struct FRecastNavMeshTileGenerationDebug
{
	unsigned char bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FIntVector TileCoordinate; // 0x4 (0xc)
	unsigned char bHeightfieldSolidFromRasterization; // 0x10 (0x1)
	unsigned char bHeightfieldSolidPostInclusionBoundsFiltering; // 0x10 (0x1)
	unsigned char bHeightfieldSolidPostHeightFiltering; // 0x10 (0x1)
	unsigned char bHeightfieldSolidBounds; // 0x10 (0x1)
	unsigned char bCompactHeightfield; // 0x10 (0x1)
	unsigned char bCompactHeightfieldEroded; // 0x10 (0x1)
	unsigned char bCompactHeightfieldRegions; // 0x10 (0x1)
	unsigned char bCompactHeightfieldDistances; // 0x10 (0x1)
	unsigned char bTileCacheLayerAreas; // 0x11 (0x1)
	unsigned char bTileCacheLayerRegions; // 0x11 (0x1)
	unsigned char bTileCacheContours; // 0x11 (0x1)
	unsigned char bTileCachePolyMesh; // 0x11 (0x1)
	unsigned char bTileCacheDetailMesh; // 0x11 (0x1)
	unsigned char padding_12[0x2]; // 0x12 (0x2)
};

