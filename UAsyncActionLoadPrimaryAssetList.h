// Class /Script/Engine.AsyncActionLoadPrimaryAssetList
// Size: 0x88
class UAsyncActionLoadPrimaryAssetList : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed; // 0x78 (0x10)

	/* Functions */

	// Function /Script/Engine.AsyncActionLoadPrimaryAssetList.AsyncLoadPrimaryAssetList (Underlying native function: AsyncLoadPrimaryAssetList 0x9c8cb64)
	static class UAsyncActionLoadPrimaryAssetList* AsyncLoadPrimaryAssetList(class UObject*& WorldContextObject, struct TArray<struct FPrimaryAssetId*>& PrimaryAssetList, struct TArray<struct FName>& LoadBundles); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

