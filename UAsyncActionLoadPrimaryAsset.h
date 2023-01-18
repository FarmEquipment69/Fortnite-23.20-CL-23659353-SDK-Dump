// Class /Script/Engine.AsyncActionLoadPrimaryAsset
// Size: 0x88
class UAsyncActionLoadPrimaryAsset : public UAsyncActionLoadPrimaryAssetBase
{
	struct FMulticastInlineDelegate Completed; // 0x78 (0x10)

	/* Functions */

	// Function /Script/Engine.AsyncActionLoadPrimaryAsset.AsyncLoadPrimaryAsset (Underlying native function: AsyncLoadPrimaryAsset 0x9c8c7b0)
	static class UAsyncActionLoadPrimaryAsset* AsyncLoadPrimaryAsset(class UObject*& WorldContextObject, struct FPrimaryAssetId*& PrimaryAsset, struct TArray<struct FName>& LoadBundles); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

