// Class /Script/Engine.ParticleModuleLocationPrimitiveBase
// Size: 0xc8
class UParticleModuleLocationPrimitiveBase : public UParticleModuleLocationBase
{
	unsigned char PositiveX; // 0x30 (0x1)
	unsigned char PositiveY; // 0x30 (0x1)
	unsigned char PositiveZ; // 0x30 (0x1)
	unsigned char NegativeX; // 0x30 (0x1)
	unsigned char NegativeY; // 0x30 (0x1)
	unsigned char NegativeZ; // 0x30 (0x1)
	unsigned char SurfaceOnly; // 0x30 (0x1)
	unsigned char Velocity; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FRawDistributionFloat VelocityScale; // 0x38 (0x30)
	struct FRawDistributionVector StartLocation; // 0x68 (0x60)
};

