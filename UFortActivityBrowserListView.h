// Class /Script/DiscoveryBrowserUI.FortActivityBrowserListView
// Size: 0x460
class UFortActivityBrowserListView : public UListViewBase
{
	unsigned char unreflected_260[0xd8]; // 0x260 (0xd8) 
	float DirectionalNavigationTimeThreshold; // 0x338 (0x4)
	bool bLockPositionForController; // 0x33c (0x1)
	unsigned char unreflected_33d[0x3]; // 0x33d (0x3) 
	int LockedPositionAt; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	class UClass* PromotedActivityClass; // 0x348 (0x8)
	struct TMap<struct FName, class UClass*> RowTypes; // 0x350 (0x50)
	unsigned char padding_3a0[0xc0]; // 0x3a0 (0xc0)
};

