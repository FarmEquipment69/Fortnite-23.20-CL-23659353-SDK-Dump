// ScriptStruct /Script/FortniteUI.NPCCommandEntry
// Size: 0xf0
struct FNPCCommandEntry
{
	class UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0x0 (0x8)
	struct FText Label; // 0x8 (0x18)
	struct FSlateBrush Brush; // 0x20 (0xc0)
	enum PingCommandType CommandType; // 0xe0 (0x1)
	unsigned char padding_e1[0xf]; // 0xe1 (0xf)
};

