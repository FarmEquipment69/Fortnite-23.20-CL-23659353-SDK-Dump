// Class /Script/SaveTheWorldUI.FortFeatureUnlockWidget
// Size: 0x550
class UFortFeatureUnlockWidget : public UFortActivatablePanel
{
	class UCommonWidgetSwitcherLegacy* MediaSwitcher; // 0x518 (0x8)
	class UWidget* VideoContent; // 0x520 (0x8)
	class UWidget* ImageContent; // 0x528 (0x8)
	class UFortVideoPlayerWidget* VideoWidget; // 0x530 (0x8)
	class UCommonLazyImage* ImageWidget; // 0x538 (0x8)
	unsigned char padding_540[0x10]; // 0x540 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.SetData (Underlying native function: SetData 0x75736f8)
	void SetData(struct FString& ItemTemplateID); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.RefreshDataBP (Has no native function)
	void RefreshDataBP(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetVideo (Underlying native function: GetVideo 0x756ea38)
	class UMediaSource* GetVideo(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetTitle (Underlying native function: GetTitle 0x756e398)
	struct FText GetTitle(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetSmallIcon (Underlying native function: GetSmallIcon 0x756e210)
	struct TWeakObjectPtr<class UTexture2D> GetSmallIcon(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetLargeIcon (Underlying native function: GetLargeIcon 0x756dd54)
	struct TWeakObjectPtr<class UTexture2D> GetLargeIcon(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetDescription (Underlying native function: GetDescription 0x756d8f8)
	struct FText GetDescription(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

