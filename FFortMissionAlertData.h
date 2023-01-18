// ScriptStruct /Script/FortniteGame.FortMissionAlertData
// Size: 0x60
struct FFortMissionAlertData : FTableRowBase
{
	struct FName CategoryRowName; // 0x8 (0x4)
	struct FName SpreadRowName; // 0xc (0x4)
	struct FString RequiredEventFlag; // 0x10 (0x10)
	bool bOnlyUsedForSpreading; // 0x20 (0x1)
	unsigned char unreflected_21[0x3]; // 0x21 (0x3) 
	int MinimumTileDifficulty; // 0x24 (0x4)
	int MaximumTileDifficulty; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FString> RestrictedMissionGens; // 0x30 (0x10)
	struct FString LootTierGroup; // 0x40 (0x10)
	struct FString ModifierTierGroup; // 0x50 (0x10)
};

