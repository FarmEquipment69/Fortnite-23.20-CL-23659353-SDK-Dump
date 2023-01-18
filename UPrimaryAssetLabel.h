// Class /Script/Engine.PrimaryAssetLabel
// Size: 0x68
class UPrimaryAssetLabel : public UPrimaryDataAsset
{
	struct FPrimaryAssetRules Rules; // 0x30 (0xc)
	unsigned char bLabelAssetsInMyDirectory; // 0x3c (0x1)
	unsigned char bIsRuntimeLabel; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct TArray<struct TWeakObjectPtr<class UObject>> ExplicitAssets; // 0x40 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> ExplicitBlueprints; // 0x50 (0x10)
	struct FCollectionReference AssetCollection; // 0x60 (0x4)
	unsigned char padding_64[0x4]; // 0x64 (0x4)
};

