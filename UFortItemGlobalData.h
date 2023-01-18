// Class /Script/FortniteGame.FortItemGlobalData
// Size: 0x160
class UFortItemGlobalData : public UPrimaryDataAsset
{
	int RarityToMaxLevel[0x8]; // 0x30 (0x4) (ARRAY) 
	struct FCurveTableRowHandle RarityToFusionXPCurveTableRow[0x8]; // 0x50 (0x10) (ARRAY) 
	struct FCurveTableRowHandle LevelUpXPCostCurveTableRow; // 0xd0 (0x10)
	struct FDataTableRowHandle RarityUpgradeRecipes[0x8]; // 0xe0 (0x10) (ARRAY) 
};

