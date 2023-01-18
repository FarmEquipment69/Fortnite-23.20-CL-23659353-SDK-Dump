// ScriptStruct /Script/FortniteGame.FortSpeechBubbleDataTableRow
// Size: 0x48
struct FFortSpeechBubbleDataTableRow : FTableRowBase
{
	bool bEnabled; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FText SpeechBubbleText; // 0x10 (0x18)
	struct FGameplayTagContainer FilterTags; // 0x28 (0x20)
};

