// Class /Script/FortniteUI.FortAthenaTutorialHUD
// Size: 0x448
class UFortAthenaTutorialHUD : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	struct TArray<struct FGameplayTag> HighlightTagArray; // 0x3c0 (0x10)
	unsigned char unreflected_3d0[0x18]; // 0x3d0 (0x18) 
	class AFortAthenaTutorialManager* TutorialManager; // 0x3e8 (0x8)
	class AActor* CurrentTrackedActor; // 0x3f0 (0x8)
	unsigned char unreflected_3f8[0x8]; // 0x3f8 (0x8) 
	class UOverlay* OverlayTutorialScreen; // 0x400 (0x8)
	class UCommonButtonLegacy* AthenaTutorialSkipMobile; // 0x408 (0x8)
	class UFortAthenaTutorialTargetCounter* AthenaTutorialTargetCounter; // 0x410 (0x8)
	class UFortAthenaTutorialProgressBar* AthenaTutorialProgressBar; // 0x418 (0x8)
	class UFortAthenaTutorialScreen* AthenaTutorialModalPopup; // 0x420 (0x8)
	class UFortAthenaTutorialTextPrompt* TextPromptTutorial; // 0x428 (0x8)
	class UOverlay* OverlayFinger; // 0x430 (0x8)
	class UOverlay* OverlayGradient; // 0x438 (0x8)
	class UUserWidget* WidgetEasyInteractFinger; // 0x440 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaTutorialHUD.PlayFingerPointingAnimation (Has no native function)
	void PlayFingerPointingAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialHUD.DragToTurnEnabled (Has no native function)
	void DragToTurnEnabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialHUD.CompletedEnabled (Has no native function)
	void CompletedEnabled(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialHUD.BroadcastSkipMenuOpened (Underlying native function: BroadcastSkipMenuOpened 0xa9538c8)
	void BroadcastSkipMenuOpened(); // (Final | Native | Public | BlueprintCallable)
};

