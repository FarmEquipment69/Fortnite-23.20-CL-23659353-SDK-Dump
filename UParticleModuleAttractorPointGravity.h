// Class /Script/Engine.ParticleModuleAttractorPointGravity
// Size: 0x88
class UParticleModuleAttractorPointGravity : public UParticleModuleAttractorBase
{
	struct FVector Position; // 0x30 (0x18)
	float Radius; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class UDistributionFloat* Strength; // 0x50 (0x8)
	struct FRawDistributionFloat StrengthRaw; // 0x58 (0x30)
};

