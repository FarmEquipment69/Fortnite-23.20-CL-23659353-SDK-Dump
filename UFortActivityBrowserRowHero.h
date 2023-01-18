// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero
// Size: 0x3b0
class UFortActivityBrowserRowHero : public UFortActivityBrowserRow
{
	class UFortActivityListView* ListViewActivities; // 0x330 (0x8)
	class UFortSwipePanel* SwipePanelNavigation; // 0x338 (0x8)
	unsigned char unreflected_340[0x3]; // 0x340 (0x3) 
	bool bPlayDetailsAnimationOnScreenOpen; // 0x343 (0x1)
	float DetailsDisplayUpdateDelay; // 0x344 (0x4)
	class UFortActivityDetailsDisplay* DetailsDisplaySelectedActivity; // 0x348 (0x8)
	class UFortActivityVideoCycle* ActivityVideoCycleWidget; // 0x350 (0x8)
	unsigned char unreflected_358[0x20]; // 0x358 (0x20) 
	class UWidgetAnimation* BoundKeyArtOutroAnimation; // 0x378 (0x8)
	unsigned char unreflected_380[0x2]; // 0x380 (0x2) 
	bool bShouldAutoCycle; // 0x382 (0x1)
	unsigned char padding_383[0x2d]; // 0x383 (0x2d)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted (Has no native function)
	void OnVideoStarted(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached (Has no native function)
	void OnVideoEndReached(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay (Has no native function)
	void OnUpdateDetailsDisplay(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged (Has no native function)
	void OnRowHeroFocusChanged(bool& bHasFocus); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged (Has no native function)
	void OnQueryStatusChanged(bool& bIsActive); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished (Has no native function)
	void OnQueryActivitiesFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro (Has no native function)
	void OnPlayKeyArtOutro(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro (Has no native function)
	void OnPlayKeyArtIntro(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries (Has no native function)
	void OnListViewFinishedAddingEntries(int& ActivityCount); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated (Has no native function)
	void OnActivityUpdated(); // (Event | Public | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent (Underlying native function: IsShowingSeasonalContent 0x7421404)
	bool IsShowingSeasonalContent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState (Underlying native function: IsInOutroState 0x7421374)
	bool IsInOutroState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading (Underlying native function: IsImageLoading 0x6ae461c)
	bool IsImageLoading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted (Underlying native function: HandleActivityVideoCycleStarted 0x7421014)
	void HandleActivityVideoCycleStarted(); // (Final | Native | Private)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached (Underlying native function: HandleActivityVideoCycleEndReached 0x7420fcc)
	void HandleActivityVideoCycleEndReached(); // (Final | Native | Private)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation (Underlying native function: GetKeyArtOutroAnimation 0x7420efc)
	class UWidgetAnimation* GetKeyArtOutroAnimation(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture (Underlying native function: GetCurrentTexture 0x7420d9c)
	class UTexture* GetCurrentTexture(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity (Underlying native function: CycleNextActivity 0x7420cf4)
	void CycleNextActivity(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay (Underlying native function: CheckUpdateDetailsDelay 0x7420ccc)
	void CheckUpdateDetailsDelay(); // (Final | Native | Private)
};

