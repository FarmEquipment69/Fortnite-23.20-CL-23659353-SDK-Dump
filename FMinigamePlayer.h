// ScriptStruct /Script/FortniteGame.MinigamePlayer
// Size: 0x100
struct FMinigamePlayer : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FUniqueNetIdRepl UniquePlayerId; // 0x10 (0x30)
	bool bHasValidResetData; // 0x40 (0x1)
	unsigned char ClassSlotIndex; // 0x41 (0x1)
	unsigned char unreflected_42[0x2]; // 0x42 (0x2) 
	struct FName MinigameClassScope; // 0x44 (0x4)
	float LastClassSwitchTime; // 0x48 (0x4)
	float EnteredMinigameTime; // 0x4c (0x4)
	unsigned char TeamBeforeMinigameStarted; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	int RoundWinCount; // 0x54 (0x4)
	struct FVector LocationBeforeMinigameStarted; // 0x58 (0x18)
	struct FRotator RotationBeforeMinigameStarted; // 0x70 (0x18)
	bool bIsLocationBeforeGameStartedBlocked; // 0x88 (0x1)
	bool bWasSkydivingBeforeMinigameStarted; // 0x89 (0x1)
	bool bWasFlyingBeforeMinigameStarted; // 0x8a (0x1)
	bool bIsTeleportingOrRespawningForGameplay; // 0x8b (0x1)
	bool bIsLocalPlayer; // 0x8c (0x1)
	bool bPreparingForRespawn; // 0x8d (0x1)
	bool bLeftMatchDuringPreGame; // 0x8e (0x1)
	unsigned char unreflected_8f[0x1]; // 0x8f (0x1) 
	class AFortPlayerStartCreative* ClaimedPlayerStart; // 0x90 (0x8)
	bool bIsWaitingForPersistence; // 0x98 (0x1)
	unsigned char unreflected_99[0x7]; // 0x99 (0x7) 
	struct TArray<struct FMinigamePlayerTeamClassSlotPair> TeamAndClassSlotHistory; // 0xa0 (0x10)
	struct FString PlayerName; // 0xb0 (0x10)
	unsigned char LastPlayerTeam; // 0xc0 (0x1)
	unsigned char padding_c1[0x3f]; // 0xc1 (0x3f)
};

