// Class /Script/Engine.ParticleModuleSubUVMovie
// Size: 0xb0
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
	unsigned char bUseEmitterTime; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	struct FRawDistributionFloat FrameRate; // 0x78 (0x30)
	int StartingFrame; // 0xa8 (0x4)
	unsigned char padding_ac[0x4]; // 0xac (0x4)
};

