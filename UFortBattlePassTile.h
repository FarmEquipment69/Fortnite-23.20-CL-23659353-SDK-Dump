// Class /Script/BattlePassBase.FortBattlePassTile
// Size: 0x15c0
class UFortBattlePassTile : public UFortBattlePassTileBase
{
	unsigned char unreflected_1540[0x18]; // 0x1540 (0x18) 
	class UFortLazyImage* ImageRewardItem; // 0x1558 (0x8)
	class UImage* ImageCurrency; // 0x1560 (0x8)
	bool bIsOnBulkBuyMode; // 0x1568 (0x1)
	unsigned char padding_1569[0x57]; // 0x1569 (0x57)

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnpreviewed (Has no native function)
	void OnUnpreviewed(); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnhighlighted (Has no native function)
	void OnUnhighlighted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnTilePreviewCycled (Has no native function)
	void OnTilePreviewCycled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetTrack (Has no native function)
	void OnSetTrack(bool& bIsFreeTrack, bool& bOwnsBattlePass); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice (Has no native function)
	void OnSetCurrencyAndPrice(enum EBattlePassCurrencyType& Currency, int& Price); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnPreviewed (Has no native function)
	void OnPreviewed(); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedStateUpdated (Has no native function)
	void OnLockedStateUpdated(bool& OwnsBattlePass, bool& ParentUnlocked, bool& HasRemainingPrerequisites, bool& bIsDelayed); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated (Has no native function)
	void OnLockedProgressUpdated(float& Progress, int& CurrentlyOwnedRewards, int& NeededRewards); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnHighlighted (Has no native function)
	void OnHighlighted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.OnAffordabilityChanged (Has no native function)
	void OnAffordabilityChanged(bool& bHasEnougCurrency); // (Event | Protected | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassTile.IsAffordable (Underlying native function: IsAffordable 0x7270c1c)
	bool IsAffordable(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/BattlePassBase.FortBattlePassTile.HasPrerequisites (Underlying native function: HasPrerequisites 0x7270bf8)
	bool HasPrerequisites(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

