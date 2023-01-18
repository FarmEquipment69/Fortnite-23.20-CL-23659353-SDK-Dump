// Class /Script/FortniteGame.FortAccountItemDefinition
// Size: 0x420
class UFortAccountItemDefinition : public UFortPersistableItemDefinition
{
	struct FCurveTableRowHandle LevelToXpHandle; // 0x3a8 (0x10)
	struct FCurveTableRowHandle LevelToSacrificeXpHandle; // 0x3b8 (0x10)
	struct FDataTableRowHandle SacrificeRecipe; // 0x3c8 (0x10)
	struct FDataTableRowHandle TransmogSacrificeRow; // 0x3d8 (0x10)
	struct TArray<struct FDataTableRowHandle> ConversionRecipes; // 0x3e8 (0x10)
	struct FDataTableRowHandle UpgradeRarityRecipeHandle; // 0x3f8 (0x10)
	int MinLevel; // 0x408 (0x4)
	int MaxLevel; // 0x40c (0x4)
	struct FString GrantToProfileType; // 0x410 (0x10)
};

