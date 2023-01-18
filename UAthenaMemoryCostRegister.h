// Class /Script/FortniteGame.AthenaMemoryCostRegister
// Size: 0xa0
class UAthenaMemoryCostRegister : public UPrimaryDataAsset
{
	struct TArray<struct TWeakObjectPtr<class UCustomCharacterPart>> ExtraCharacterParts; // 0x30 (0x10)
	struct TArray<struct FTotalResKBIncAssetCostPair> TotalResKBIncPerAsset; // 0x40 (0x10)
	unsigned char padding_50[0x50]; // 0x50 (0x50)
};

