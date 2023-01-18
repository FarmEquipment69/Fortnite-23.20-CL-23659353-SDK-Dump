// ScriptStruct /Script/Engine.TickFunction
// Size: 0x28
struct FTickFunction
{
	struct TEnumAsByte<ETickingGroup> TickGroup; // 0x8 (0x1)
	struct TEnumAsByte<ETickingGroup> EndTickGroup; // 0x9 (0x1)
	unsigned char bTickEvenWhenPaused; // 0xa (0x1)
	unsigned char bCanEverTick; // 0xa (0x1)
	unsigned char bStartWithTickEnabled; // 0xa (0x1)
	unsigned char bAllowTickOnDedicatedServer; // 0xa (0x1)
	unsigned char unreflected_b[0x1]; // 0xb (0x1) 
	float TickInterval; // 0xc (0x4)
	unsigned char padding_10[0x18]; // 0x10 (0x18)
};

