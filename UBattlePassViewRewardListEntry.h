// Class /Script/FortniteUI.BattlePassViewRewardListEntry
// Size: 0x2b0
class UBattlePassViewRewardListEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	class UBattlePassViewRewardData* Reward; // 0x298 (0x8)
	class UCommonTextBlock* TextTierLevel; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x8]; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BattlePassViewRewardListEntry.OnStaggerTimeStarted (Has no native function)
	void OnStaggerTimeStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassViewRewardListEntry.OnStaggerTimeElapsed (Has no native function)
	void OnStaggerTimeElapsed(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.BattlePassViewRewardListEntry.BPSetup (Has no native function)
	void BPSetup(class UBattlePassViewRewardData*& InReward); // (Event | Protected | BlueprintEvent)
};

