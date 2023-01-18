// ScriptStruct /Script/ChaosSolverEngine.ChaosBreakEvent
// Size: 0x78
struct FChaosBreakEvent
{
	class UPrimitiveComponent* Component; // 0x0 (0x8)
	struct FVector Location; // 0x8 (0x18)
	struct FVector Velocity; // 0x20 (0x18)
	struct FVector AngularVelocity; // 0x38 (0x18)
	struct FVector Extents; // 0x50 (0x18)
	float Mass; // 0x68 (0x4)
	int Index; // 0x6c (0x4)
	bool bFromCrumble; // 0x70 (0x1)
	unsigned char padding_71[0x7]; // 0x71 (0x7)
};

