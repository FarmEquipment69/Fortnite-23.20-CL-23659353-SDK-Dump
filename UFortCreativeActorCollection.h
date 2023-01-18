// Class /Script/FortniteGame.FortCreativeActorCollection
// Size: 0x230
class UFortCreativeActorCollection : public UPrimaryDataAsset
{
	unsigned char unreflected_30[0x8]; // 0x30 (0x8) 
	struct FText CollectionName; // 0x38 (0x18)
	class UFortCreativeTagFilter* TagFilter; // 0x50 (0x8)
	struct TSet<struct TWeakObjectPtr<class UClass>> AdditionalActors; // 0x58 (0x50)
	struct TSet<struct TWeakObjectPtr<class UClass>> RestrictedActors; // 0xa8 (0x50)
	struct TWeakObjectPtr<class UClass> GameStateToIncludingBuildingActorsFrom; // 0xf8 (0x28)
	unsigned char padding_120[0x110]; // 0x120 (0x110)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeActorCollection.OnAssetUpdated (Underlying native function: OnAssetUpdated 0x87b5884)
	void OnAssetUpdated(struct FAssetData& InAssetData); // (Final | Native | Protected | HasOutParms | HasDefaults | Const)
};

