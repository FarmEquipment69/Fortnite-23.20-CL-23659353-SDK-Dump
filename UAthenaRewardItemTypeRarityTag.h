// Class /Script/FortniteUI.AthenaRewardItemTypeRarityTag
// Size: 0x2b8
class UAthenaRewardItemTypeRarityTag : public UCommonUserWidget
{
	struct FGameplayTag HideRarityGameplayTag; // 0x290 (0x4)
	unsigned char unreflected_294[0x4]; // 0x294 (0x4) 
	class UBorder* BorderItemRarity; // 0x298 (0x8)
	class UBorder* BorderRarityTint; // 0x2a0 (0x8)
	class UCommonTextBlock* TextItemRarity; // 0x2a8 (0x8)
	class UCommonTextBlock* TextItemType; // 0x2b0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaRewardItemTypeRarityTag.OnInitializeRarityWithSeries (Has no native function)
	void OnInitializeRarityWithSeries(class UFortItemSeriesDefinition*& SeriesData); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaRewardItemTypeRarityTag.OnInitializeRarityWithoutSeries (Has no native function)
	void OnInitializeRarityWithoutSeries(struct FFortRarityItemData& RarityData); // (Event | Protected | BlueprintEvent)
};

