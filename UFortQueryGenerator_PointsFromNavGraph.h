// Class /Script/FortniteAI.FortQueryGenerator_PointsFromNavGraph
// Size: 0x1d8
class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue MinPathDistance; // 0x88 (0x38)
	struct FAIDataProviderFloatValue MaxPathDistance; // 0xc0 (0x38)
	struct FAIDataProviderIntValue Density; // 0xf8 (0x38)
	struct FAIDataProviderFloatValue ExploreDirectionYaw; // 0x130 (0x38)
	struct FEnvDirection ExploreDirection; // 0x168 (0x20)
	float ExploreAngleDot; // 0x188 (0x4)
	unsigned char unreflected_18c[0x4]; // 0x18c (0x4) 
	struct FAIDataProviderFloatValue ExploreInnerRadius; // 0x190 (0x38)
	unsigned char bLimitExplorationDirection; // 0x1c8 (0x1)
	unsigned char bOnlyFlatSurface; // 0x1c8 (0x1)
	unsigned char bUseParameterizedDirection; // 0x1c8 (0x1)
	unsigned char bUseHeightCheck; // 0x1c8 (0x1)
	unsigned char bFilterAllowTerrain; // 0x1c8 (0x1)
	unsigned char bFilterAllowBuildings; // 0x1c8 (0x1)
	unsigned char bFilterAllowDropdown; // 0x1c8 (0x1)
	unsigned char bFilterAllowClimbup; // 0x1c8 (0x1)
	unsigned char bFilterAllowSmash; // 0x1c9 (0x1)
	unsigned char unreflected_1ca[0x2]; // 0x1ca (0x2) 
	struct TEnumAsByte<EFortPointsFromNavGraphGoalPathDistanceFilterOperator> PathDistanceFilterOperator; // 0x1cc (0x1)
	unsigned char unreflected_1cd[0x3]; // 0x1cd (0x3) 
	class UClass* GenerateAround; // 0x1d0 (0x8)
};

