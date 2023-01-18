// ScriptStruct /Script/FortniteGame.WaxPlayerDataEntry
// Size: 0x58
struct FWaxPlayerDataEntry : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortPlayerStateAthena* PlayerState; // 0x10 (0x8)
	bool bPermanentlyWaxed; // 0x18 (0x1)
	bool bPlayerWasLeader; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	int TokenBasedPlacement; // 0x1c (0x4)
	int CurrentTokens; // 0x20 (0x4)
	int PreviousTokens; // 0x24 (0x4)
	int CurrentTeamTokens; // 0x28 (0x4)
	int PreviousTeamTokens; // 0x2c (0x4)
	int CurrentKills; // 0x30 (0x4)
	int PreviousKills; // 0x34 (0x4)
	int CurrentLives; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct FVector PreviousVictimLocation; // 0x40 (0x18)
};

