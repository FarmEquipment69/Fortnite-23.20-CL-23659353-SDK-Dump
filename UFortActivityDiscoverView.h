// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
// Size: 0x6c0
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{
	bool bPlayDetailsAnimationOnScreenOpen; // 0x620 (0x1)
	unsigned char unreflected_621[0x3]; // 0x621 (0x3) 
	float DetailsDisplayUpdateDelay; // 0x624 (0x4)
	class UClass* MovieWidgetClass; // 0x628 (0x8)
	class UFortActivityDetailsDisplay* DetailsDisplaySelectedActivity; // 0x630 (0x8)
	class UFortActivityDetailsDisplay* DetailsDisplayPromotedActivity; // 0x638 (0x8)
	class UPanelWidget* PanelVideoSlot; // 0x640 (0x8)
	class UPanelWidget* PanelPromotedVideoSlot; // 0x648 (0x8)
	class UFortActivatableMovieWidget* ActivityMovieWidget; // 0x650 (0x8)
	class UFortActivatableMovieWidget* PromotedActivityMovieWidget; // 0x658 (0x8)
	unsigned char unreflected_660[0x48]; // 0x660 (0x48) 
	class UWidgetAnimation* BoundKeyArtOutroAnimation; // 0x6a8 (0x8)
	unsigned char padding_6b0[0x10]; // 0x6b0 (0x10)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay (Has no native function)
	void OnUpdateDetailsDisplay(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro (Has no native function)
	void OnPlayKeyArtOutro(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro (Has no native function)
	void OnPlayKeyArtIntro(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent (Has no native function)
	void OnMoviePreEndEvent(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged (Has no native function)
	void OnMoviePlayingChanged(bool& bIsPlaying); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent (Underlying native function: IsShowingSeasonalContent 0x7421494)
	bool IsShowingSeasonalContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent (Underlying native function: IsShowingPromotedContent 0x74213d8)
	bool IsShowingPromotedContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState (Underlying native function: IsInOutroState 0x742138c)
	bool IsInOutroState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading (Underlying native function: IsImageLoading 0x742135c)
	bool IsImageLoading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted (Underlying native function: HandleMovieWidgetMediaStarted 0x74210a4)
	void HandleMovieWidgetMediaStarted(); // (Final | Native | Private)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent (Underlying native function: HandleMovieWidgetMediaPreEndEvent 0x742105c)
	void HandleMovieWidgetMediaPreEndEvent(); // (Final | Native | Private)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget (Underlying native function: GetPromotedMovieWidget 0x7420f64)
	class UFortActivatableMovieWidget* GetPromotedMovieWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget (Underlying native function: GetMovieWidget 0x7420f4c)
	class UFortActivatableMovieWidget* GetMovieWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation (Underlying native function: GetKeyArtOutroAnimation 0x7420f24)
	class UWidgetAnimation* GetKeyArtOutroAnimation(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture (Underlying native function: GetCurrentTexture 0x7420dc4)
	class UTexture* GetCurrentTexture(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay (Underlying native function: CheckUpdateDetailsDelay 0x7420ce0)
	void CheckUpdateDetailsDelay(); // (Final | Native | Private)
};

