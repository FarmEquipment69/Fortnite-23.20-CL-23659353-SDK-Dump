// Class /Script/FortniteGame.FortCustomizationAssetLoader
// Size: 0x160
class UFortCustomizationAssetLoader : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FFortCustomizationAssetsToLoad CurrentAssetsToLoad; // 0x30 (0x30)
	struct FFortCustomizationAssetsToLoad PendingAssetsToLoad; // 0x60 (0x30)
	struct TArray<class UFortItemDefinition*> CurrentContentOnDemandItemDefs; // 0x90 (0x10)
	unsigned char unreflected_a0[0x38]; // 0xa0 (0x38) 
	struct TMap<struct FSoftObjectPath, class UObject*> LoadedAssetPaths; // 0xd8 (0x50)
	struct TWeakObjectPtr<class AFortPlayerPawn> PawnForOnDemandContentRelevance; // 0x128 (0x8)
	unsigned char padding_130[0x30]; // 0x130 (0x30)
};

