// Class /Script/Engine.ParticleModuleKillBox
// Size: 0xf8
class UParticleModuleKillBox : public UParticleModuleKillBase
{
	struct FRawDistributionVector LowerLeftCorner; // 0x30 (0x60)
	struct FRawDistributionVector UpperRightCorner; // 0x90 (0x60)
	unsigned char bAbsolute; // 0xf0 (0x1)
	unsigned char bKillInside; // 0xf0 (0x1)
	unsigned char bAxisAlignedAndFixedSize; // 0xf0 (0x1)
	unsigned char padding_f1[0x7]; // 0xf1 (0x7)
};

