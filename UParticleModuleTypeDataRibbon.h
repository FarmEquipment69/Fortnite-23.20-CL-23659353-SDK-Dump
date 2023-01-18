// Class /Script/Engine.ParticleModuleTypeDataRibbon
// Size: 0x60
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
	int MaxTessellationBetweenParticles; // 0x30 (0x4)
	int SheetsPerTrail; // 0x34 (0x4)
	int MaxTrailCount; // 0x38 (0x4)
	int MaxParticleInTrailCount; // 0x3c (0x4)
	unsigned char bDeadTrailsOnDeactivate; // 0x40 (0x1)
	unsigned char bDeadTrailsOnSourceLoss; // 0x40 (0x1)
	unsigned char bClipSourceSegement; // 0x40 (0x1)
	unsigned char bEnablePreviousTangentRecalculation; // 0x40 (0x1)
	unsigned char bTangentRecalculationEveryFrame; // 0x40 (0x1)
	unsigned char bSpawnInitialParticle; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	struct TEnumAsByte<ETrailsRenderAxisOption> RenderAxis; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	float TangentSpawningScalar; // 0x48 (0x4)
	unsigned char bRenderGeometry; // 0x4c (0x1)
	unsigned char bRenderSpawnPoints; // 0x4c (0x1)
	unsigned char bRenderTangents; // 0x4c (0x1)
	unsigned char bRenderTessellation; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	float TilingDistance; // 0x50 (0x4)
	float DistanceTessellationStepSize; // 0x54 (0x4)
	unsigned char bEnableTangentDiffInterpScale; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	float TangentTessellationScalar; // 0x5c (0x4)
};

