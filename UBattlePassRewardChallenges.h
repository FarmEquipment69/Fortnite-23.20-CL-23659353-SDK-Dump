// Class /Script/FortniteUI.BattlePassRewardChallenges
// Size: 0x350
class UBattlePassRewardChallenges : public UCommonUserWidget
{
	struct FText BuyBattlePassText; // 0x290 (0x18)
	struct FText DefaultChallengesTitle; // 0x2a8 (0x18)
	struct FText UnlocksInXDaysTextFormat; // 0x2c0 (0x18)
	struct FText UnlocksInXHoursTextFormat; // 0x2d8 (0x18)
	struct FText UnlocksSoonText; // 0x2f0 (0x18)
	struct FText HiddenChallengeText; // 0x308 (0x18)
	unsigned char unreflected_320[0x8]; // 0x320 (0x8) 
	class UCommonTextBlock* TextPrerequisitesTitle; // 0x328 (0x8)
	class UCommonTextBlock* TextChallengesTitle; // 0x330 (0x8)
	class UDynamicEntryBox* EntryBoxPrerequisites; // 0x338 (0x8)
	class UDynamicEntryBox* EntryBoxChallenges; // 0x340 (0x8)
	class UCommonTextBlock* TextUnlocksIn; // 0x348 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassRewardChallenges.OnSetChallengesSwitcher (Has no native function)
	void OnSetChallengesSwitcher(bool& bShowChallenges); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassRewardChallenges.OnInitPrerequisites (Has no native function)
	void OnInitPrerequisites(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassRewardChallenges.OnInitChallenges (Has no native function)
	void OnInitChallenges(struct FText& ChallengesTitle); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassRewardChallenges.OnClearEntries (Has no native function)
	void OnClearEntries(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassRewardChallenges.OnAllChalengesCompleted (Has no native function)
	void OnAllChalengesCompleted(); // (Event | Protected | BlueprintEvent)
};

