// ScriptStruct /Script/Procedural.ProceduralScatterTileSettings
// Size: 0x14
struct FProceduralScatterTileSettings
{
	int NumUniqueTiles; // 0x0 (0x4)
	float TileSize; // 0x4 (0x4)
	float TileOverlapPercentage; // 0x8 (0x4)
	float MinimumQuadTreeSize; // 0xc (0x4)
	enum EProceduralScatterTileRandomGenerator RandomGenerator; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

