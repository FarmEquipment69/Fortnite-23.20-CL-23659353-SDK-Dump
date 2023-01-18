// Class /Script/FortniteUI.FortSidebarOnboardTooltipWidget
// Size: 0x408
class UFortSidebarOnboardTooltipWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonButtonLegacy* DismissButton; // 0x3b0 (0x8)
	class UCommonButtonLegacy* OtherActionButton; // 0x3b8 (0x8)
	int SecondsBeforeClosing; // 0x3c0 (0x4)
	enum ESocialTutorialType SocialTutorial; // 0x3c4 (0x1)
	unsigned char unreflected_3c5[0x3]; // 0x3c5 (0x3) 
	struct FGameplayTag OnboardingSeenId; // 0x3c8 (0x4)
	unsigned char unreflected_3cc[0x4]; // 0x3cc (0x4) 
	struct FVector2D PositionController; // 0x3d0 (0x10)
	struct FVector2D PositionKeyboardMouse; // 0x3e0 (0x10)
	unsigned char padding_3f0[0x18]; // 0x3f0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarOnboardTooltipWidget.OnShowTooltip (Has no native function)
	void OnShowTooltip(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSidebarOnboardTooltipWidget.OnEndTooltip (Has no native function)
	void OnEndTooltip(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSidebarOnboardTooltipWidget.NotifyCloseAnimationFinished (Underlying native function: NotifyCloseAnimationFinished 0x2fb61ec)
	void NotifyCloseAnimationFinished(); // (Final | Native | Protected | BlueprintCallable)
};

