// ScriptStruct /Script/FortniteGame.AthenaMatchStats
// Size: 0xe8
struct FAthenaMatchStats
{
	struct FString StatBucket; // 0x0 (0x10)
	struct FString MatchID; // 0x10 (0x10)
	struct FString MatchEndTime; // 0x20 (0x10)
	struct FString MatchPlatform; // 0x30 (0x10)
	int Stats[0x14]; // 0x40 (0x4) (ARRAY) 
	struct TArray<struct FAthenaWeaponStats> WeaponStats; // 0x90 (0x10)
	struct TArray<struct FAthenaXPStats> XPStats; // 0xa0 (0x10)
	struct FDynamicXpProfileStats DynamicXp; // 0xb0 (0x24)
	bool bIsValid; // 0xd4 (0x1)
	unsigned char unreflected_d5[0x3]; // 0xd5 (0x3) 
	struct FString FactionTag; // 0xd8 (0x10)
};

