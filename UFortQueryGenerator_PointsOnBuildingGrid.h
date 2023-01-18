// Class /Script/FortniteAI.FortQueryGenerator_PointsOnBuildingGrid
// Size: 0x108
class UFortQueryGenerator_PointsOnBuildingGrid : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderIntValue HorizontalGridSize; // 0x88 (0x38)
	struct FAIDataProviderIntValue VerticalGridSize; // 0xc0 (0x38)
	bool bStartGridFromBottom; // 0xf8 (0x1)
	bool bUsePointInVerticalCenterOfCell; // 0xf9 (0x1)
	unsigned char unreflected_fa[0x6]; // 0xfa (0x6) 
	class UClass* GenerateAround; // 0x100 (0x8)
};

