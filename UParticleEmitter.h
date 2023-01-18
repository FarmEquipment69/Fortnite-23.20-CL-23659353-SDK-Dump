// Class /Script/Engine.ParticleEmitter
// Size: 0x1b8
class UParticleEmitter : public UObject
{
	struct FName EmitterName; // 0x28 (0x4)
	int SubUVDataOffset; // 0x2c (0x4)
	struct TEnumAsByte<EEmitterRenderMode> EmitterRenderMode; // 0x30 (0x1)
	enum EParticleSignificanceLevel SignificanceLevel; // 0x31 (0x1)
	unsigned char unreflected_32[0x1]; // 0x32 (0x1) 
	unsigned char bUseLegacySpawningBehavior; // 0x33 (0x1)
	unsigned char ConvertedModules; // 0x33 (0x1)
	unsigned char bIsSoloing; // 0x33 (0x1)
	unsigned char bCookedOut; // 0x33 (0x1)
	unsigned char bDisabledLODsKeepEmitterAlive; // 0x33 (0x1)
	unsigned char bDisableWhenInsignficant; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct TArray<class UParticleLODLevel*> LODLevels; // 0x38 (0x10)
	int PeakActiveParticles; // 0x48 (0x4)
	int InitialAllocationCount; // 0x4c (0x4)
	float QualityLevelSpawnRateScale; // 0x50 (0x4)
	uint32_t DetailModeBitmask; // 0x54 (0x4)
	unsigned char padding_58[0x160]; // 0x58 (0x160)
};

