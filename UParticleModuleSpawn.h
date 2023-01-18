// Class /Script/Engine.ParticleModuleSpawn
// Size: 0xe0
class UParticleModuleSpawn : public UParticleModuleSpawnBase
{
	struct FRawDistributionFloat Rate; // 0x38 (0x30)
	struct FRawDistributionFloat RateScale; // 0x68 (0x30)
	struct TArray<struct FParticleBurst> BurstList; // 0x98 (0x10)
	struct FRawDistributionFloat BurstScale; // 0xa8 (0x30)
	struct TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod; // 0xd8 (0x1)
	unsigned char unreflected_d9[0x3]; // 0xd9 (0x3) 
	unsigned char bApplyGlobalSpawnRateScale; // 0xdc (0x1)
	unsigned char padding_dd[0x3]; // 0xdd (0x3)
};

