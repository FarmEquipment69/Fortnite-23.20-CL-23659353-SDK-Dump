// Class /Script/BattlePassBase.FortBattlePassRewardGridHeader
// Size: 0x270
class UFortBattlePassRewardGridHeader : public UUserWidget
{
	unsigned char unreflected_270[0x270]; 

	/* Functions */

	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageType (Has no native function)
	void OnSetPageType(enum ERewardPageType& PageType); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnSetPageCustomName (Has no native function)
	void OnSetPageCustomName(struct FText& CustomName); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageUnlocked (Has no native function)
	void OnPageUnlocked(int& PurchasedRewards, int& TotalRewards); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageNumberSet (Has no native function)
	void OnPageNumberSet(int& InPageNumber); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnPageLocked (Has no native function)
	void OnPageLocked(int& RequiredLevel, int& RequiredRewards, bool& IsTimeLocked, struct FTimespan*& TimeRemaining); // (Event | Public | HasDefaults | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.OnBattlePassLevelSet (Has no native function)
	void OnBattlePassLevelSet(int& BattlePassLevel); // (Event | Public | BlueprintEvent)

	// Function /Script/BattlePassBase.FortBattlePassRewardGridHeader.GetPageNumber (Underlying native function: GetPageNumber 0x72706a0)
	int GetPageNumber(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

