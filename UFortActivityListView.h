// Class /Script/DiscoveryBrowserUI.FortActivityListView
// Size: 0x3d8
class UFortActivityListView : public UListViewBase
{
	unsigned char unreflected_260[0xd8]; // 0x260 (0xd8) 
	float DirectionalNavigationTimeThreshold; // 0x338 (0x4)
	struct TEnumAsByte<EOrientation> Orientation; // 0x33c (0x1)
	unsigned char unreflected_33d[0x3]; // 0x33d (0x3) 
	float EntrySpacing; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	struct TMap<enum EActivityBrowserTileStyle, class UClass*> TileTypes; // 0x348 (0x50)
	unsigned char padding_398[0x40]; // 0x398 (0x40)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityListView.GetInViewCount (Underlying native function: GetInViewCount 0x7420dec)
	int GetInViewCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

