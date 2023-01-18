// ScriptStruct /Script/FortniteGame.MinigamePostGameSettings
// Size: 0xb8
struct FMinigamePostGameSettings
{
	enum EMinigameGameEndPostGameType PostGameType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float PostGameDelay; // 0x4 (0x4)
	bool bCustomShowScoreboard; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct FMinigamePostGameAnimationSettings VictoryAnimationSettings; // 0x10 (0x38)
	struct FMinigamePostGameAnimationSettings DefeatAnimationSettings; // 0x48 (0x38)
	struct FMinigamePostGameAnimationSettings TieAnimationSettings; // 0x80 (0x38)
};

