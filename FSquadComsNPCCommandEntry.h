// ScriptStruct /Script/FortniteUI.SquadComsNPCCommandEntry
// Size: 0xf0
struct FSquadComsNPCCommandEntry
{
	class UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0x0 (0x8)
	struct FText Label; // 0x8 (0x18)
	struct FSlateBrush Brush; // 0x20 (0xc0)
	enum PingCommandType CommandType; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	class USoundBase* ConfirmSound; // 0xe8 (0x8)
};

