// Class /Script/EpicCMSUIFramework.EpicCMSTileCarousel
// Size: 0x2b8
class UEpicCMSTileCarousel : public UUserWidget
{
	struct FSlateSound PreviousButtonSound; // 0x268 (0x18)
	struct FSlateSound NextButtonSound; // 0x280 (0x18)
	class UCommonWidgetCarousel* Carousel; // 0x298 (0x8)
	class UWidget* NextPageButton; // 0x2a0 (0x8)
	class UWidget* PreviousPageButton; // 0x2a8 (0x8)
	bool bShouldShowNavigationOnlyOnHover; // 0x2b0 (0x1)
	bool bInputActionsForPaging; // 0x2b1 (0x1)
	bool bIsShowingNavigation; // 0x2b2 (0x1)
	unsigned char padding_2b3[0x5]; // 0x2b3 (0x5)

	/* Functions */

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.SetCurrentPageByIndex (Underlying native function: SetCurrentPageByIndex 0x73d62d4)
	void SetCurrentPageByIndex(int& PageIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.PreviousPage (Underlying native function: PreviousPage 0x73d62c0)
	void PreviousPage(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NextPage (Underlying native function: NextPage 0x73d62ac)
	void NextPage(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.NavigationVisibilityChanged (Has no native function)
	void NavigationVisibilityChanged(bool& bShowNavigation); // (Event | Protected | BlueprintEvent)

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.HandleTilePageAdded (Underlying native function: HandleTilePageAdded 0x735cf90)
	void HandleTilePageAdded(class UWidget*& TileWidget); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.GetCurrentPageIndex (Underlying native function: GetCurrentPageIndex 0x73d6270)
	int GetCurrentPageIndex(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.BeginAutoScrolling (Underlying native function: BeginAutoScrolling 0x73d623c)
	void BeginAutoScrolling(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/EpicCMSUIFramework.EpicCMSTileCarousel.AddTilePage (Underlying native function: AddTilePage 0x73d60ec)
	void AddTilePage(class UWidget*& TilePageWidget); // (Final | Native | Public | BlueprintCallable)
};

