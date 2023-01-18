// Class /Script/CommonUI.CommonLazyWidget
// Size: 0x290
class UCommonLazyWidget : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FSlateBrush LoadingBackgroundBrush; // 0x150 (0xc0)
	class UUserWidget* Content; // 0x210 (0x8)
	unsigned char unreflected_218[0x28]; // 0x218 (0x28) 
	struct FMulticastInlineDelegate BPOnLoadingStateChanged; // 0x240 (0x10)
	unsigned char padding_250[0x40]; // 0x250 (0x40)

	/* Functions */

	// Function /Script/CommonUI.CommonLazyWidget.SetLazyContent (Underlying native function: SetLazyContent 0x6a4dca0)
	void SetLazyContent(struct TWeakObjectPtr<class UClass>& SoftWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonLazyWidget.IsLoading (Underlying native function: IsLoading 0x6a4c52c)
	bool IsLoading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonLazyWidget.GetContent (Underlying native function: GetContent 0x6a4ae7c)
	class UUserWidget* GetContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

