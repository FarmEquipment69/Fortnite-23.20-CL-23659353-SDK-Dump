// ScriptStruct /Script/FortniteUI.AthenaReplayBrowserRowData
// Size: 0x40
struct FAthenaReplayBrowserRowData
{
	struct FString Name; // 0x0 (0x10)
	struct FDateTime* Date; // 0x10 (0x8)
	float Length; // 0x18 (0x4)
	int Rank; // 0x1c (0x4)
	int NumPlayers; // 0x20 (0x4)
	int Eliminations; // 0x24 (0x4)
	int DownloadModulesCount; // 0x28 (0x4)
	unsigned char padding_2c[0x14]; // 0x2c (0x14)
};

