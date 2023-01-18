// ScriptStruct /Script/FortniteGame.FortMissionAlertSpreadData
// Size: 0x20
struct FFortMissionAlertSpreadData : FTableRowBase
{
	float ChanceToSpread; // 0x8 (0x4)
	int TotalChancesToSpread; // 0xc (0x4)
	int MaxNumTilesToSpreadTo; // 0x10 (0x4)
	int SpreadInterval; // 0x14 (0x4)
	struct FName MissionAlertRowName; // 0x18 (0x4)
	unsigned char padding_1c[0x4]; // 0x1c (0x4)
};

