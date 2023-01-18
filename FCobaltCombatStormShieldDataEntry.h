// ScriptStruct /Script/FortniteGame.CobaltCombatStormShieldDataEntry
// Size: 0xc0
struct FCobaltCombatStormShieldDataEntry : FFastArraySerializerItem
{
	bool bStormShieldActive; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct TArray<unsigned char> Teams; // 0x10 (0x10)
	struct TArray<int> ParentStormShields; // 0x20 (0x10)
	class AAthenaCobaltStormShield* StormShieldActor; // 0x30 (0x8)
	struct FVector StormShieldPOILocation; // 0x38 (0x18)
	struct FGameplayTag POITag; // 0x50 (0x4)
	int8_t RoundIndex; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	struct TArray<int> TeamScores; // 0x58 (0x10)
	unsigned char LeadingTeam; // 0x68 (0x1)
	unsigned char TieBreakerTeam; // 0x69 (0x1)
	bool bAwardedFirstEliminationOfRound; // 0x6a (0x1)
	unsigned char FirstLandTeam; // 0x6b (0x1)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct TArray<float> TotalDamageDealt; // 0x70 (0x10)
	struct TArray<float> TotalDamageTaken; // 0x80 (0x10)
	class ACobaltPOICameraActor* POICamera; // 0x90 (0x8)
	struct FVector2D Team0RespawnPoint; // 0x98 (0x10)
	struct FVector2D Team1RespawnPoint; // 0xa8 (0x10)
	float NextSupplyDropSpawnTime; // 0xb8 (0x4)
	unsigned char padding_bc[0x4]; // 0xbc (0x4)
};

