// ScriptStruct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
// Size: 0xc0
struct FChaosPhysicsCollisionInfo
{
	class UPrimitiveComponent* Component; // 0x0 (0x8)
	class UPrimitiveComponent* OtherComponent; // 0x8 (0x8)
	struct FVector Location; // 0x10 (0x18)
	struct FVector Normal; // 0x28 (0x18)
	struct FVector AccumulatedImpulse; // 0x40 (0x18)
	struct FVector Velocity; // 0x58 (0x18)
	struct FVector OtherVelocity; // 0x70 (0x18)
	struct FVector AngularVelocity; // 0x88 (0x18)
	struct FVector OtherAngularVelocity; // 0xa0 (0x18)
	float Mass; // 0xb8 (0x4)
	float OtherMass; // 0xbc (0x4)
};

