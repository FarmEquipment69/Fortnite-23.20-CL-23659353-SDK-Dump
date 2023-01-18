// ScriptStruct /Script/FortniteGame.MingiameScoreboardRow
// Size: 0x38
struct FMingiameScoreboardRow
{
	struct FText Name; // 0x0 (0x18)
	int TeamColorIndex; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FMinigameScoreboardValue> Values; // 0x20 (0x10)
	int WinCount; // 0x30 (0x4)
	bool bHighlight; // 0x34 (0x1)
	unsigned char padding_35[0x3]; // 0x35 (0x3)
};

