// ScriptStruct /Script/ChaosSolverEngine.ChaosCrumblingEvent
// Size: 0xc0
struct FChaosCrumblingEvent
{
	class UPrimitiveComponent* Component; // 0x0 (0x8)
	struct FVector Location; // 0x8 (0x18)
	struct FQuat Orientation; // 0x20 (0x20)
	struct FVector LinearVelocity; // 0x40 (0x18)
	struct FVector AngularVelocity; // 0x58 (0x18)
	float Mass; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FBox LocalBounds; // 0x78 (0x38)
	struct TArray<int> Children; // 0xb0 (0x10)
};

