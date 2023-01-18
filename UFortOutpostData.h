// Class /Script/FortniteGame.FortOutpostData
// Size: 0x150
class UFortOutpostData : public UDataAsset
{
	int StructureLimitNotificationThreshold; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FOutpostBuildingData StormShieldData; // 0x38 (0x28)
	struct FHarvestingOptimizerBuildingData HarvestingOptimizerData; // 0x60 (0x28)
	struct FStorageVaultBuildingData StorageVaultData; // 0x88 (0x38)
	struct FOutpostUpgradeAndPrestigeBuildingData OutpostUpgradeAndPrestigeData; // 0xc0 (0x90)
};

