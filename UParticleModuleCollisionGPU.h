// Class /Script/Engine.ParticleModuleCollisionGPU
// Size: 0xa8
class UParticleModuleCollisionGPU : public UParticleModuleCollisionBase
{
	struct FRawDistributionFloat Resilience; // 0x30 (0x30)
	struct FRawDistributionFloat ResilienceScaleOverLife; // 0x60 (0x30)
	float Friction; // 0x90 (0x4)
	float RandomSpread; // 0x94 (0x4)
	float RandomDistribution; // 0x98 (0x4)
	float RadiusScale; // 0x9c (0x4)
	float RadiusBias; // 0xa0 (0x4)
	struct TEnumAsByte<EParticleCollisionResponse> Response; // 0xa4 (0x1)
	struct TEnumAsByte<EParticleCollisionMode> CollisionMode; // 0xa5 (0x1)
	unsigned char padding_a6[0x2]; // 0xa6 (0x2)
};

