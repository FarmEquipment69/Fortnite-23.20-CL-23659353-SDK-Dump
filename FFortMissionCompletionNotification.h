// ScriptStruct /Script/FortniteGame.FortMissionCompletionNotification
// Size: 0x38
struct FFortMissionCompletionNotification
{
	bool bWasCritical; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString MissionName; // 0x8 (0x10)
	struct FMcpLootResult LootGranted; // 0x18 (0x20)
};

