// ScriptStruct /Script/FortniteGame.MinigameScoreEntry
// Size: 0x68
struct FMinigameScoreEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FUniqueNetIdRepl UniqueId; // 0x10 (0x30)
	struct FString PlayerName; // 0x40 (0x10)
	float Score; // 0x50 (0x4)
	unsigned char unreflected_54[0x4]; // 0x54 (0x4) 
	struct FDateTime* TimeRecorded; // 0x58 (0x8)
	unsigned char bHasScore; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

