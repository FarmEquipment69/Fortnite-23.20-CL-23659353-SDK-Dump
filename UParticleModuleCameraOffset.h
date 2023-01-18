// Class /Script/Engine.ParticleModuleCameraOffset
// Size: 0x68
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
	struct FRawDistributionFloat CameraOffset; // 0x30 (0x30)
	unsigned char bSpawnTimeOnly; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	struct TEnumAsByte<EParticleCameraOffsetUpdateMethod> UpdateMethod; // 0x64 (0x1)
	unsigned char padding_65[0x3]; // 0x65 (0x3)
};

