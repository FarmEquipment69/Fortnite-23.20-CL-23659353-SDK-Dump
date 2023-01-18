// Class /Script/Engine.AsyncActionChangePrimaryAssetBundles
// Size: 0x88
class UAsyncActionChangePrimaryAssetBundles : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed; // 0x78 (0x10)

	/* Functions */

	// Function /Script/Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForPrimaryAssetList (Underlying native function: AsyncChangeBundleStateForPrimaryAssetList 0x9c8c5b4)
	static class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForPrimaryAssetList(class UObject*& WorldContextObject, struct TArray<struct FPrimaryAssetId*>& PrimaryAssetList, struct TArray<struct FName>& AddBundles, struct TArray<struct FName>& RemoveBundles); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AsyncActionChangePrimaryAssetBundles.AsyncChangeBundleStateForMatchingPrimaryAssets (Underlying native function: AsyncChangeBundleStateForMatchingPrimaryAssets 0x9c8c430)
	static class UAsyncActionChangePrimaryAssetBundles* AsyncChangeBundleStateForMatchingPrimaryAssets(class UObject*& WorldContextObject, struct TArray<struct FName>& NewBundles, struct TArray<struct FName>& OldBundles); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

