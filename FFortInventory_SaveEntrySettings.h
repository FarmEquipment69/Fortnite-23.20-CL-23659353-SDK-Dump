// ScriptStruct /Script/FortniteGame.FortInventory_SaveEntrySettings
// Size: 0x38
struct FFortInventory_SaveEntrySettings
{
	int bIncludeHealthAndShield; // 0x0 (0x4)
	int bIncludeClassSlot; // 0x4 (0x4)
	int bIncludeTeamIndex; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FFortInventory_SavePolicyForStat> MinigameScoreStats; // 0x10 (0x10)
	int bIncludeInventory; // 0x20 (0x4)
	int bIncludeFullAmmoMagazine; // 0x24 (0x4)
	int bIncludeResources; // 0x28 (0x4)
	int bIncludeGold; // 0x2c (0x4)
	int bIncludeCheckpoints; // 0x30 (0x4)
	int bIncludePlayerLocation; // 0x34 (0x4)
};

