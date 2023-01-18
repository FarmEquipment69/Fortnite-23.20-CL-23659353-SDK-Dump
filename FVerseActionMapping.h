// ScriptStruct /Script/EpicGamesEngine.VerseActionMapping
// Size: 0x30
struct FVerseActionMapping : FFastArraySerializerItem
{
	struct FName Name; // 0xc (0x4)
	struct FString UIText; // 0x10 (0x10)
	struct TArray<struct FKey> Keys; // 0x20 (0x10)
};

