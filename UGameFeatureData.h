// Class /Script/GameFeatures.GameFeatureData
// Size: 0x50
class UGameFeatureData : public UPrimaryDataAsset
{
	struct TArray<class UGameFeatureAction*> Actions; // 0x30 (0x10)
	struct TArray<struct FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x40 (0x10)
};

