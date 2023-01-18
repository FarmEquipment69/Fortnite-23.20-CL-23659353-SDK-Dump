// Class /Script/DiscoveryBrowserUI.FortActivityPlayerView
// Size: 0x5c0
class UFortActivityPlayerView : public UFortActivityBrowserView
{
	unsigned char unreflected_488[0x8]; // 0x488 (0x8) 
	struct FName TabNameID; // 0x490 (0x4)
	unsigned char unreflected_494[0xc]; // 0x494 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4a0 (0xe0)
	class UClass* TabButtonClass; // 0x580 (0x8)
	class UFortTabListWidgetBase_Legacy* TabListPlayerViewTabs; // 0x588 (0x8)
	class UCommonActivatableWidgetSwitcher* SwitcherPlayerBrowserViews; // 0x590 (0x8)
	class UFortActivityPlayerBrowserView* BrowserViewFavorites; // 0x598 (0x8)
	class UFortActivityPlayerBrowserView* BrowserViewHistory; // 0x5a0 (0x8)
	unsigned char padding_5a8[0x18]; // 0x5a8 (0x18)
};

