// ScriptStruct /Script/FortniteGame.FortSpawnSlotData
// Size: 0x28
struct FFortSpawnSlotData
{
	struct FVector SpawnSlotLocation; // 0x0 (0x18)
	class AFortAIPawn* OccupyingAI; // 0x18 (0x8)
	struct TEnumAsByte<EFortRiftSlotStatus> SlotStatus; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

