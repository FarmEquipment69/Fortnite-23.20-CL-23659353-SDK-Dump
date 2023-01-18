// Class /Script/Engine.AsyncActionLoadPrimaryAssetClassList
// Size: 0x88
class UAsyncActionLoadPrimaryAssetClassList : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed; // 0x78 (0x10)

	/* Functions */

	// Function /Script/Engine.AsyncActionLoadPrimaryAssetClassList.AsyncLoadPrimaryAssetClassList (Underlying native function: AsyncLoadPrimaryAssetClassList 0x9c8c9e0)
	static class UAsyncActionLoadPrimaryAssetClassList* AsyncLoadPrimaryAssetClassList(class UObject*& WorldContextObject, struct TArray<struct FPrimaryAssetId*>& PrimaryAssetList, struct TArray<struct FName>& LoadBundles); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

