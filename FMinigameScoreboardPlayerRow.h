// ScriptStruct /Script/FortniteGame.MinigameScoreboardPlayerRow
// Size: 0x48
struct FMinigameScoreboardPlayerRow : FMingiameScoreboardRow
{
	class AFortPlayerState* PlayerState; // 0x38 (0x8)
	bool bHasLeftGame; // 0x40 (0x1)
	bool bHideFromDisplay; // 0x41 (0x1)
	unsigned char padding_42[0x6]; // 0x42 (0x6)
};

