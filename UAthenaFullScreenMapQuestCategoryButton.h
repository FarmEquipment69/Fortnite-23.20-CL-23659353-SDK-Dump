// Class /Script/FortniteUI.AthenaFullScreenMapQuestCategoryButton
// Size: 0x1420
class UAthenaFullScreenMapQuestCategoryButton : public UCommonButtonBase
{
	unsigned char unreflected_13e0[0x18]; // 0x13e0 (0x18) 
	class UAthenaChallengeDateTimeTextBlock* DateTimeTextTimeRemaining; // 0x13f8 (0x8)
	class UCommonTextBlock* TextTimeCustom; // 0x1400 (0x8)
	class UCommonTextBlock* TextDebugCategoryName; // 0x1408 (0x8)
	class UWidgetSwitcher* SwitcherTimerOrDisabled; // 0x1410 (0x8)
	class UFortLazyImage* LazyImageIcon; // 0x1418 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaFullScreenMapQuestCategoryButton.ShowNewBang (Has no native function)
	void ShowNewBang(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenMapQuestCategoryButton.OnFocusSetToQuests (Has no native function)
	void OnFocusSetToQuests(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenMapQuestCategoryButton.OnFocusReceivedFromQuests (Has no native function)
	void OnFocusReceivedFromQuests(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenMapQuestCategoryButton.BP_Populate (Has no native function)
	void BPPopulate(struct FText& Title, struct FText& SubText, enum EQuestCategoryButtonTimerState& TimerState, struct FQuestCategoryButtonOverrides& ButtonOverrides); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaFullScreenMapQuestCategoryButton.BP_OnTimerSet (Has no native function)
	void BPOnTimerSet(enum EAthenaChallengeTimerState& TimerState); // (Event | Protected | BlueprintEvent)
};

