// Class /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile
// Size: 0x320
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{
	unsigned char unreflected_268[0x20]; // 0x268 (0x20) 
	class UProgressBar* ProgressBar; // 0x288 (0x8)
	class UFortDynamicEntryBox* FortDynamicEntryBoxItems; // 0x290 (0x8)
	class URichTextBlock* TextCategoryTitle; // 0x298 (0x8)
	class UFortBattlePassTile* PreviewedTile; // 0x2a0 (0x8)
	int OwnedRewards; // 0x2a8 (0x4)
	unsigned char padding_2ac[0x74]; // 0x2ac (0x74)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile (Underlying native function: SetPreviewedTile 0x7270d1c)
	void SetPreviewedTile(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated (Has no native function)
	void OnOwnedTilesUpdated(int& CurrentlyOwnedRewards, int& TotalRewards, float& CategoryProgress); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged (Has no native function)
	void OnLockedStateChanged(bool& bCategoryLocked); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated (Has no native function)
	void OnLockedProgressUpdated(int& CurrentlyOwnedBeforeCategory, int& TotalRewardsBeforeCategory, float& LockedProgress); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile (Underlying native function: FocusTile 0x7270484)
	void FocusTile(int& Index); // (Final | Native | Public | BlueprintCallable)
};

