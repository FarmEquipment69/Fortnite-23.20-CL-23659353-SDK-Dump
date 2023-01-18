// Class /Script/FortniteUI.FortAsyncAction_LoadBannerAsset
// Size: 0x78
class UFortAsyncAction_LoadBannerAsset : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate BannerAssetLoadComplete; // 0x30 (0x10)
	unsigned char padding_40[0x38]; // 0x40 (0x38)

	/* Functions */

	// Function /Script/FortniteUI.FortAsyncAction_LoadBannerAsset.AsyncLoadBannerAsset (Underlying native function: AsyncLoadBannerAsset 0x145bfb8)
	static class UFortAsyncAction_LoadBannerAsset* AsyncLoadBannerAsset(class UObject*& WorldContextObject, struct TWeakObjectPtr<class UObject>& AssetToLoad, class UMaterialInstanceDynamic*& MIDRef, struct FName& BannerColorName); // (Final | Native | Static | Public | BlueprintCallable)
};

