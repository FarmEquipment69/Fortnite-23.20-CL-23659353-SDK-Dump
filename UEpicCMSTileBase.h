// Class /Script/EpicCMSUIFramework.EpicCMSTileBase
// Size: 0x1540
class UEpicCMSTileBase : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x8]; // 0x1430 (0x8) 
	class UClass* DefaultTitleTextStyle; // 0x1438 (0x8)
	class UClass* FeaturedTitleTextStyle; // 0x1440 (0x8)
	struct FText Title; // 0x1448 (0x18)
	struct FString Link; // 0x1460 (0x10)
	bool bDownloadingExternalMedia; // 0x1470 (0x1)
	bool bRefreshingMcpCatalog; // 0x1471 (0x1)
	unsigned char unreflected_1472[0x6]; // 0x1472 (0x6) 
	class UTexture2D* ExternalMedia; // 0x1478 (0x8)
	unsigned char unreflected_1480[0x18]; // 0x1480 (0x18) 
	class UCommonLazyImage* LazyImageIcon; // 0x1498 (0x8)
	class UCommonTextBlock* TitleTextBlock; // 0x14a0 (0x8)
	class UCommonTextBlock* SubtitleTextBlock; // 0x14a8 (0x8)
	class UCommonTextBlock* EyebrowTextBlock; // 0x14b0 (0x8)
	unsigned char padding_14b8[0x88]; // 0x14b8 (0x88)

	/* Functions */

	// Function /Script/EpicCMSUIFramework.EpicCMSTileBase.Launch (Underlying native function: Launch 0x73d6298)
	void Launch(); // (Final | Native | Protected | BlueprintCallable)
};

