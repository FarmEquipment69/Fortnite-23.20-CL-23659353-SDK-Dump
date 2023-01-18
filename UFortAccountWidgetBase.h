// Class /Script/FortniteUI.FortAccountWidgetBase
// Size: 0x2c8
class UFortAccountWidgetBase : public UCommonUserWidget
{
	unsigned char unreflected_2c8[0x2c8]; 

	/* Functions */

	// Function /Script/FortniteUI.FortAccountWidgetBase.OnAccountInfoChanged (Has no native function)
	void OnAccountInfoChanged(struct FFortPublicAccountInfo& Result); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAccountWidgetBase.HandleCurrentlyViewedAccountInfoChanged (Underlying native function: HandleCurrentlyViewedAccountInfoChanged 0x2554c24)
	void HandleCurrentlyViewedAccountInfoChanged(struct FFortPublicAccountInfo& NewInfo); // (Native | Protected)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetSeasonBannerInfo (Underlying native function: GetSeasonBannerInfo 0xa73c834)
	struct FAthenaSeasonBannerLevel GetSeasonBannerInfo(int& Level); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetNextSeasonReward (Underlying native function: GetNextSeasonReward 0xa73c628)
	bool GetNextSeasonReward(struct FFortItemQuantityPair& Reward, int& RewardLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetNextSeasonChaseReward (Underlying native function: GetNextSeasonChaseReward 0xa73c4f4)
	bool GetNextSeasonChaseReward(struct FFortItemQuantityPair& Reward, int& RewardLevel, int& StartingLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetCurrentSeasonNumberAsText (Underlying native function: GetCurrentSeasonNumberAsText 0x1c2b90c)
	struct FText GetCurrentSeasonNumberAsText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAccountWidgetBase.GetCurrentChapterAsText (Underlying native function: GetCurrentChapterAsText 0x1c2b834)
	struct FText GetCurrentChapterAsText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

