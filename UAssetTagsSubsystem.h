// Class /Script/AssetTags.AssetTagsSubsystem
// Size: 0x30
class UAssetTagsSubsystem : public UEngineSubsystem
{

	/* Functions */

	// Function /Script/AssetTags.AssetTagsSubsystem.K2_GetCollectionsContainingAsset (Underlying native function: K2_GetCollectionsContainingAsset 0x808a02c)
	struct TArray<struct FName> K2GetCollectionsContainingAsset(struct FSoftObjectPath& AssetPath); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetPtr (Underlying native function: GetCollectionsContainingAssetPtr 0x8089e90)
	struct TArray<struct FName> GetCollectionsContainingAssetPtr(class UObject*& AssetPtr); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAssetData (Underlying native function: GetCollectionsContainingAssetData 0x8089c88)
	struct TArray<struct FName> GetCollectionsContainingAssetData(struct FAssetData& AssetData); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollectionsContainingAsset (Underlying native function: GetCollectionsContainingAsset 0x8089af0)
	struct TArray<struct FName> GetCollectionsContainingAsset(struct FName& AssetPathName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AssetTags.AssetTagsSubsystem.GetCollections (Underlying native function: GetCollections 0x8089a7c)
	struct TArray<struct FName> GetCollections(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AssetTags.AssetTagsSubsystem.GetAssetsInCollection (Underlying native function: GetAssetsInCollection 0x80899e4)
	struct TArray<struct FAssetData> GetAssetsInCollection(struct FName& Name); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AssetTags.AssetTagsSubsystem.CollectionExists (Underlying native function: CollectionExists 0x8089968)
	bool CollectionExists(struct FName& Name); // (Final | Native | Public | BlueprintCallable)
};

