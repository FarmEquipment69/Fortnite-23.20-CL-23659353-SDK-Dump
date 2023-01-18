// Class /Script/BattlePassBase.FortBattlePassRewardGrid
// Size: 0x478
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x68]; // 0x3a8 (0x68) 
	class UClass* GridTileClass; // 0x410 (0x8)
	class UClass* GridEmptyTileClass; // 0x418 (0x8)
	struct FVector2D GridCellPadding; // 0x420 (0x10)
	class UFortBattlePassRewardGridHeader* PageHeader; // 0x430 (0x8)
	class UGridPanel* GridPanelRewards; // 0x438 (0x8)
	class UFortBattlePassTileBase* DefaultFocusTile; // 0x440 (0x8)
	struct TWeakObjectPtr<class UCommonButtonBase> LastFocusedTile; // 0x448 (0x8)
	unsigned char padding_450[0x28]; // 0x450 (0x28)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected (Has no native function)
	void OnPageUnselected(); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageSelected (Has no native function)
	void OnPageSelected(); // (Event | Public | BlueprintEvent)
};

