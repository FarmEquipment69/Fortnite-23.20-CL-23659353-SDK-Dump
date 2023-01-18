// Class /Script/Engine.ParticleModuleAttractorPoint
// Size: 0xf8
class UParticleModuleAttractorPoint : public UParticleModuleAttractorBase
{
	struct FRawDistributionVector Position; // 0x30 (0x60)
	struct FRawDistributionFloat Range; // 0x90 (0x30)
	struct FRawDistributionFloat Strength; // 0xc0 (0x30)
	unsigned char StrengthByDistance; // 0xf0 (0x1)
	unsigned char bAffectBaseVelocity; // 0xf0 (0x1)
	unsigned char bOverrideVelocity; // 0xf0 (0x1)
	unsigned char bUseWorldSpacePosition; // 0xf0 (0x1)
	unsigned char PositiveX; // 0xf0 (0x1)
	unsigned char PositiveY; // 0xf0 (0x1)
	unsigned char PositiveZ; // 0xf0 (0x1)
	unsigned char NegativeX; // 0xf0 (0x1)
	unsigned char NegativeY; // 0xf1 (0x1)
	unsigned char NegativeZ; // 0xf1 (0x1)
	unsigned char padding_f2[0x6]; // 0xf2 (0x6)
};

