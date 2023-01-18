// ScriptStruct /Script/FortniteGame.FortQuestPackInfo
// Size: 0x38
struct FFortQuestPackInfo
{
	struct FString Name; // 0x0 (0x10)
	struct FString DefaultQuestPack; // 0x10 (0x10)
	int MaxActiveDailyQuests; // 0x20 (0x4)
	int MaxRerollsPerDay; // 0x24 (0x4)
	int DaysToKeepClaimedQuests; // 0x28 (0x4)
	int DaysToKeepCompletedQuests; // 0x2c (0x4)
	int MaxUnclaimedQuests; // 0x30 (0x4)
	bool IsStreamingQuestPack; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

