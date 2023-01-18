// ScriptStruct /Script/FortniteGame.MinigamePlayers
// Size: 0x120
struct FMinigamePlayers : FFastArraySerializer
{
	struct TArray<struct FMinigamePlayer> Players; // 0x108 (0x10)
	class AFortMinigame* Owner; // 0x118 (0x8)
};

