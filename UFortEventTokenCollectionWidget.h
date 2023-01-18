// Class /Script/EventScreenBase.FortEventTokenCollectionWidget
// Size: 0x2d8
class UFortEventTokenCollectionWidget : public UUserWidget
{
	class UCommonLazyImage* LazyImageGhostIcon; // 0x268 (0x8)
	class UCommonLazyImage* LazyImageCompletedIcon; // 0x270 (0x8)
	class UImage* ImageGlow; // 0x278 (0x8)
	struct TWeakObjectPtr<class UTexture2D> FallbackBrush; // 0x280 (0x28)
	struct TWeakObjectPtr<class UFortTokenType> TokenDefinition; // 0x2a8 (0x28)
	unsigned char padding_2d0[0x8]; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon (Has no native function)
	void OnRefreshIcon(bool& IsCollected); // (Event | Protected | BlueprintEvent)
};

