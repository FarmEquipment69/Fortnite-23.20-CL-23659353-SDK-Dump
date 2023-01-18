// ScriptStruct /Script/FortniteGame.FortDailyQuestData
// Size: 0x58
struct FFortDailyQuestData
{
	struct FString GranterQuestPack; // 0x0 (0x10)
	struct FString Group; // 0x10 (0x10)
	int Count; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct TArray<struct FString> Playlists; // 0x28 (0x10)
	bool bShouldBackfill; // 0x38 (0x1)
	bool bShouldGrantRestXP; // 0x39 (0x1)
	unsigned char unreflected_3a[0x6]; // 0x3a (0x6) 
	struct FString CalendarEventName; // 0x40 (0x10)
	float EmptyQuestWeight; // 0x50 (0x4)
	unsigned char padding_54[0x4]; // 0x54 (0x4)
};

