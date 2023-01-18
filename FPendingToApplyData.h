// ScriptStruct /Script/FortniteGame.PendingToApplyData
// Size: 0x130
struct FPendingToApplyData
{
	struct TWeakObjectPtr<class AFortPlayerControllerAthena> PlayerController; // 0x0 (0x8)
	struct TWeakObjectPtr<class APlayerState> PlayerState; // 0x8 (0x8)
	struct TWeakObjectPtr<class AFortMinigame> Minigame; // 0x10 (0x8)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FFortInventory_SaveEntry SaveEntry; // 0x20 (0x110)
};

