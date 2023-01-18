// Class /Script/Engine.ParticleModuleSpawnPerUnit
// Size: 0x78
class UParticleModuleSpawnPerUnit : public UParticleModuleSpawnBase
{
	float UnitScalar; // 0x38 (0x4)
	float MovementTolerance; // 0x3c (0x4)
	struct FRawDistributionFloat SpawnPerUnit; // 0x40 (0x30)
	float MaxFrameDistance; // 0x70 (0x4)
	unsigned char bIgnoreSpawnRateWhenMoving; // 0x74 (0x1)
	unsigned char bIgnoreMovementAlongX; // 0x74 (0x1)
	unsigned char bIgnoreMovementAlongY; // 0x74 (0x1)
	unsigned char bIgnoreMovementAlongZ; // 0x74 (0x1)
	unsigned char padding_75[0x3]; // 0x75 (0x3)
};

