// ScriptStruct /Script/FortniteAI.VehicleTurnInPlace
// Size: 0xd0
struct FVehicleTurnInPlace
{
	struct FScalableFloat MovingAngleBegin; // 0x0 (0x28)
	struct FScalableFloat MovingAngleEnd; // 0x28 (0x28)
	struct FScalableFloat IdleAngleBegin; // 0x50 (0x28)
	struct FScalableFloat IdleAngleEnd; // 0x78 (0x28)
	struct FScalableFloat MinMovingSpeed; // 0xa0 (0x28)
	bool bMissedPathPointReverse; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)
};

