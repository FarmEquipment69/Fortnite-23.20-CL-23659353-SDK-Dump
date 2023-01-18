// ScriptStruct /Script/FortniteGame.IntelState
// Size: 0x14
struct FIntelState
{
	bool bInRange; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float TimeRemaining; // 0x4 (0x4)
	float ServerEndTime; // 0x8 (0x4)
	float ServerGroundTimerEnd; // 0xc (0x4)
	enum EIntelStateEnum IntelState; // 0x10 (0x1)
	unsigned char WinningTeam; // 0x11 (0x1)
	unsigned char AttackingTeam; // 0x12 (0x1)
	unsigned char DefendingTeam; // 0x13 (0x1)
};

