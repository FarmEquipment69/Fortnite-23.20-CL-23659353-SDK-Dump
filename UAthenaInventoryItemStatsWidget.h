// Class /Script/FortniteUI.AthenaInventoryItemStatsWidget
// Size: 0x2b0
class UAthenaInventoryItemStatsWidget : public UCommonUserWidget
{
	class UDynamicEntryBox* EntryBoxStats; // 0x290 (0x8)
	class UDataTable* ItemStatsBoundsTable; // 0x298 (0x8)
	class UFortTooltipLoadingWrapper* ItemTooltipLoader; // 0x2a0 (0x8)
	class UFortTooltipLoadingWrapper* ComparisonItemTooltipLoader; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaInventoryItemStatsWidget.HandleTooltipAssetsLoaded (Underlying native function: HandleTooltipAssetsLoaded 0xa556558)
	void HandleTooltipAssetsLoaded(); // (Final | Native | Private)
};

