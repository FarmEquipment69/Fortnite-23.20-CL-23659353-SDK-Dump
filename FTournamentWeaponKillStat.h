// ScriptStruct /Script/FortniteGame.TournamentWeaponKillStat
// Size: 0x88
struct FTournamentWeaponKillStat
{
	struct FGameplayTagContainer TagList; // 0x0 (0x20)
	struct FString StatName; // 0x20 (0x10)
	struct FName StatDisplayName; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TMap<class AFortPlayerState*, int> PlayerStats; // 0x38 (0x50)
};

