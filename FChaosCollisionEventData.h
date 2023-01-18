// ScriptStruct /Script/GeometryCollectionEngine.ChaosCollisionEventData
// Size: 0x80
struct FChaosCollisionEventData
{
	struct FVector Location; // 0x0 (0x18)
	struct FVector Normal; // 0x18 (0x18)
	struct FVector Velocity1; // 0x30 (0x18)
	struct FVector Velocity2; // 0x48 (0x18)
	float Mass1; // 0x60 (0x4)
	float Mass2; // 0x64 (0x4)
	struct FVector Impulse; // 0x68 (0x18)
};

