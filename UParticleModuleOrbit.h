// Class /Script/Engine.ParticleModuleOrbit
// Size: 0x178
class UParticleModuleOrbit : public UParticleModuleOrbitBase
{
	struct TEnumAsByte<EOrbitChainMode> ChainMode; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FRawDistributionVector OffsetAmount; // 0x40 (0x60)
	struct FOrbitOptions OffsetOptions; // 0xa0 (0x4)
	unsigned char unreflected_a4[0x4]; // 0xa4 (0x4) 
	struct FRawDistributionVector RotationAmount; // 0xa8 (0x60)
	struct FOrbitOptions RotationOptions; // 0x108 (0x4)
	unsigned char unreflected_10c[0x4]; // 0x10c (0x4) 
	struct FRawDistributionVector RotationRateAmount; // 0x110 (0x60)
	struct FOrbitOptions RotationRateOptions; // 0x170 (0x4)
	unsigned char padding_174[0x4]; // 0x174 (0x4)
};

