// ScriptStruct /Script/ChaosCaching.CollisionEvent
// Size: 0xf0
struct FCollisionEvent : FCacheEventBase
{
	struct FVector Location; // 0x8 (0x18)
	struct FVector AccumulatedImpulse; // 0x20 (0x18)
	struct FVector Normal; // 0x38 (0x18)
	struct FVector Velocity1; // 0x50 (0x18)
	struct FVector Velocity2; // 0x68 (0x18)
	struct FVector DeltaVelocity1; // 0x80 (0x18)
	struct FVector DeltaVelocity2; // 0x98 (0x18)
	struct FVector AngularVelocity1; // 0xb0 (0x18)
	struct FVector AngularVelocity2; // 0xc8 (0x18)
	float Mass1; // 0xe0 (0x4)
	float Mass2; // 0xe4 (0x4)
	float PenetrationDepth; // 0xe8 (0x4)
	unsigned char padding_ec[0x4]; // 0xec (0x4)
};

