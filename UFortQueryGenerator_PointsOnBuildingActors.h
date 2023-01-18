// Class /Script/FortniteAI.FortQueryGenerator_PointsOnBuildingActors
// Size: 0x250
class UFortQueryGenerator_PointsOnBuildingActors : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue BoundingBoxExtentXY; // 0x88 (0x38)
	struct FAIDataProviderFloatValue BoundingBoxExtentZ; // 0xc0 (0x38)
	struct FAIDataProviderFloatValue PointDensity; // 0xf8 (0x38)
	struct FAIDataProviderIntValue MaxGeneratedPoints; // 0x130 (0x38)
	struct FFortTaggedActorOctreeFilter ActorLookupFilter; // 0x168 (0xa8)
	struct FAIDataProviderFloatValue RandomChanceToSkip; // 0x210 (0x38)
	class UClass* GenerateAround; // 0x248 (0x8)
};

