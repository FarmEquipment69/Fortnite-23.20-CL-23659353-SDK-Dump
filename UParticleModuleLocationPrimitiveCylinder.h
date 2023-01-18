// Class /Script/Engine.ParticleModuleLocationPrimitiveCylinder
// Size: 0x138
class UParticleModuleLocationPrimitiveCylinder : public UParticleModuleLocationPrimitiveBase
{
	unsigned char RadialVelocity; // 0xc8 (0x1)
	unsigned char unreflected_c9[0x7]; // 0xc9 (0x7) 
	struct FRawDistributionFloat StartRadius; // 0xd0 (0x30)
	struct FRawDistributionFloat StartHeight; // 0x100 (0x30)
	struct TEnumAsByte<CylinderHeightAxis> HeightAxis; // 0x130 (0x1)
	unsigned char padding_131[0x7]; // 0x131 (0x7)
};

