// Class /Script/BattlePassBase.FortBattlePassRewardTrack
// Size: 0x438
class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x40]; // 0x3a8 (0x40) 
	class UClass* RewardTileClass; // 0x3e8 (0x8)
	class UClass* RewardEmptyTileClass; // 0x3f0 (0x8)
	class UClass* PrerequisiteHeaderClass; // 0x3f8 (0x8)
	struct FVector2D GridCellPadding; // 0x400 (0x10)
	class UGridPanel* GridPanelRewards; // 0x410 (0x8)
	class UFortBattlePassTileBase* DefaultFocusTile; // 0x418 (0x8)
	struct TWeakObjectPtr<class UCommonButtonBase> LastFocusedTile; // 0x420 (0x8)
	unsigned char padding_428[0x10]; // 0x428 (0x10)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected (Has no native function)
	void OnPageUnselected(); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageSelected (Has no native function)
	void OnPageSelected(); // (Event | Public | BlueprintEvent)
};

