// ScriptStruct /Script/FortniteGame.AthenaQuickChatLeafEntry
// Size: 0x110
struct FAthenaQuickChatLeafEntry
{
	struct FText Label; // 0x0 (0x18)
	struct FText FullChatMessage; // 0x18 (0x18)
	struct FSlateBrush Brush; // 0x30 (0xc0)
	bool bPopulateBrushFromContextObject; // 0xf0 (0x1)
	enum EAthenaQuickChatFilteringType FilterType; // 0xf1 (0x1)
	unsigned char unreflected_f2[0x6]; // 0xf2 (0x6) 
	class UAthenaEmojiItemDefinition* EmojiItemDefinition; // 0xf8 (0x8)
	enum ETeamMemberState TeamCommType; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	struct FGameplayTag OptionGameplayTag; // 0x104 (0x4)
	unsigned char padding_108[0x8]; // 0x108 (0x8)
};

