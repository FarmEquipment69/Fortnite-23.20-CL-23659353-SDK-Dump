// Class /Script/Engine.ParticleModuleTypeDataGpu
// Size: 0x5d0
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
	struct FGPUSpriteEmitterInfo EmitterInfo; // 0x30 (0x350)
	struct FGPUSpriteResourceData ResourceData; // 0x380 (0x240)
	float CameraMotionBlurAmount; // 0x5c0 (0x4)
	unsigned char bClearExistingParticlesOnInit; // 0x5c4 (0x1)
	unsigned char padding_5c5[0xb]; // 0x5c5 (0xb)
};

