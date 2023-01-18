// Class /Script/FortniteGame.FortExposedAssetList
// Size: 0x58
class UFortExposedAssetList : public UPrimaryDataAsset
{
	struct TArray<struct FFortExposedAsset> ExposedAssets; // 0x30 (0x10)
	struct TArray<struct FFortExposedDirectory> ExposedDirectories; // 0x40 (0x10)
	bool bExposePublicAssetsInPlugin; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

