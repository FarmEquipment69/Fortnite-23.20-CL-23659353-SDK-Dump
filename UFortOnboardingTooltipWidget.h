// Class /Script/FortniteUI.FortOnboardingTooltipWidget
// Size: 0x3e0
class UFortOnboardingTooltipWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonButtonBase* DismissButton; // 0x3b0 (0x8)
	struct FGameplayTag OnboardingTutorialId; // 0x3b8 (0x4)
	bool bDesignTimeShowTutorialDurationSeconds; // 0x3bc (0x1)
	unsigned char unreflected_3bd[0x3]; // 0x3bd (0x3) 
	int TutorialDurationSeconds; // 0x3c0 (0x4)
	unsigned char padding_3c4[0x1c]; // 0x3c4 (0x1c)

	/* Functions */

	// Function /Script/FortniteUI.FortOnboardingTooltipWidget.OnShowTooltip (Has no native function)
	void OnShowTooltip(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortOnboardingTooltipWidget.OnEndTooltip (Has no native function)
	void OnEndTooltip(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortOnboardingTooltipWidget.NotifyCloseAnimationFinished (Underlying native function: NotifyCloseAnimationFinished 0x6a4bfbc)
	void NotifyCloseAnimationFinished(); // (Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortOnboardingTooltipWidget.GetSecondsBeforeClosing (Underlying native function: GetSecondsBeforeClosing 0xa73c8e8)
	int GetSecondsBeforeClosing(); // (Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

