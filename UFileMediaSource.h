// Class /Script/MediaAssets.FileMediaSource
// Size: 0xb0
class UFileMediaSource : public UBaseMediaSource
{
	struct FString FilePath; // 0x88 (0x10)
	bool PrecacheFile; // 0x98 (0x1)
	unsigned char padding_99[0x17]; // 0x99 (0x17)

	/* Functions */

	// Function /Script/MediaAssets.FileMediaSource.SetFilePath (Underlying native function: SetFilePath 0x9bca87c)
	void SetFilePath(struct FString& Path); // (Final | Native | Public | BlueprintCallable)
};

