// Class /Script/FortniteUI.AthenaChallengeRecapEntry
// Size: 0x2f0
class UAthenaChallengeRecapEntry : public UCommonUserWidget
{
	unsigned char unreflected_290[0x48]; // 0x290 (0x48) 
	class UCommonTextBlock* TextQuestObjective; // 0x2d8 (0x8)
	class UCommonTextBlock* TextCompletionCount; // 0x2e0 (0x8)
	class UWidgetSwitcher* SwitcherProgression; // 0x2e8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaChallengeRecapEntry.UpdateProgressBar (Has no native function)
	void UpdateProgressBar(float& StartingPercent, float& EndingPercent); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRecapEntry.StartOutroAnim (Has no native function)
	void StartOutroAnim(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRecapEntry.StartIntroAnim (Has no native function)
	void StartIntroAnim(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaChallengeRecapEntry.OutroFinished (Underlying native function: OutroFinished 0xa4e28dc)
	void OutroFinished(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaChallengeRecapEntry.IntroFinished (Underlying native function: IntroFinished 0xa4e2320)
	void IntroFinished(); // (Final | Native | Public | BlueprintCallable)
};

