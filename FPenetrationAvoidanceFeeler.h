// ScriptStruct /Script/FortniteGame.PenetrationAvoidanceFeeler
// Size: 0x30
struct FPenetrationAvoidanceFeeler
{
	struct FRotator AdjustmentRot; // 0x0 (0x18)
	float WorldWeight; // 0x18 (0x4)
	float PawnWeight; // 0x1c (0x4)
	float Extent; // 0x20 (0x4)
	int TraceInterval; // 0x24 (0x4)
	int FramesUntilNextTrace; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

