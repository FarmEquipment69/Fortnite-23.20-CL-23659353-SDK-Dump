// ScriptStruct /Script/FortniteGame.FortCurrencyData
// Size: 0x48
struct FFortCurrencyData : FTableRowBase
{
	struct FString TemplateName; // 0x8 (0x10)
	int MaxStackSize; // 0x18 (0x4)
	int MaxNumStacks; // 0x1c (0x4)
	struct FString ProfileType; // 0x20 (0x10)
	struct FString Platform; // 0x30 (0x10)
	bool bPrivate; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

