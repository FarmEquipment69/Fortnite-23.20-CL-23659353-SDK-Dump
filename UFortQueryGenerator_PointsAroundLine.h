// Class /Script/FortniteAI.FortQueryGenerator_PointsAroundLine
// Size: 0x128
class UFortQueryGenerator_PointsAroundLine : public UEnvQueryGenerator_ProjectedPoints
{
	class UClass* GenerateAround; // 0x88 (0x8)
	struct FAIDataProviderIntValue MaxPointsPerClusterLocation; // 0x90 (0x38)
	struct FAIDataProviderFloatValue ClusterRadius; // 0xc8 (0x38)
	struct TWeakObjectPtr<class UFortQueryData_CurvesAroundLine> CurvesAroundLineAsset; // 0x100 (0x28)
};

