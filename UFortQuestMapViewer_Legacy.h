// Class /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy
// Size: 0x310
class UFortQuestMapViewer_Legacy : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UCommonButtonLegacy* ButtonPageRight; // 0x2a0 (0x8)
	class UCommonButtonLegacy* ButtonPageLeft; // 0x2a8 (0x8)
	class UCommonTextBlock* TextTitle; // 0x2b0 (0x8)
	class UCommonTextBlock* TextPage; // 0x2b8 (0x8)
	class USizeBox* SizeBoxViewer; // 0x2c0 (0x8)
	class UCanvasPanel* CanvasPanelCosmetic; // 0x2c8 (0x8)
	class UFortQuestMapScreen_Legacy* ParentScreen; // 0x2d0 (0x8)
	class UFortQuestMapNodeLayout_Legacy* NodeLayout; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x30]; // 0x2e0 (0x30)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.UpdateViewerData (Underlying native function: UpdateViewerData 0x75c3be0)
	void UpdateViewerData(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnTryUpdateUserWidgetColor (Has no native function)
	void OnTryUpdateUserWidgetColor(class UUserWidget*& Widget, struct FSlateColor& OverrideColor); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutOutroAnimation (Has no native function)
	void OnPlayLayoutOutroAnimation(enum EViewerNavigationDirection& TravelDirection); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutFadeInAnimation (Has no native function)
	void OnPlayLayoutFadeInAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.HandleLayoutOutroAnimationFinished (Underlying native function: HandleLayoutOutroAnimationFinished 0x75bfc84)
	void HandleLayoutOutroAnimationFinished(); // (Final | Native | Public | BlueprintCallable)
};

