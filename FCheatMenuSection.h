// ScriptStruct /Script/FortniteUI.CheatMenuSection
// Size: 0x48
struct FCheatMenuSection
{
	struct FString DevName; // 0x0 (0x10)
	struct FString DisplayName; // 0x10 (0x10)
	struct FString MinVersion; // 0x20 (0x10)
	struct TArray<struct FCheatMenuEntry> Entries; // 0x30 (0x10)
	bool bExpanded; // 0x40 (0x1)
	unsigned char padding_41[0x7]; // 0x41 (0x7)
};

