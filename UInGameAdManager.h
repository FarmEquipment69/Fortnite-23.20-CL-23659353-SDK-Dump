// Class /Script/Engine.InGameAdManager
// Size: 0x60
class UInGameAdManager : public UPlatformInterfaceBase
{
	unsigned char bShouldPauseWhileAdOpen; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct TArray<struct FDelegate> ClickedBannerDelegates; // 0x40 (0x10)
	struct TArray<struct FDelegate> ClosedAdDelegates; // 0x50 (0x10)
};

