// Class /Script/FortniteUI.FortAthenaTutorialScreen
// Size: 0x340
class UFortAthenaTutorialScreen : public UUserWidget
{
	bool bLimitedDisplayDuration; // 0x268 (0x1)
	unsigned char unreflected_269[0x3]; // 0x269 (0x3) 
	float DisplayDuration; // 0x26c (0x4)
	struct TArray<struct FName> InputActionNameArray; // 0x270 (0x10)
	struct TArray<struct FName> GamepadInputActionNameArray; // 0x280 (0x10)
	struct FDataTableRowHandle DataTableRow; // 0x290 (0x10)
	unsigned char unreflected_2a0[0x78]; // 0x2a0 (0x78) 
	class UFortAthenaTutorialBaseInteraction* InteractionTutorialStep; // 0x318 (0x8)
	class UFortAthenaTutorialBaseInteraction* InteractionRegularTutorialStep; // 0x320 (0x8)
	class UUserWidget* MoveableHighlight; // 0x328 (0x8)
	class UUserWidget* MoveableHighlightRegular; // 0x330 (0x8)
	class UCommonWidgetSwitcherLegacy* Switcher; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaTutorialScreen.UpdateInputDisplay (Has no native function)
	void UpdateInputDisplay(enum ECommonInputType& CurrentInputType); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialScreen.SkipGuidedTutorial (Underlying native function: SkipGuidedTutorial 0xa6b44e4)
	void SkipGuidedTutorial(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaTutorialScreen.SetupInputActionNames (Has no native function)
	void SetupInputActionNames(struct TArray<struct FName>& Names); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialScreen.OnTutorialProgressUpdated (Has no native function)
	void OnTutorialProgressUpdated(int& CurrentPhase); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaTutorialScreen.BroadcastTutorialPopupCanceled (Underlying native function: BroadcastTutorialPopupCanceled 0xa9538e4)
	void BroadcastTutorialPopupCanceled(); // (Final | Native | Public | BlueprintCallable)
};

