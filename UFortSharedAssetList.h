// Class /Script/FortniteGame.FortSharedAssetList
// Size: 0x50
class UFortSharedAssetList : public UDataAsset
{
	struct TArray<class UFortWorldItemDefinition*> SharedItemsToFullyLoad; // 0x30 (0x10)
	struct TArray<struct TWeakObjectPtr<class UWorld>> SharedAdditionalLevels; // 0x40 (0x10)
};

