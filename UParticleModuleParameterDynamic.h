// Class /Script/Engine.ParticleModuleParameterDynamic
// Size: 0x48
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
	struct TArray<struct FEmitterDynamicParameter> DynamicParams; // 0x30 (0x10)
	int UpdateFlags; // 0x40 (0x4)
	unsigned char bUsesVelocity; // 0x44 (0x1)
	unsigned char padding_45[0x3]; // 0x45 (0x3)
};

