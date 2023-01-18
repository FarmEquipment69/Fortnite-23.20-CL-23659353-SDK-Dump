// ScriptStruct /Script/NavigationSystem.RecastNavMeshGenerationProperties
// Size: 0x40
struct FRecastNavMeshGenerationProperties
{
	int TilePoolSize; // 0x0 (0x4)
	float TileSizeUU; // 0x4 (0x4)
	float CellSize; // 0x8 (0x4)
	float CellHeight; // 0xc (0x4)
	float AgentRadius; // 0x10 (0x4)
	float AgentHeight; // 0x14 (0x4)
	float AgentMaxSlope; // 0x18 (0x4)
	float AgentMaxStepHeight; // 0x1c (0x4)
	float MinRegionArea; // 0x20 (0x4)
	float MergeRegionSize; // 0x24 (0x4)
	float MaxSimplificationError; // 0x28 (0x4)
	int TileNumberHardLimit; // 0x2c (0x4)
	struct TEnumAsByte<ERecastPartitioning> RegionPartitioning; // 0x30 (0x1)
	struct TEnumAsByte<ERecastPartitioning> LayerPartitioning; // 0x31 (0x1)
	unsigned char unreflected_32[0x2]; // 0x32 (0x2) 
	int RegionChunkSplits; // 0x34 (0x4)
	int LayerChunkSplits; // 0x38 (0x4)
	unsigned char bSortNavigationAreasByCost; // 0x3c (0x1)
	unsigned char bPerformVoxelFiltering; // 0x3c (0x1)
	unsigned char bMarkLowHeightAreas; // 0x3c (0x1)
	unsigned char bUseExtraTopCellWhenMarkingAreas; // 0x3c (0x1)
	unsigned char bFilterLowSpanSequences; // 0x3c (0x1)
	unsigned char bFilterLowSpanFromTileCache; // 0x3c (0x1)
	unsigned char bFixedTilePoolSize; // 0x3c (0x1)
	unsigned char bIsWorldPartitioned; // 0x3c (0x1)
	unsigned char padding_3d[0x3]; // 0x3d (0x3)
};

