// Class /Script/Engine.ParticleModuleCollision
// Size: 0x1c0
class UParticleModuleCollision : public UParticleModuleCollisionBase
{
	struct FRawDistributionVector DampingFactor; // 0x30 (0x60)
	struct FRawDistributionVector DampingFactorRotation; // 0x90 (0x60)
	struct FRawDistributionFloat MaxCollisions; // 0xf0 (0x30)
	struct TEnumAsByte<EParticleCollisionComplete> CollisionCompletionOption; // 0x120 (0x1)
	unsigned char unreflected_121[0x7]; // 0x121 (0x7) 
	struct TArray<struct TEnumAsByte<EObjectTypeQuery>> CollisionTypes; // 0x128 (0x10)
	unsigned char unreflected_138[0x8]; // 0x138 (0x8) 
	unsigned char bApplyPhysics; // 0x140 (0x1)
	unsigned char bIgnoreTriggerVolumes; // 0x140 (0x1)
	unsigned char unreflected_141[0x7]; // 0x141 (0x7) 
	struct FRawDistributionFloat ParticleMass; // 0x148 (0x30)
	float DirScalar; // 0x178 (0x4)
	unsigned char bPawnsDoNotDecrementCount; // 0x17c (0x1)
	unsigned char bOnlyVerticalNormalsDecrementCount; // 0x17c (0x1)
	unsigned char unreflected_17d[0x3]; // 0x17d (0x3) 
	float VerticalFudgeFactor; // 0x180 (0x4)
	unsigned char unreflected_184[0x4]; // 0x184 (0x4) 
	struct FRawDistributionFloat DelayAmount; // 0x188 (0x30)
	unsigned char bDropDetail; // 0x1b8 (0x1)
	unsigned char bCollideOnlyIfVisible; // 0x1b8 (0x1)
	unsigned char bIgnoreSourceActor; // 0x1b8 (0x1)
	unsigned char unreflected_1b9[0x3]; // 0x1b9 (0x3) 
	float MaxCollisionDistance; // 0x1bc (0x4)
};

