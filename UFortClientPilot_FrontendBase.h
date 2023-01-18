// Class /Script/FortniteGame.FortClientPilot_FrontendBase
// Size: 0x1a0
class UFortClientPilot_FrontendBase : public UFortClientPilot_Base
{
	bool bWaitingForSkillTreePurchase; // 0x158 (0x1)
	bool bWaitingForWorkerSlot; // 0x159 (0x1)
	unsigned char unreflected_15a[0x2]; // 0x15a (0x2) 
	int NumSkillPurchasesAttempted; // 0x15c (0x4)
	int MaxSkillPurchaseAttempts; // 0x160 (0x4)
	int NumWorkerSlotsAttempted; // 0x164 (0x4)
	int MaxWorkerSlotAttempts; // 0x168 (0x4)
	int LoopsSpentWaitingForFrontend; // 0x16c (0x4)
	unsigned char unreflected_170[0x4]; // 0x170 (0x4) 
	float LobbyActionTimer; // 0x174 (0x4)
	float TimeBetweenLobbyActions; // 0x178 (0x4)
	bool bHasAttemptedAbandon; // 0x17c (0x1)
	unsigned char unreflected_17d[0xf]; // 0x17d (0xf) 
	float LastMatchmakeTime; // 0x18c (0x4)
	float LastLoginCycleTime; // 0x190 (0x4)
	unsigned char padding_194[0xc]; // 0x194 (0xc)
};

