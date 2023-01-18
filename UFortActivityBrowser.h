// Class /Script/DiscoveryBrowserUI.FortActivityBrowser
// Size: 0x638
class UFortActivityBrowser : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonActivatableWidgetSwitcher* SwitcherTabActivityBrowserViews; // 0x3b0 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x3b8 (0x8)
	class UCommonButtonBase* ButtonShowCustomMatchmakingModal; // 0x3c0 (0x8)
	class UCommonButtonBase* ButtonBackToTop; // 0x3c8 (0x8)
	class UCommonButtonBase* ButtonMobileShowGameDetails; // 0x3d0 (0x8)
	class UCommonButtonBase* ButtonMobileAccept; // 0x3d8 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x3e0 (0x8)
	class UCommonButtonBase* ButtonJoinAsSpectator; // 0x3e8 (0x8)
	class UCommonButtonBase* ButtonShowSpectateMatchModal; // 0x3f0 (0x8)
	class UFortTabListWidgetBase_Legacy* TabListBrowserTabs; // 0x3f8 (0x8)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x400 (0x3)
	unsigned char unreflected_403[0x5]; // 0x403 (0x5) 
	class UClass* TabButtonClass; // 0x408 (0x8)
	class UClass* ActivityDetailsModalClass; // 0x410 (0x8)
	class UClass* ActivityModeSetSelectionModalClass; // 0x418 (0x8)
	class UClass* ActivityModeSetFirstTimeNotificationModalClass; // 0x420 (0x8)
	class UClass* CreatorPageViewClass; // 0x428 (0x8)
	class UClass* CategoryPageViewClass; // 0x430 (0x8)
	struct TWeakObjectPtr<class UClass> SoftCustomMatchmakingModalClass; // 0x438 (0x28)
	struct TWeakObjectPtr<class UClass> SoftSpectateMatchModalClass; // 0x460 (0x28)
	class UClass* CampaignPurchaseScreenClass; // 0x488 (0x8)
	struct TMap<struct FName, class UFortActivityBrowserColorSchemeAsset*> ColorSchemes; // 0x490 (0x50)
	class UFortCreativeDiscoverySurfaceManager* Manager; // 0x4e0 (0x8)
	struct TArray<struct FCachedSurfaceData> CachedSurfacesData; // 0x4e8 (0x10)
	unsigned char unreflected_4f8[0x100]; // 0x4f8 (0x100) 
	class UFortGameActivityProvider* CachedWinterfestActivityProvider; // 0x5f8 (0x8)
	unsigned char unreflected_600[0x10]; // 0x600 (0x10) 
	class UFortActivityBrowserColorSchemeAsset* CurrentColorScheme; // 0x610 (0x8)
	unsigned char unreflected_618[0x8]; // 0x618 (0x8) 
	class UFortActivityCategoryPageView* CachedCategoryPageView; // 0x620 (0x8)
	class UFortActivityCreatorPageView* CachedCreatorPageView; // 0x628 (0x8)
	unsigned char padding_630[0x8]; // 0x630 (0x8)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme (Has no native function)
	void OnSwapColorScheme(bool& bInIsUsingAlternateColorScheme); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged (Has no native function)
	void OnPlayerQueueTypeChanged(enum EPlayerQueueType& PlayerQueueType); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme (Has no native function)
	void OnEnableColorScheme(bool& bIsColorSchemeActive); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected (Has no native function)
	void OnActivitySelected(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged (Underlying native function: HandleTabChanged 0x74210b8)
	void HandleTabChanged(struct FName& TabId); // (Final | Native | Private)
};

