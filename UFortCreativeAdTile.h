// Class /Script/FortniteUI.FortCreativeAdTile
// Size: 0x300
class UFortCreativeAdTile : public UCommonUserWidget
{
	class UEpicCMSImage* ImageCreativeAd; // 0x290 (0x8)
	struct FCreativeAdData CMSAdEntry; // 0x298 (0x68)

	/* Functions */

	// Function /Script/FortniteUI.FortCreativeAdTile.PopulateAdTile (Underlying native function: PopulateAdTile 0xa6674f4)
	void PopulateAdTile(struct FCreativeAdData& Entry); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.FortCreativeAdTile.OnCMSDataUpdated (Has no native function)
	void OnCMSDataUpdated(); // (Event | Public | BlueprintEvent)
};

