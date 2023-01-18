// Class /Script/FortniteUI.BattlePassNavigator
// Size: 0x330
class UBattlePassNavigator : public UCommonUserWidget
{
	unsigned char unreflected_290[0x18]; // 0x290 (0x18) 
	struct TArray<struct FTrackCategoryUI> CreatedTabs; // 0x2a8 (0x10)
	class UAthenaSeasonItemDefinition* SeasonData; // 0x2b8 (0x8)
	class UAthenaSeasonItemData_Level* SeasonDataLevel; // 0x2c0 (0x8)
	unsigned char unreflected_2c8[0x8]; // 0x2c8 (0x8) 
	struct FDataTableRowHandle NextTabInputAction; // 0x2d0 (0x10)
	struct FDataTableRowHandle PreviousTabInputAction; // 0x2e0 (0x10)
	class UCommonButtonGroupLegacy* EntryBoxButtonGroup; // 0x2f0 (0x8)
	class UDynamicEntryBox* DynamicEntryBoxCategories; // 0x2f8 (0x8)
	class UCommonTextBlock* TextSeasonNumber; // 0x300 (0x8)
	class UCommonTextBlock* TextCategoryName; // 0x308 (0x8)
	struct TArray<int> ViewedPages; // 0x310 (0x10)
	struct FString CachedCategoryName; // 0x320 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassNavigator.OnTabChanged (Has no native function)
	void OnTabChanged(bool& bIsForwardChange); // (Event | Protected | BlueprintEvent)
};

