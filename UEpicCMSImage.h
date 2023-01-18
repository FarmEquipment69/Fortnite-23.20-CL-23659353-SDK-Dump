// Class /Script/EpicCMSUIFramework.EpicCMSImage
// Size: 0x470
class UEpicCMSImage : public UCommonLazyImage
{
	struct FMulticastInlineDelegate OnImageLoadingComplete; // 0x380 (0x10)
	bool bMatchImageSize; // 0x390 (0x1)
	unsigned char unreflected_391[0xf]; // 0x391 (0xf) 
	struct FSlateBrush LoadingFailFallback; // 0x3a0 (0xc0)
	class UTexture2D* ExternalMedia; // 0x460 (0x8)
	bool bDownloadingExternalMedia; // 0x468 (0x1)
	unsigned char padding_469[0x7]; // 0x469 (0x7)

	/* Functions */

	// Function /Script/EpicCMSUIFramework.EpicCMSImage.SetMediaURL (Underlying native function: SetMediaURL 0x73d6358)
	void SetMediaURL(struct FString& MediaUrl); // (Final | Native | Public | BlueprintCallable)
};

