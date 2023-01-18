// Class /Script/FortniteUI.AthenaExclusiveRewardBanner
// Size: 0x2b0
class UAthenaExclusiveRewardBanner : public UCommonUserWidget
{
	unsigned char unreflected_290[0x10]; // 0x290 (0x10) 
	class UCommonRichTextBlock* RichTextRewardMessage; // 0x2a0 (0x8)
	class UFortLazyImage* ImageRewardIcon; // 0x2a8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaExclusiveRewardBanner.OnInitBannerIcon (Has no native function)
	void OnInitBannerIcon(class UTexture2D*& RewardIcon); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaExclusiveRewardBanner.OnInitBanner (Has no native function)
	void OnInitBanner(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaExclusiveRewardBanner.OnClearBanner (Has no native function)
	void OnClearBanner(); // (Event | Protected | BlueprintEvent)
};

