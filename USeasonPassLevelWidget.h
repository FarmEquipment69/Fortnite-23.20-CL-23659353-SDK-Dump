// Class /Script/FortniteUI.SeasonPassLevelWidget
// Size: 0x2a8
class USeasonPassLevelWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UFortSeasonPassLevelInfo* LevelInfo; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.SeasonPassLevelWidget.PlayIntro (Has no native function)
	void PlayIntro(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.SeasonPassLevelWidget.OnSetup (Has no native function)
	void OnSetup(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SeasonPassLevelWidget.OnNavigateTo (Has no native function)
	void OnNavigateTo(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SeasonPassLevelWidget.OnLockedStatusChanged (Has no native function)
	void OnLockedStatusChanged(bool& FreeUnlocked, bool& PaidUnlocked); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SeasonPassLevelWidget.OnAttemptClaimFinished (Has no native function)
	void OnAttemptClaimFinished(bool& FreeClaimed, bool& PaidClaimed); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.SeasonPassLevelWidget.GetLevelInfo (Underlying native function: GetLevelInfo 0x27fec44)
	class UFortSeasonPassLevelInfo* GetLevelInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.SeasonPassLevelWidget.AttemptClaim (Underlying native function: AttemptClaim 0xa8a9920)
	void AttemptClaim(); // (Final | Native | Public | BlueprintCallable)
};

