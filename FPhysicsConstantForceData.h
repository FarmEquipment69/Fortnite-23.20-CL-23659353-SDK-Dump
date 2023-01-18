// ScriptStruct /Script/FortniteGame.PhysicsConstantForceData
// Size: 0x38
struct FPhysicsConstantForceData
{
	struct FVector_NetQuantize Force; // 0x0 (0x18)
	struct FVector_NetQuantize Location; // 0x18 (0x18)
	unsigned char bAtLocation; // 0x30 (0x1)
	unsigned char bLocationIsRelative; // 0x30 (0x1)
	unsigned char bForceIsRelative; // 0x30 (0x1)
	unsigned char bVelocityChange; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

