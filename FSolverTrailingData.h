// ScriptStruct /Script/Chaos.SolverTrailingData
// Size: 0x58
struct FSolverTrailingData
{
	struct FVector Location; // 0x0 (0x18)
	struct FVector Velocity; // 0x18 (0x18)
	struct FVector AngularVelocity; // 0x30 (0x18)
	float Mass; // 0x48 (0x4)
	int ParticleIndex; // 0x4c (0x4)
	int ParticleIndexMesh; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

