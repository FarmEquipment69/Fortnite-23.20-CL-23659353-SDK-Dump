// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
// Size: 0x5b0
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{
	unsigned char unreflected_488[0x8]; // 0x488 (0x8) 
	class UFortGameActivityProvider* ActivityProvider; // 0x490 (0x8)
	class UFortActivityTileView* TileViewPlayerActivities; // 0x498 (0x8)
	struct FName TabNameID; // 0x4a0 (0x4)
	unsigned char unreflected_4a4[0xc]; // 0x4a4 (0xc) 
	struct FFortTabButtonLabelInfo TabButtonLabelInfo; // 0x4b0 (0xe0)
	enum EFortCreativeDiscoveryPlayHistoryType PlayHistoryProviderType; // 0x590 (0x1)
	unsigned char padding_591[0x1f]; // 0x591 (0x1f)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro (Underlying native function: PlayViewIntro 0x7421584)
	void PlayViewIntro(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro (Has no native function)
	void OnPlayViewIntro(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated (Has no native function)
	void BPOnTileViewUpdated(); // (Event | Protected | BlueprintEvent)
};

