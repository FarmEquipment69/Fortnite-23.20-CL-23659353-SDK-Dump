// Class /Script/PictureInPictureDescriptors.PictureInPicturePartnerDataAsset
// Size: 0xf0
class UPictureInPicturePartnerDataAsset : public UPrimaryDataAsset
{
	struct FString PartnerName; // 0x30 (0x10)
	class UImage* ClientImage; // 0x40 (0x8)
	int MediaHeight; // 0x48 (0x4)
	int MediaWidth; // 0x4c (0x4)
	class UClass* MetadataOverlayClass; // 0x50 (0x8)
	struct TArray<struct FPictureInPictureActionConfig> Actions; // 0x58 (0x10)
	struct FPIPVideoPlayerAssetConfig AssetConfig; // 0x68 (0x88)
};

