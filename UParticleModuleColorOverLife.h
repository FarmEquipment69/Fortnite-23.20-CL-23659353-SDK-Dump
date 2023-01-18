// Class /Script/Engine.ParticleModuleColorOverLife
// Size: 0xc8
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
	struct FRawDistributionVector ColorOverLife; // 0x30 (0x60)
	struct FRawDistributionFloat AlphaOverLife; // 0x90 (0x30)
	unsigned char bClampAlpha; // 0xc0 (0x1)
	unsigned char padding_c1[0x7]; // 0xc1 (0x7)
};

