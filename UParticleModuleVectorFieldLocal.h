// Class /Script/Engine.ParticleModuleVectorFieldLocal
// Size: 0x90
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
	class UVectorField* VectorField; // 0x30 (0x8)
	struct FVector RelativeTranslation; // 0x38 (0x18)
	struct FRotator RelativeRotation; // 0x50 (0x18)
	struct FVector RelativeScale3D; // 0x68 (0x18)
	float Intensity; // 0x80 (0x4)
	float Tightness; // 0x84 (0x4)
	unsigned char bIgnoreComponentTransform; // 0x88 (0x1)
	unsigned char bTileX; // 0x88 (0x1)
	unsigned char bTileY; // 0x88 (0x1)
	unsigned char bTileZ; // 0x88 (0x1)
	unsigned char bUseFixDT; // 0x88 (0x1)
	unsigned char padding_89[0x7]; // 0x89 (0x7)
};

