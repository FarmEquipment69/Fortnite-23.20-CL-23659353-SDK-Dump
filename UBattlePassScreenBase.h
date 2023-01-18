// Class /Script/FortniteUI.BattlePassScreenBase
// Size: 0x840
class UBattlePassScreenBase : public UFortItemPreviewScreen
{
	float BackgroundTransitionTimerDelay; // 0x668 (0x4)
	unsigned char unreflected_66c[0x4]; // 0x66c (0x4) 
	struct FDataTableRowHandle RefundGiftToken; // 0x670 (0x10)
	unsigned char unreflected_680[0x8]; // 0x680 (0x8) 
	struct TWeakObjectPtr<class UClass> SeasonLevelPurchaseScreenClass; // 0x688 (0x28)
	struct TWeakObjectPtr<class UClass> SeasonAboutScreenClass; // 0x6b0 (0x28)
	struct FGameplayTagContainer WrapPreviewExcludedTags; // 0x6d8 (0x20)
	enum EBattlePassView CurrentView; // 0x6f8 (0x1)
	unsigned char unreflected_6f9[0x7]; // 0x6f9 (0x7) 
	class UAthenaSeasonItemDefinition* SeasonData; // 0x700 (0x8)
	class AFortItemPreviewWorld* CachedVaultWorld; // 0x708 (0x8)
	class UFortAccountItemDefinition* LastViewedItem; // 0x710 (0x8)
	unsigned char unreflected_718[0xd5]; // 0x718 (0xd5) 
	bool bShouldShowAboutModalInNewSeason; // 0x7ed (0x1)
	unsigned char unreflected_7ee[0x1a]; // 0x7ee (0x1a) 
	struct TWeakObjectPtr<class UClass> SeasonMovieWidgetClass; // 0x808 (0x28)
	class UFortStreamMediaSource* VideoStreamSource; // 0x830 (0x8)
	class UCommonTextBlock* TextDebugPreviewDetails; // 0x838 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassScreenBase.ShouldPlayBPVideo (Underlying native function: ShouldPlayBPVideo 0x7298eb8)
	bool ShouldPlayBPVideo(bool& bAllowUpdate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnViewReward (Has no native function)
	void OnViewReward(struct FFortRarityItemData& Rarity, bool& bNoReward, class UFortItemDefinition*& RewardItem); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnVariantUpdate (Has no native function)
	void OnVariantUpdate(int& CurrentIndex, int& TotalNumVariants); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnSetPurchasedAnnualPass (Has no native function)
	void OnSetPurchasedAnnualPass(bool& bIsPurchased); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnSetDifferentBPText (Has no native function)
	void OnSetDifferentBPText(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnRequestViewRewardComplete (Has no native function)
	void OnRequestViewRewardComplete(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnRequestViewReward (Has no native function)
	void OnRequestViewReward(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnNoCurrentSeason (Has no native function)
	void OnNoCurrentSeason(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.OnBattlePassViewChanged (Has no native function)
	void OnBattlePassViewChanged(enum EBattlePassView& NewView); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassScreenBase.GetNumberOfRewardsToPurchase (Underlying native function: GetNumberOfRewardsToPurchase 0xa8a9fbc)
	int GetNumberOfRewardsToPurchase(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)
};

