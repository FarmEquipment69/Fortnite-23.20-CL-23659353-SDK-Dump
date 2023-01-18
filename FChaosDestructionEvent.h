// ScriptStruct /Script/ChaosNiagara.ChaosDestructionEvent
// Size: 0x78
struct FChaosDestructionEvent
{
	struct FVector Position; // 0x0 (0x18)
	struct FVector Normal; // 0x18 (0x18)
	struct FVector Velocity; // 0x30 (0x18)
	struct FVector AngularVelocity; // 0x48 (0x18)
	float ExtentMin; // 0x60 (0x4)
	float ExtentMax; // 0x64 (0x4)
	int ParticleID; // 0x68 (0x4)
	float Time; // 0x6c (0x4)
	int Type; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

