// Class /Script/UMG.AsyncTaskDownloadImage
// Size: 0x50
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSuccess; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40 (0x10)

	/* Functions */

	// Function /Script/UMG.AsyncTaskDownloadImage.DownloadImage (Underlying native function: DownloadImage 0x9aec1a4)
	static class UAsyncTaskDownloadImage* DownloadImage(struct FString& URL); // (Final | Native | Static | Public | BlueprintCallable)
};

