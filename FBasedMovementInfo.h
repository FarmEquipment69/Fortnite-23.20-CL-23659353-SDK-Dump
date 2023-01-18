// ScriptStruct /Script/Engine.BasedMovementInfo
// Size: 0x50
struct FBasedMovementInfo
{
	uint16_t BaseID; // 0x0 (0x2)
	unsigned char unreflected_2[0x6]; // 0x2 (0x6) 
	class UPrimitiveComponent* MovementBase; // 0x8 (0x8)
	struct FName BoneName; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector_NetQuantize100 Location; // 0x18 (0x18)
	struct FRotator Rotation; // 0x30 (0x18)
	bool bServerHasBaseComponent; // 0x48 (0x1)
	bool bRelativeRotation; // 0x49 (0x1)
	bool bServerHasVelocity; // 0x4a (0x1)
	unsigned char padding_4b[0x5]; // 0x4b (0x5)
};

