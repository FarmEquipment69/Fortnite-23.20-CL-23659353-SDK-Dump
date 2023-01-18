// Class /Script/FortniteUI.SeasonRewardsGridWidget
// Size: 0x1b0
class USeasonRewardsGridWidget : public UWidget
{
	class UClass* ItemWidgetToCreate; // 0x148 (0x8)
	struct FMulticastInlineDelegate OnItemWidgetCreated; // 0x150 (0x10)
	struct FMargin ItemPadding; // 0x160 (0x10)
	struct FMargin ColumnPadding; // 0x170 (0x10)
	float ScrollSpeed; // 0x180 (0x4)
	unsigned char padding_184[0x2c]; // 0x184 (0x2c)

	/* Functions */

	// Function /Script/FortniteUI.SeasonRewardsGridWidget.Populate (Underlying native function: Populate 0xa8aa81c)
	void Populate(); // (Final | Native | Public | BlueprintCallable)
};

