// ScriptStruct /Script/FortniteGame.OutpostUpgradeAndPrestigeBuildingData
// Size: 0x90
struct FOutpostUpgradeAndPrestigeBuildingData : FOutpostBuildingData
{
	int MaxPrestigeLevel; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UDataTable* DefaultOutpostBuildingUpgradeData; // 0x30 (0x8)
	struct TArray<struct FOutpostUpgradesPerTheaterData> PerTheaterOutpostBuildingUpgradeData; // 0x38 (0x10)
	struct FOutpostPrestigeEffects DefaultPrestigeData; // 0x48 (0x10)
	struct TArray<struct FOutpostPrestigeEffectsPerTheater> PrestigePerTheaterData; // 0x58 (0x10)
	struct FOutpostPOSTBoost DefaultPOSTData; // 0x68 (0x10)
	struct TArray<struct FOutpostPOSTPerTheaterData> POSTPerTheaterData; // 0x78 (0x10)
	class UClass* POSTBuildingGameplayEffectClass; // 0x88 (0x8)
};

