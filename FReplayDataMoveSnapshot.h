// ScriptStruct /Script/FortniteGame.ReplayDataMoveSnapshot
// Size: 0x20
struct FReplayDataMoveSnapshot
{
	struct FVector_NetQuantize Position; // 0x0 (0x18)
	struct TEnumAsByte<EFortMovementStyle> MovementStyle; // 0x18 (0x1)
	unsigned char unreflected_19[0x1]; // 0x19 (0x1) 
	uint16_t WorldTime; // 0x1a (0x2)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

