// Class /Script/FortniteUI.FortAthenaTutorialTextPrompt
// Size: 0x430
class UFortAthenaTutorialTextPrompt : public UUserWidget
{
	struct FText TextToDisplay; // 0x268 (0x18)
	struct FText GamepadTextToDisplay; // 0x280 (0x18)
	unsigned char unreflected_298[0x100]; // 0x298 (0x100) 
	struct TArray<class UFortKeybindWidget*> ArrayFortKeybindWidget; // 0x398 (0x10)
	unsigned char unreflected_3a8[0x18]; // 0x3a8 (0x18) 
	class URichTextBlock* RichTextTopPrompt; // 0x3c0 (0x8)
	class URichTextBlock* RichTextBottomPrompt; // 0x3c8 (0x8)
	class URichTextBlock* RichTextExtraInputPrompt; // 0x3d0 (0x8)
	class UCommonActionWidget* ActionWidgetInputFeedback; // 0x3d8 (0x8)
	class UFortKeybindWidget* ActionKeybindWidget; // 0x3e0 (0x8)
	class UFortKeybindWidget* ActionKeybindWidget1; // 0x3e8 (0x8)
	class UFortKeybindWidget* ActionKeybindWidget2; // 0x3f0 (0x8)
	class UFortKeybindWidget* ActionKeybindWidget3; // 0x3f8 (0x8)
	class UFortKeybindWidget* ActionKeybindWidget4; // 0x400 (0x8)
	class UUserWidget* TutorialNextButtonInput; // 0x408 (0x8)
	class UOverlay* OverlayAllWidgets; // 0x410 (0x8)
	class UOverlay* OverlayActionWidgets; // 0x418 (0x8)
	class UOverlay* OverlayKeybindWidgets; // 0x420 (0x8)
	class UOverlay* OverlayExtraText; // 0x428 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaTutorialTextPrompt.NextButtonPressed (Underlying native function: NextButtonPressed 0xa9538c8)
	void NextButtonPressed(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaTutorialTextPrompt.DisplayTarget (Underlying native function: DisplayTarget 0x756d618)
	void DisplayTarget(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialTextPrompt.DisplayNextButton (Underlying native function: DisplayNextButton 0x756d600)
	void DisplayNextButton(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialTextPrompt.ActivateTextPrompt (Underlying native function: ActivateTextPrompt 0x7570aa8)
	void ActivateTextPrompt(); // (Native | Event | Protected | BlueprintEvent)
};

