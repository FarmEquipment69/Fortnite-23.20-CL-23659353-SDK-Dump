// Class /Script/AIModule.EnvQueryGenerator_OnCircle
// Size: 0x220
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{
	struct FAIDataProviderFloatValue CircleRadius; // 0x88 (0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xc0 (0x38)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xf8 (0x38)
	enum EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x130 (0x1)
	unsigned char unreflected_131[0x7]; // 0x131 (0x7) 
	struct FEnvDirection ArcDirection; // 0x138 (0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x158 (0x38)
	float AngleRadians; // 0x190 (0x4)
	unsigned char unreflected_194[0x4]; // 0x194 (0x4) 
	class UClass* CircleCenter; // 0x198 (0x8)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1a0 (0x1)
	unsigned char unreflected_1a1[0x7]; // 0x1a1 (0x7) 
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a8 (0x38)
	struct FEnvTraceData TraceData; // 0x1e0 (0x38)
	unsigned char bDefineArc; // 0x218 (0x1)
	unsigned char padding_219[0x7]; // 0x219 (0x7)
};

