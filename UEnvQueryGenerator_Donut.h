// Class /Script/AIModule.EnvQueryGenerator_Donut
// Size: 0x1d8
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue InnerRadius; // 0x88 (0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0xc0 (0x38)
	struct FAIDataProviderIntValue NumberOfRings; // 0xf8 (0x38)
	struct FAIDataProviderIntValue PointsPerRing; // 0x130 (0x38)
	struct FEnvDirection ArcDirection; // 0x168 (0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x188 (0x38)
	bool bUseSpiralPattern; // 0x1c0 (0x1)
	unsigned char unreflected_1c1[0x7]; // 0x1c1 (0x7) 
	class UClass* Center; // 0x1c8 (0x8)
	unsigned char bDefineArc; // 0x1d0 (0x1)
	unsigned char padding_1d1[0x7]; // 0x1d1 (0x7)
};

