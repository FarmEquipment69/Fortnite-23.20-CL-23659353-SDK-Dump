// Class /Script/FortniteUI.FortCampaignPurchaseScreen
// Size: 0x440
class UFortCampaignPurchaseScreen : public UCommonActivatableWidget
{
	struct TArray<class UTexture2D*> ImageCycle; // 0x3a8 (0x10)
	float ImageCycleTime; // 0x3b8 (0x4)
	bool bAllowCodeRedemption; // 0x3bc (0x1)
	unsigned char unreflected_3bd[0x1b]; // 0x3bd (0x1b) 
	class UWidgetAnimation* BoundAnimIntro; // 0x3d8 (0x8)
	class UWidgetAnimation* BoundAnimOutro; // 0x3e0 (0x8)
	class UImage* ImageProductLogo; // 0x3e8 (0x8)
	class UCommonTextBlock* TextTagline; // 0x3f0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x3f8 (0x8)
	class UCommonButtonLegacy* ButtonPurchase; // 0x400 (0x8)
	class UCommonButtonLegacy* ButtonRedeemCode; // 0x408 (0x8)
	class UCommonButtonLegacy* ButtonBack; // 0x410 (0x8)
	class UImage* ImageUpsellImage; // 0x418 (0x8)
	class UCommonActivatableWidgetSwitcher* ActivatableSwitcherPreviewOrStore; // 0x420 (0x8)
	class UClass* StoreScreenClass; // 0x428 (0x8)
	class UFortMtxStoreRootBase_Legacy* StoreScreenInstance; // 0x430 (0x8)
	unsigned char padding_438[0x8]; // 0x438 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortCampaignPurchaseScreen.OnStoreScreenCreated (Has no native function)
	void OnStoreScreenCreated(class UFortMtxStoreRootBase_Legacy*& StoreScreen); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCampaignPurchaseScreen.OnImageCycleTimeElapsed (Has no native function)
	void OnImageCycleTimeElapsed(); // (Event | Protected | BlueprintEvent)
};

