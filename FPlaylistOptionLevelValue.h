// ScriptStruct /Script/FortniteGame.PlaylistOptionLevelValue
// Size: 0x70
struct FPlaylistOptionLevelValue : FPlaylistOptionValue
{
	struct FGuid LevelInstanceGuid; // 0x48 (0x10)
	struct FString LevelName; // 0x58 (0x10)
	bool bNewLevel; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

