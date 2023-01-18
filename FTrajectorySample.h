// ScriptStruct /Script/Engine.TrajectorySample
// Size: 0x90
struct FTrajectorySample
{
	float AccumulatedSeconds; // 0x0 (0x4)
	float AccumulatedDistance; // 0x4 (0x4)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Transform; // 0x10 (0x60)
	struct FVector LinearVelocity; // 0x70 (0x18)
	unsigned char padding_88[0x8]; // 0x88 (0x8)
};

