// ScriptStruct /Script/Chaos.SolverCollisionData
// Size: 0xc0
struct FSolverCollisionData
{
	struct FVector Location; // 0x0 (0x18)
	struct FVector AccumulatedImpulse; // 0x18 (0x18)
	struct FVector Normal; // 0x30 (0x18)
	struct FVector Velocity1; // 0x48 (0x18)
	struct FVector Velocity2; // 0x60 (0x18)
	struct FVector AngularVelocity1; // 0x78 (0x18)
	struct FVector AngularVelocity2; // 0x90 (0x18)
	float Mass1; // 0xa8 (0x4)
	float Mass2; // 0xac (0x4)
	int ParticleIndex; // 0xb0 (0x4)
	int LevelsetIndex; // 0xb4 (0x4)
	int ParticleIndexMesh; // 0xb8 (0x4)
	int LevelsetIndexMesh; // 0xbc (0x4)
};

