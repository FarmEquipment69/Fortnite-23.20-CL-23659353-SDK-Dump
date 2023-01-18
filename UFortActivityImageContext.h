// Class /Script/FortniteUI.FortActivityImageContext
// Size: 0x140
class UFortActivityImageContext : public UFortLocalPlayerSubsystem
{
	struct TMap<struct FString, struct FFortActivityImageCache> SmallCachedImageMap; // 0x30 (0x50)
	struct TMap<struct FString, struct FFortActivityImageCache> LargeCachedImageMap; // 0x80 (0x50)
	struct TMap<struct FString, struct FFortActivityCompressedImageCache> CompressedImageMap; // 0xd0 (0x50)
	struct TArray<struct FString> PendingImageKeys; // 0x120 (0x10)
	struct TArray<struct FString> PendingCompressedImageKeys; // 0x130 (0x10)
};

