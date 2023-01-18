// Class /Script/FortniteGame.FortItemCategory
// Size: 0x60
class UFortItemCategory : public UDataAsset
{
	struct TArray<struct FItemCategoryMappingData> PrimaryCategories; // 0x30 (0x10)
	struct TArray<struct FItemCategory> SecondaryCategories; // 0x40 (0x10)
	struct TArray<struct FItemCategory> TertiaryCategories; // 0x50 (0x10)
};

