// Class /Script/Engine.ParticleModuleAttractorParticle
// Size: 0xb0
class UParticleModuleAttractorParticle : public UParticleModuleAttractorBase
{
	struct FName EmitterName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FRawDistributionFloat Range; // 0x38 (0x30)
	unsigned char bStrengthByDistance; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct FRawDistributionFloat Strength; // 0x70 (0x30)
	unsigned char bAffectBaseVelocity; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct TEnumAsByte<EAttractorParticleSelectionMethod> SelectionMethod; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	unsigned char bRenewSource; // 0xa8 (0x1)
	unsigned char bInheritSourceVel; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	int LastSelIndex; // 0xac (0x4)
};

