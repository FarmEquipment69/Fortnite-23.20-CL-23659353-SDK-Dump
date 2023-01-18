// Class /Script/FortniteUI.FortBattlePassRewardEntry
// Size: 0x1460
class UFortBattlePassRewardEntry : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UCommonTextBlock* TextSocialUserName; // 0x1438 (0x8)
	unsigned char padding_1440[0x20]; // 0x1440 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.SetSocialPlayerProgress (Has no native function)
	void SetSocialPlayerProgress(float& Progress); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.OnSetRotatingReward (Has no native function)
	void OnSetRotatingReward(class UFortItem*& InReward, bool& bHasAdditionalStylesToDisplay, struct TWeakObjectPtr<class UTexture2D>& RewardTexture, bool& bIsFreeItem, bool& bOwnsBattlePass, int& SeasonLevel); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.OnSetReward (Has no native function)
	void OnSetReward(class UFortItem*& InReward, int& TierLevel, float& TierProgress, bool& bIsLastEntry, bool& bHasAdditionalStylesToDisplay, struct TWeakObjectPtr<class UTexture2D>& RewardTexture, bool& bIsFreeItem, bool& bOwnsBattlePass, int& SeasonLevel, bool& bIsFirstEntry); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.OnRotateReward (Has no native function)
	void OnRotateReward(int& Index); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.OnLoadSocialIcon (Has no native function)
	void OnLoadSocialIcon(bool& bSuccess, class UTexture2D*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.OnFadeOutSocialUserComplete (Underlying native function: OnFadeOutSocialUserComplete 0xa8aa7c8)
	void OnFadeOutSocialUserComplete(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.FadeOutSocialUser (Has no native function)
	void FadeOutSocialUser(bool& bCallback); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortBattlePassRewardEntry.FadeInSocialUser (Has no native function)
	void FadeInSocialUser(); // (Event | Protected | BlueprintEvent)
};

